//Standard includes
using namespace std;

// Private includes
#include "functions.h"



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
