#include<iostream>
#include"Header.h"
#include <stdlib.h>
#include<time.h>
#include <stdio.h>
using namespace std;

void sudokuFill(Sudoku *s) {
    
    
    int count = 1;
    for (int x = 0; x < 9;x++) {
        for (int y = 0;y < 9;y++) {
            if (count > 9) {
                count = 1;
            }
            if (x == 1 && y == 0) {
                count = 4;
            }
            if (x == 2 && y == 0) {
                count = 7;
            }
            if (x == 3 && y == 0) {
                count = 2;
            }
            if (x == 4 && y == 0) {
                count = 5;
            }
            if (x == 5 && y == 0) {
                count = 8;
            }
            if (x == 6 && y == 0) {
                count = 3;
            }
            if (x == 7 && y == 0) {
                count = 6;
            }
            if (x == 8 && y == 0) {
                count = 9;
            }
            s->array[x][y] = count;// fill array without shacking
            ++count;
        }
    }
}
void sudokuShow(Sudoku *s) {
    for (int x = 0; x < 9;x++) {
               for (int y = 0; y < 9; y++) {
            
            if (s->array[x][y] > 9){
             cout <<"| "<<s->array[x][y] - 9 << " ";
            }
            if (s->array[x][y] == 0) {
                
                cout << "|   ";
            }
            if(s->array[x][y] > 0 && s->array[x][y]<10){
            
                cout <<"| "<<s->array[x][y] << " ";
            }
        }
        cout<<"|";
        cout << endl;
    }
}
void sudokuShake(Sudoku *s) {
    
    srand(time(NULL));
    int choise;
    int shake = 1;
    int tmp = 0;
    int horver = 1;
    while (shake != 50) {
        choise = rand() % 9;
        horver = rand() % 2;
        tmp = choise;
        for (int x = choise; x < choise + 1;x++) {
            for (int y = 0; y < 9; y++) {
                if (choise == 1 || choise == 4 || choise == 7) {
                    if (horver) {
                        swap(s->array[choise][y], s->array[choise + 1][y]);
                        choise = tmp;
                    }
                    if (horver == 0) {
                        swap(s->array[y][choise], s->array[y][choise + 1]);
                        choise = tmp;
                    }
                }
                if (choise == 0 || choise == 3 || choise == 6) {
                    if (horver) {
                        swap(s->array[choise][y], s->array[choise + 2][y]);
                        choise = tmp;
                    }
                    if (horver == 0) {
                        swap(s->array[y][choise], s->array[y][choise + 2]);
                        choise = tmp;
                    }
                }
                if (choise == 2 || choise == 5 || choise == 8) {
                    if (horver) {
                        swap(s->array[choise][y], s->array[choise - 1][y]);
                        choise = tmp;
                    }
                    if (horver == 0) {
                        swap(s->array[y][choise], s->array[y][choise - 1]);
                        choise = tmp;
                    }
                }
            }
        }
        ++shake;
    }
}
void sudokuStart(Sudoku *s, int level) {
    srand(time(NULL));
    int zero = 0;
    int x = 0;
    int y = 0;
    switch (level){
        case 1: {
            zero = 52;
            break;
        }
        case 2: {
            zero = 60;
        }
        case 3: {
            zero = 65;
        }
        default:
            break;
    }
    while (zero !=0) {
        x = rand() % 9;
        y = rand() % 9;
        if (s->array[x][y] == 0) {
            continue;
        }
        else {
            s->array[x][y] = 0;
            --zero;
        }
        
    }
    
}


