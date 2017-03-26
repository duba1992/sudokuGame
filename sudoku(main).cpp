#include<iostream>
#include"Header.h"
using namespace std;
int main() {
    int sudoku[9][9];
    int level = 2;
    
    sudokuFill(sudoku);
    sudokuShake(sudoku);
    sudokuStart(sudoku, level);
    sudokuShow(sudoku);
    
    
}

