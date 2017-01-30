//Define all dancing links algorithm/node related elements here

#include <iostream>
//#include <string>


using namespace std;

// Generic data object for all the linked nodes
class Node {
  public:
    Node(node *l, node *r, node *u = NULL, node *d = NULL, char n = "");
  private:
    Node *left;
    Node *right;
    Node *up; //Data & column nodes only
    Node *down;
    int size = 0; //Column nodes only
    char name[];
};

Node::Node(node *l, node *r, node *u = 0, node *d = 0, char n = "") {
  *left = *l;
  *right = *r;
  *up = *u;
  *down = *d;
  size = s
  name = n
}
