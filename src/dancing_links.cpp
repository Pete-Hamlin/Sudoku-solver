//Define all dancing links algorithm/Node related elements here

//Standard includes
#include <iostream>
#include <string>
#include <cmath>
#include <stdlib.h>
using namespace std;

//Private includes
#include "links.h"

/* Node` */

//Set values
void Node::setLeft (Node left) {
  *_left = left;
}

void Node::setRight (Node right) {
  *_right = right;
}

/* colHeader */



/* DataNode */

//Set values

void DataNode::setRow(int row) {
  _row = row;
}

void DataNode::setCol(int col) {
  _col = col;
}

void DataNode::setCand(int cand) {
  _cand = cand;
}

void DataNode::setUp (Node up) {
  *_up = up;
}

void DataNode::setDown (Node down) {
  *_down = down;
}

void DataNode::SetHeader(ColHeader column) {
  *_column = column;
}


/*ColNode */

void ColNode::setName (string name) {
  _name = name;
}
