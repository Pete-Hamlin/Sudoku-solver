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
void DataNode::setUp (Node up) {
  *_up = up;
}

void DataNode::setDown (Node down) {
  *_down = down;
}

void DataNode::SetHeader(ColHeader col) {
  *_col = col;
}


/*ColNode */

void ColNode::setName (string name) {
  _name = name;
}
