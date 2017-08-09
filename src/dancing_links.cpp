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
