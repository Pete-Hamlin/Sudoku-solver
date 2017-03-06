//Include guard
#ifndef __LINKS_H_INCLUDED__
#define __LINKS_H_INCLUDED__

using namespace std;

// Generic data object for all the linked nodes
class Node {
  public:
    void setLeft(Node left);
    void setRight(Node right);
  protected:
    Node *_left;
    Node *_right;

};


// Column header nodes
class ColHeader : public Node {};

// Main data elements of the matrix (represent a '1' field)
class DataNode : public Node {
  public:
    void setRow(int row);
    void setCol(int col);
    void setCand(int cand);

    void setUp(Node up);
    void setDown(Node down);
    void SetHeader(ColHeader column);
  protected:
    Node *_up;
    Node *_down;
    ColHeader *_column;

    int _row;
    int _col;
    int _cand;
  };

// Column node is a data node including size and name for easy selection and covering
class ColNode : public DataNode {
  public:
    void setName(string name);
    void GetSize();
  private:
    int _size;
    string _name;
};

#endif
