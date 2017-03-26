#include<iostream>
#include"Header.h"
#include <stdlib.h>
#include<time.h>
#include <stdio.h>
using namespace std;

void sudokuFill(int mas[9][9]) {
    
    
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
            mas[x][y] = count;
            ++count;
        }
    }
}
void sudokuShow(int mas[9][9]) {
    for (int x = 0; x < 9;x++) {
        for (int y = 0; y < 9; y++) {
            
            if (mas[x][y] == 0) {
                cout << "  ";
            }
            else {
                cout << mas[x][y] << " ";
            }
        }
        cout << endl;
    }
}
void sudokuShake(int mas[9][9]) {
    
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
                        swap(mas[choise][y], mas[choise + 1][y]);
                        choise = tmp;
                    }
                    if (horver == 0) {
                        swap(mas[y][choise], mas[y][choise + 1]);
                        choise = tmp;
                    }
                }
                if (choise == 0 || choise == 3 || choise == 6) {
                    if (horver) {
                        swap(mas[choise][y], mas[choise + 2][y]);
                        choise = tmp;
                    }
                    if (horver == 0) {
                        swap(mas[y][choise], mas[y][choise + 2]);
                        choise = tmp;
                    }
                }
                if (choise == 2 || choise == 5 || choise == 8) {
                    if (horver) {
                        swap(mas[choise][y], mas[choise - 1][y]);
                        choise = tmp;
                    }
                    if (horver == 0) {
                        swap(mas[y][choise], mas[y][choise - 1]);
                        choise = tmp;
                    }
                }
            }
        }
        ++shake;
    }
}
void sudokuStart(int mas[9][9], int level) {
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
        if (mas[x][y] == 0) {
            continue;
        }
        else {
            mas[x][y] = 0;
            --zero;
        }
        
    }
    
}


