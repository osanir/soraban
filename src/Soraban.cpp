#include "../include/Soraban.h"
using namespace std;
Soraban::Soraban()
{
    initArrays();
}

void Soraban::initArrays(){
    int multiplier = 1;
    for(int x=5; x>=0; x--){
        for(int y=2; y<7; y++){
            valueOfIndex[y][x][0] = (y-2)*multiplier;
        }
        multiplier = multiplier * 10;
    }

    multiplier = 5;
    for(int x=5; x>=0; x--){
        for(int y=1; y>=0; y--){
            valueOfIndex[y][x][0] = (1-y)*multiplier;
        }
        multiplier = multiplier * 10;
    }

    for(int y=0; y<7; y++){
        for(int x=0; x<6; x++){
            if( valueOfIndex[y][x][0] == 0 )
                valueOfIndex[y][x][1] = 1;
            else
                valueOfIndex[y][x][1] = 0;
        }
    }
}
void Soraban::printArray(){
    cout << "   X     0     1     2     3     4     5" << endl;
    cout << " Y|";
    for(int i=0; i<38; i++) cout << "-";
    cout << endl;

    for(int y=0; y<7; y++){
        if( y == 2 ){
            cout << "  |";
            for(int i=0; i<38; i++) cout << "-";
            cout << endl;
        }
        cout << y << " | ";

        for(int x=0; x<6; x++){
            if(valueOfIndex[y][x][1] == 1)
                cout << "     .";
            else
                cout << "     *";
        }
        cout << endl;
    }
}

void Soraban::calculate(){
    int sum=0;
    for(int y=0; y<7; y++){
        for(int x=0; x<6; x++){
            if( valueOfIndex[y][x][1] == 1)
                sum += valueOfIndex[y][x][0];
        }
    }

    cout << "Current Sum: " << sum << endl;
}

void Soraban::shiftBead(){
    int x, y;
    cout << "Enter X coordinate: ";
    cin >> x;
    cout << "Enter Y coordinate: ";
    cin >> y;
    if( ( x>=0 && x <= 5) && ( y>=0 && y <=6)){
        if(y<2){
            valueOfIndex[y][x][1] = 1;
            if( y == 0 )
                valueOfIndex[y+1][x][1] = 0;
            else
                valueOfIndex[y-1][x][1] = 0;
        }else {
            for(int i=2; i<7; i++){
                valueOfIndex[i][x][1] = 0;
            }
            valueOfIndex[y][x][1] = 1;
        }

    }else {
        cout << "Invalid coordinate! ";
    }
}

void Soraban::clearScr(){
    cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
}
