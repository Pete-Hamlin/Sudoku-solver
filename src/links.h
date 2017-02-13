// Generic data object for all the linked nodes
class Node {
  public:
  protected:
    Node *_left; //Data & column nodes only
    Node *_right;
};


// Column header nodes
class ColHeader : public Node {
  public:
    ColHeader();
    //ColHeader(ColHeader *l, ColHeader *r);
  private:

};

// Main data elements of the matrix (represent a '1' field)
class DataNode : public Node {
  public:
    DataNode();
    //DataNode(DataNode *l, DataNode *r, DataNode *u, DataNode *d, ColHeader *c);
  protected:
    Node *_up;
    Node *_down;
    ColHeader *_col;
};

// Column node is a data node including size and name for easy selection and covering
class ColNode : public DataNode {
  public:
    ColNode();
    //ColNode(DataNode *l, DataNode *r, DataNode *u, DataNode *d, ColHeader *h, string n);
    void GetSize();
  private:
    int _size;
    string _name;
};
