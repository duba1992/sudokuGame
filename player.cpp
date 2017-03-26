#include<iostream>
#include "player.h"
#include "Header.h"

using namespace std;

void sudokuDelete(Sudoku *s,int x,int y){
   
    
    if(s->array[x-1][y-1]>9 || s->array[x-1][y-1] ==0 ){
        s->array[x-1][y-1] = 0;
    }

    else {
      cout<<"Error, this is start field"<<endl;
        cout<<"Enter any number"<<endl;
        int num;
        do {
            cin>>num;
        }while(num);
        
    }
    
}
void sudokuPlayer(Sudoku *s,int x,int y){
    cout<<"Please, enter from 0 to 9"<<endl;

    int j = 0;
    do{
        cin>>j;
        if (j>9 || j<0){
            cout<<"error!!!"<<endl;
            cout<<"Please, enter from 0 to 9"<<endl;
        }
    }while(j>9);
    if(s->array[x-1][y-1] == 0){
        s->array[x-1][y-1] = j + 9;
    }
}
