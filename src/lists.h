#ifndef __LISTS_H_INCLUDED__
#define __LISTS_H_INCLUDED__

#include "links.h"

using namespace std;

class List {
  public:
    List();
  protected:
    DataNode* _head;
    DataNode* _tail;
};

class Column : public List{
  public:
    Column();
};
class Row : public List{
  public:
    Row();
};

#endif
