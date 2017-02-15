#include <iostream>
#include <fstream>
#include <cmath>
#include <string>

//#include "links.h"
#include "functions.h"

using namespace std;

//Globals
const int GRIDSIZE = 9;
const int ZONESIZE = 3;     //This will be sqrt(GRIDSIZE) in most cases
const int RESTRAINT = 4;

const int ROW = iPow(GRIDSIZE, 3);
const int COLUMN = iPow(GRIDSIZE, 2)*RESTRAINT;
const int GRIDSQUARE = iPow(GRIDSIZE, 2);
//Functions


int main() {
  //Variables
  int i = 0, j = GRIDSQUARE, k = GRIDSQUARE*2, l = GRIDSQUARE*3, zoneCount=0, zoneLevel=0, count;   //Iterators

  //cout << ROW << endl;
  //cout << COLUMN << endl;             //DEBUG

  //Build exact cover matrix
  for (count = 1; count <= ROW; count++) {
    cout << i << " ";
    cout << j-GRIDSQUARE << " ";
    cout << k-2*GRIDSQUARE << " ";
    cout << l-3*GRIDSQUARE << endl;
    j++;
    k++;
    l++;
    if (count % GRIDSIZE == 0) {
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
      l = GRIDSQUARE*3 + GRIDSIZE*zoneCount + zoneLevel*(GRIDSQUARE/ZONESIZE);    //Restraint 4 rule - No dulicates per zone
    }

  }
  return 0;
}
