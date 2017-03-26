#ifndef A_H_INCLUDED // если этот файл ещё не включён
#define A_H_INCLUDED // включить этот файл
struct Sudoku{
    int array[9][9];
};
#endif
void sudokuFill(Sudoku *s);
void sudokuShow(Sudoku *s);
void sudokuShake(Sudoku *s);
void sudokuStart(Sudoku *s, int level);
