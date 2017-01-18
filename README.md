# Header 1 #

Basic sudoku solver written in c++ language.

## Design Principles ##

* Implements a version of the Dancing Links algorithm (DLX)
* 9x9 array used for solving puzzle

## Dancing Links ##

Matrix will be populated with constraints(columns) and rows(choices).

Variables required: *level, branch, col_sel, row_sel, col_tot[],*

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

`1..900..80`
* First digit is input number 1-9
* Last 2 digits represent the cell number (0-80)
* e.g. 524 is the number 5 entered into cell 24
* Cells are in the format:  

  00 01 02 03 04 05 06 07 08  
  09 10 11 12 13 14 15 16 17  
  18 19 20 21 22 23 24 25 26  
  27 28 29 30 31 32 33 34 35  
  36 37 38 39 40 41 42 43 44  
  45 46 47 48 49 50 51 52 53  
  54 55 56 57 58 59 60 61 62  
  63 64 65 66 67 68 69 70 71  
  72 73 74 75 76 77 78 79 80  
