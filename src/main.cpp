//Standard Includes
#include <iostream>
#include <string>
#include <cmath>
#include <stdlib.h>

#include "links.h"
#include "lists.h"
#include "functions.h"

using namespace std;

//Globals
const int GRIDSIZE = 9;     //The size of the Sudoku square (traditionally 9x9)
const int ZONESIZE = 3;     //This will be sqrt(GRIDSIZE) in most cases
const int RESTRAINT = 4;

const int ROW = iPow(GRIDSIZE, 3);
const int COLUMN = iPow(GRIDSIZE, 2)*RESTRAINT;
const int GRIDSQUARE = iPow(GRIDSIZE, 2);
//Functions


int main() {
  //Variables
  int i = 0, j = GRIDSQUARE, k = GRIDSQUARE*2, l = GRIDSQUARE*3, cand = 1, zoneCount=0, zoneLevel=0, countY, countX;   //Iterators
  int matrix[ROW][COLUMN];
  /*
  Column cols[COLUMN];
  for (countX = 0; countX < COLUMN; countX++) {
    cols[countX] = new Column;
  }
  */
  //ColHeader lines[ROW];
  //ColHeader *temp = new ColHeader;
  //genHeaders(lines);

  cout << ROW << endl;
  cout << COLUMN << endl;             //DEBUG

  //Build exact cover matrix
  for (countY = 1; countY <= ROW; countY++) {
    //Replace this section with actual program logic
    //genNode (i, ROW, cand)
    //genNode (j, ROW, cand)
    //genNode (k, ROW, cand)
    //genNode (l, ROW, cand)
/*
    cout << cand << " ";
    cout << i << " ";
    cout << j << " ";
    cout << k << " ";
    cout << l << endl;
*/
    //End of section to replace
    j++;
    k++;
    l++;
    cand++;
    if (countY % GRIDSIZE == 0) {
      cand = 1;
      i++;                                                                      //Restraint 1 rule - Number in every cell
      j = GRIDSQUARE + (countY/GRIDSQUARE)*GRIDSIZE;                             //Restraint 2 rule - No duplicates per row
      k = GRIDSQUARE*2 + countY % GRIDSQUARE;                                    //Restraint 3 rule - No duplicates per column
      //Annoying zone dependant logic
      if (zoneCount < ZONESIZE-1) {
        zoneCount ++;
      }
      else {
        zoneCount = 0;
      }
      zoneLevel = countY/(GRIDSQUARE*ZONESIZE);
      l = GRIDSQUARE*3 + GRIDSIZE*zoneCount + zoneLevel*(GRIDSQUARE/ZONESIZE);  //Restraint 4 rule - No dulicates per zone
    }

  }
  return 0;
}
