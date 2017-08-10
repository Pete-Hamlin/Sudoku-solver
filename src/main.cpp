//Standard Includes
#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <stdlib.h>

#include "dancing_links.h"
#include "functions.h"

using namespace std;

//Globals
// const int GRIDSIZE = 4;     //The size of the Sudoku square (traditionally 9x9)
// const int ZONESIZE = 2;     //This will be sqrt(GRIDSIZE) in most cases
// const int RESTRAINT = 4;
//
// const int ROW = iPow(GRIDSIZE, 3);
// const int COLUMN = iPow(GRIDSIZE, 2)*RESTRAINT;
// const int GRIDSQUARE = iPow(GRIDSIZE, 2);
//Functions


int main() {
    //Variables
    int size, width, square, row, col,
        zone, level;

    cout << "Please select a grid size:" << endl;
    cin >> size;
    row = iPow(size, 6);
    col = iPow(size, 4)*4;
    width = iPow(size, 2);
    square = iPow(size, 4);
    int w=0, x=square, y=square*2, z=square*3;             // Iterators

    Solution sol1(size, row , col);
    cout << "Building columns...";
    sol1.buildCols();
    cout << "success!" << endl << "Populating...";
    sol1.populate();
    cout << "Success!" << endl;


    //Replace this section with actual program logic
/*
    cout << cand << " ";
    cout << i << " ";
    cout << j << " ";
    cout << k << " ";
    cout << l << endl;
*/
    //End of section to replace
  // for (int i=0; i<COLUMN; i++) {
  //   // Clean up
  //   Node *tmp;
  //   tmp = new Node();
  //   tmp = head;
  //   head = tmp->_right;
  //   delete tmp;
  // }

  return 0;
}
