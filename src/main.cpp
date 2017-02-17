//Standard Includes
#include <iostream>
#include <string>
#include <cmath>
#include <stdlib.h>

#include "links.h"
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
  int i = 0, j = GRIDSQUARE, k = GRIDSQUARE*2, l = GRIDSQUARE*3, candidate = 0, zoneCount=0, zoneLevel=0, count;   //Iterators
  //DataNode matrix[ROW][COLUMN];
  ColHeader lines[ROW];
  ColHeader *temp = new ColHeader;
  genHeaders(lines);

  cout << ROW << endl;
  cout << COLUMN << endl;             //DEBUG

  //Build exact cover matrix
  for (count = 1; count <= ROW; count++) {
    //Replace this section with actual program logic
/*
    cout << candidate << " ";
    cout << i << " ";
    cout << j << " ";
    cout << k << " ";
    cout << l << endl;
*/
    //End of section to replace
    j++;
    k++;
    l++;
    candidate++;
    if (count % GRIDSIZE == 0) {
      candidate = 0;
      i++;                                                                      //Restraint 1 rule - Number in every cell
      j = GRIDSQUARE + (count/GRIDSQUARE)*GRIDSIZE;                             //Restraint 2 rule - No duplicates per row
      k = GRIDSQUARE*2 + count % GRIDSQUARE;                                    //Restraint 3 rule - No duplicates per column
      //Annoying zone dependant logic
      if (zoneCount < ZONESIZE-1) {
        zoneCount ++;
      }
      else {
        zoneCount = 0;
      }
      zoneLevel = count/(GRIDSQUARE*ZONESIZE);
      l = GRIDSQUARE*3 + GRIDSIZE*zoneCount + zoneLevel*(GRIDSQUARE/ZONESIZE);  //Restraint 4 rule - No dulicates per zone
    }

  }
  return 0;
}
