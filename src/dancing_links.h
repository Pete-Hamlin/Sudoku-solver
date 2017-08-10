//Include guard
#ifndef __LINKS_H_INCLUDED__
#define __LINKS_H_INCLUDED__

using namespace std;

// Generic data object for all the linked nodes
class Node {
  public:
    // Constructors
    Node();
    // functions
    void cover();
  // protected:
    Node *_left;
    Node *_right;
    Node *_up;
    Node *_down;
    Node *_col;

    int _size;
    string _name;
};


// Column node is a data node including size and name for selection and covering
// class ColNode : public Node {
//   public:
//     ColNode();
//     // void setName(string name);
//     // int getSize();
//     void calcSize();
// //  protected:
//     int _size;
//     string _name;
// };

// Provides various methods for building/solving the exact cover matrix
class Solution {
    public:
        Solution(int zoneSize, int row, int col);
        void buildCols();
        void populate();
        void insert(int column);
        //void insert();
        //void clean();

        int _zoneSize;
        int _gridSize;
        int _row;
        int _col;
        int _gridsquare;
        Node *_head;
};

#endif
