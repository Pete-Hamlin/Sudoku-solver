# Sudoku Solver #

Basic sudoku solver written in c++ language. Made mostly as a practice to implementing a backtracking algorithm in a low-mid level language.

## Design Principles ##

This solver relies heavily on Donald Knuth's popularised Algorithm X.
* Implements a version of the Dancing Links algorithm (DLX)
* 9x9 array used for final solution of puzzle
* Uses a 324x729 matrix consisting of only 1 and null values to solve the exact cover problem presented by the sudoku


Stages required for the solver:
* Build exact cover matrix for 9x9 sudoku
* Read input of partial sudoku (these elements are guaranteed to be part of the final solution)
* Cover relative elements of partial solution
* Run dancing links algorithm on reduced matrix


## Dancing Links ##

Matrix will be populated with constraints(columns) and rows(choices).

A sudoku has 4 constraints that apply to each of its 81 fields:
* Position: Only 1 number per cell
* Row: only one of each number per row
* Column: only one of each number per column
* Grid: only one of each number per 3x3 grid

This gives us 4x81 = 324 columns

Each row represents every single possible permutation for every number (i.e., every number 1-9 in space 0-80). Each row will have exactly 4 1's present (corresponding to the 4 constraints).

This gives us 9x81 = 729 rows


### Constraints (explained) ###

`1..9row0..8`
* Leading number represents input number (1-9)
* row /col/grid represents which type of constraint is being tested
* Trailing number represents field of constraint is to be filled
* e.g. 1row4 represents a 1 input into row 4
* Grids are always of the format:  

  0 1 2  
  3 4 5  
  6 7 8  

### Choices (explained) ###

`1..91..91..9`
* First digit is input number 1-9
* Second digit represents row placement from 1-9
* Third digit represents column placement from 1-9
* e.g. 524 is the number 5 entered into row 2, column 4

## Building the exact Cover Matrix ##

In order to solve any arbitrary Sudoku, the full exact cover matrix must be built. As there are 4 constraints to work with, this can be effectively done using 4 iterators on a row by row basis (as each row should only contain 4 1s).

Each of the 4 constraints provides a separate maths problem in the form of an algebraic equation.

## Reference Material ##

Java implementation of dancing link algorithm:
https://www.ocf.berkeley.edu/~jchu/publicportal/sudoku/sudoku.paper.html#ExactCover
