//Define all dancing links algorithm/Node related elements here

//Standard includes
#include <iostream>
#include <string>
#include <cmath>
#include <stdlib.h>
using namespace std;

//Private includes
#include "lists.h"
#include "links.h"

List::List() {
  _head = new DataNode;
  _tail = new DataNode;
}

Column::Column() {
  _head ->setUp(*_tail);
  _tail ->setDown(*_head);
}

Row::Row() {
  _head ->setRight(*_tail);
  _tail ->setLeft(*_head);
}
