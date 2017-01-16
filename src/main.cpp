#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

int splitrow(int row, int i) {
  int sort;
  int factor = (int) pow(10.0, i);
  sort = (row / factor) % 10;
}

int main() {
  int i;
  int row;
  int grid[8][8];

  cout << "Enter each row of the sudoku in turn, starting with the first. Enter the row as 9 digits, using 0 to represent a blank square:\n";
  for(i=0; i<9; i++) {
    cout << i+1 << ":\n";
    cin >> row;                 //Takes user input as a 9 didgit number
    row = (int) row;
    //cout << row;
  }
  return 0;
}
