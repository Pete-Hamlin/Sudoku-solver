//Define all dancing links algorithm/Node related elements here

//Standard includes
#include <iostream>
#include <string>
#include <cmath>
#include <stdlib.h>
using namespace std;

//Private includes
#include "dancing_links.h"
#include "functions.h"

/* Node` */

Node::Node() {
  _up = NULL;
  _down = NULL;
  _left = NULL;
  _right = NULL;
  _col = NULL;
}

// functions

void Node::cover() {
  _left->_right = _right;
  _right->_left = _left;
  _up->_down = _down;
  _down->_up = _up;
}

Solution::Solution(int zoneSize, int row, int col) {
    _zoneSize = zoneSize;
    _gridSize = iPow(zoneSize, 2);
    _row = iPow(zoneSize, 6);
    _col = iPow(zoneSize, 4)*4;
    _gridsquare = iPow(zoneSize, 4);
    _head = NULL;
}

void Solution::buildCols() {
    for (int i=0; i<=_col; i++) {
    Node *tmp1;
    tmp1 = new Node();
    tmp1 = _head;
    if (tmp1!=NULL) {
      while(tmp1->_right!=NULL)
        tmp1 = tmp1->_right;
      Node *tmp;
      tmp = new Node();
      tmp1->_right = tmp;
      tmp->_left = tmp1;
      tmp->_name = "col " + to_string(i);
      // Add root colnode
      if (i==_col) {
          tmp->_name = "root";
          tmp->_right=_head;
          _head->_left=tmp;
      }
    } else {
      _head = new Node();
      _head->_name = "col " + to_string(i);
    }
  }
}

void Solution::populate() {
    int w=0, x=_gridsquare, y=_gridsquare*2, z=_gridsquare*3;             // Iterators
    int zone, level;
    // Build exact cover matrix
    for (int i=0; i<=_row; i++) {
        insert(w);
        insert(x);
        insert(y);
        insert(z);
        x++;
        y++;
        z++;
        if (i!=0 && i % _gridSize == 0) {
            w++;                                                                // Constraint 1
            x = _gridsquare + (i/_gridsquare)*_gridSize;                                      // Constraint 2
            y = _gridsquare*2 + i%_gridsquare;                                            // Constraint 3
            if (zone < _zoneSize-1)
                zone++;
            else
                zone = 0;
            level = i/(_gridsquare*_zoneSize);
            z = _gridsquare*3 + _gridSize*zone + level*(_gridsquare/_zoneSize);                    // Constraint 4 - Stupid logic
        }
    }
}

void Solution::insert(int column) {
    Node *tmp1;
    tmp1 = _head;
    for (int i=0; i<column; i++) {
        tmp1 = tmp1->_right;
    }
    Node *tmp2;
    tmp2 = tmp1;
    while (tmp1->_down != NULL)
        tmp1 = tmp1->_down;
    Node *tmp;
    tmp = new Node();
    tmp1->_down = tmp;
    tmp->_up = tmp1;
    tmp->_col = tmp2;
    // cout << tmp->_col->_name << " ";
}
