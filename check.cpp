
#include "check.h"

bool sudokuCheck(int sudoku[9][9], int &x, int &y){
    int cnt;
    cnt =0;
    for (int k=0;k<9; k++){
        if (sudoku[x][y] != sudoku[x][k] || sudoku [x][y] == sudoku[x][k]){
           
            ++cnt;
            
        }
        else {
            return false;
        }
    }
    for (int k=0;k<9;k++){
        if (sudoku[x][y] != sudoku[k][x] || sudoku [x][y] == sudoku[k][x]){
            
            ++cnt;
            
        }
        else {
            return false;
        }
        
    }
    
    
        return false;
    
}
