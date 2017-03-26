#include<iostream>
#include"Header.h"
#include "player.h"
#include "check.h"
using namespace std;
int main() {
    Sudoku s;
    int level = 2;
    int sum = 0;
    int x = 0, y = 0;
    int hor = 0,ver = 0,square = 0;
    int c = 1;
    sudokuFill(&s);
    while(sum != 243){
        
        sudokuShow(&s);
        sum = 0;
        for(int x =0;x<9;x++){
            for(int y = 0;y<9;y++){
                hor = sudokuHorizont(&s, x, y);
                if(hor){
                    ++sum;
                }
                else {
                    break;
                }
                ver = sudokuVertical(&s, x, y);
                if(ver){
                    ++sum;
                }
                else{
                    break;
                }
                square = sudokuSquare(&s, x, y);
                if (square){
                    
                    ++sum;
                }
                else{
                    break;
                }
            }
        }
    }
    cout<<"Good"<<endl;
   
    do{
        cout<<"Enter lever\n1.Easy\n2.Middle\n3.Hard"<<endl;
        cin>>level;
        if(level<1 || level >3){
            cout<<"Error"<<endl;
        }
    }while(level<1 || level >3);
    sudokuFill(&s);
    sudokuShake(&s);
    sudokuStart(&s, level);
    sudokuShow(&s);

    while(sum != 81*3){
           do{
            cout<<"Enter column"<<endl;
            cin>>x;
            if(x>9 || x<1){
                cout<<"Wrong column"<<endl;
                cout<<"Please, enter from 1 to 9"<<endl;
                continue;
            }
            cout<<"Enter line"<<endl;
            cin>>y;
               if(y>9 || y<1){
                cout<<"Wrong line"<<endl;
                cout<<"Please, enter from 1 to 9"<<endl;
                continue;
            }
               c = 0;
               
        }while(c == 1);
    
    sudokuDelete(&s,x,y);
    sudokuPlayer(&s,x, y);
    sudokuShow(&s);
    sum = 0;
    for(int x =0;x<9;x++){
        for(int y = 0;y<9;y++){
            hor = sudokuHorizont(&s, x, y);
            if(hor){
                ++sum;
            }
            else {
                break;
            }
            ver = sudokuVertical(&s, x, y);
            if(ver){
                ++sum;
            }
            else{
                break;
            }
            if (square){
                square = sudokuSquare(&s, x, y);
                ++sum;
            }
            else{
                break;
            }
        }
    }
}
}


