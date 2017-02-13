#include <iostream>
#include <fstream>
#include <cmath>
#include <string>

//#include "links.h"
#include "functions.h"

using namespace std;

//Globals
const int GRIDSIZE = 3;
const int RESTRAINT = 4;

const int ROW = iPow(GRIDSIZE, 6);
const int COLUMN = iPow(GRIDSIZE, 4)*RESTRAINT;
const int SPACER = iPow(GRIDSIZE, 2)*RESTRAINT;
//Functions


int main() {
  //Variables
  int i, j, k, l, count;   //Iterators

  cout << ROW << endl;
  cout << COLUMN << endl;             //DEBUG


  return 0;
}
