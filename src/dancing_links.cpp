//Define all dancing links algorithm/node related elements here

#include <iostream>
//#include <string>

#define LENGTH 8
#define GRID 80

using namespace std;

class node {
  public:
    int data;
    node *up;
    node *down;
    node *left;
    node *right;

    void cover() {

    }
    void uncover() {

    }
};

class colNode: public node {
  public:
    int size;
    char name[];


};

class subNode: public node {
  public:
    colNode column;
};
