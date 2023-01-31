#include "functionsHead.h"
// function comments in function definitions
void fillVector(vector<int> &userNums) {
  int i = 0;
  int num = 0;
  for (i = 0; i < 5; i++) {
    cout << "Enter a value: ";
    cin >> num;
    userNums.push_back(num);
  }
}
void findMinMax(vector<int> &userNums, int &max, int &min) {
  min = max = userNums.at(0);
  for (int i = 0; i < userNums.size(); i++) {
    if (userNums.at(i) < min) {
      min = userNums.at(i);
    }
    if (userNums.at(i) > max) {
      max = userNums.at(i);
    }
  }
}