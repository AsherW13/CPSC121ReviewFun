// task1: define call function to find and return min and max number in vector
// task2: convert to 3 file format
#include "functionsHead.h"

int main() {
  vector<int> userNums;
  int max = 0;
  int min = 0;
  fillVector(userNums);
  findMinMax(userNums, max, min);

  cout << "Min: " << min << endl;

  cout << "Max: " << max << endl;

  return 0;
}
