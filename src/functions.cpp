//Standard includes
#include <iostream>
#include <string>
#include <cmath>
#include <stdlib.h>
using namespace std;

// Private includes
#include "functions.h"
#include "links.h"

int iPow(int base, int exp) {
  int result = 1;
  while (exp) {
    if (exp & 1) {
      result *= base;
    }
    exp >>= 1;
    base *= base;
  }
  return result;
}

void genHeaders(ColHeader header[]) {
  header[ROW].setLeft(header[ROW]);
  header[ROW].setRight(header[0]);
  header[0].setLeft(header[ROW]);
  header[0].setRight(header[1]);
  for (int i = 1; i < ROW-1; i++) {
    cout << i;
    header[i].setLeft(header[i-1]);
    header[i].setRight(header[i+1]);
  }
}

void genNode(int row, int col, int cand) {
  
}
