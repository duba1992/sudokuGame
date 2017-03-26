#include "Header.h"
#include "check.h"

int sudokuHorizont(Sudoku *s, int x, int y){

    for (int k=0;k<9; ){
        if (s->array[x][y] != s->array[x][k] || s->array[x][y] == s->array[x][k]){
           
            k++;
            
        }
        else {
            return 0;
        }
    }
    return 1;
}
int sudokuVertical(Sudoku *s, int x, int y){
    
    for (int k=0;k<9;){
        if (s->array[x][y] != s->array[k][x] || s->array[x][y] == s->array[k][x]){
            
            k++;
            
        }
        else {
            return 0;
        }
        
    }
    
    
    
    return 1;
    
}
int sudokuSquare(Sudoku *s, int x,int y){
    int j = x;
    int k = y;
    
    if (x == 1 || x == 4 || x == 7){
        j = x - 1;
    }
    if (x == 2 || x == 5 || x == 8){
        j = x - 2;
    }
    if (y == 1 || y == 4|| y == 7){
        k = y - 1;
    }
    if (y == 2 || y == 5 || y == 8){
        k = y - 2;
    }
    int m = j;
    int n = k;
   
        for (;j<m+3;j++){
            for ( ;k<n+3;k++){
                if(s->array[x][y] != s->array[j][k]){
                    continue;
                }
                if (s->array[x][y] == s->array[j][k]){
                    continue;
                }
                else{
                    return 0;
                }
            }
        }
    
    return 1;
    
}
