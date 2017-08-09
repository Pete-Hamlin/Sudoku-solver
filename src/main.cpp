//Standard Includes
#include <iostream>
#include <string>
#include <cmath>
#include <vector>
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
  //int i = 0, j = GRIDSQUARE, k = GRIDSQUARE*2, l = GRIDSQUARE*3, cand = 1, zoneCount=0, zoneLevel=0, countY, countX;   //Iterators

  // Create headers
  Node *head = NULL;
  for (int i=0; i<COLUMN; i++) {
    Node *tmp1;
    tmp1 = new Node();
    tmp1 = head;
    if (tmp1!=NULL) {
      while(tmp1->_right!=NULL)
        tmp1 = tmp1->_right;
      Node *tmp;
      tmp = new Node();
      tmp1->_right = tmp;
      tmp->_left = tmp1;
      //char *intStr = itoa(i);
      tmp->_name = "col " + to_string(i);
      cout << tmp->_name << endl;
      if (i==COLUMN-1) {
        tmp->_right=head;
        head->_left=tmp;
      }
    } else {
      head = new Node();
    }
  }

cout << "OK!" << endl;


  //Build exact cover matrix
//   for (countY = 1; countY <= ROW; countY++) {
//     //Replace this section with actual program logic
// /*
//     cout << cand << " ";
//     cout << i << " ";
//     cout << j << " ";
//     cout << k << " ";
//     cout << l << endl;
// */
//     //End of section to replace
//     j++;
//     k++;
//     l++;
//     cand++;
//     if (countY % GRIDSIZE == 0) {
//       cand = 1;
//       i++;                                                                      //Restraint 1 rule - Number in every cell
//       j = GRIDSQUARE + (countY/GRIDSQUARE)*GRIDSIZE;                             //Restraint 2 rule - No duplicates per row
//       k = GRIDSQUARE*2 + countY % GRIDSQUARE;                                    //Restraint 3 rule - No duplicates per column
//       //Annoying zone dependant logic
//       if (zoneCount < ZONESIZE-1) {
//         zoneCount ++;
//       }
//       else {
//         zoneCount = 0;
//       }
//       zoneLevel = countY/(GRIDSQUARE*ZONESIZE);
//       l = GRIDSQUARE*3 + GRIDSIZE*zoneCount + zoneLevel*(GRIDSQUARE/ZONESIZE);  //Restraint 4 rule - No dulicates per zone
//     }
//
//   }
  for (int i=0; i<COLUMN; i++) {
    // Clean up
    Node *tmp;
    tmp = new() Node;
    tmp = head;
    head = tmp->_right;
    delete tmp;
  }

  return 0;
}
