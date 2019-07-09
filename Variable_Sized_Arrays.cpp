#include <algorithm>
#include <cmath>
#include <cstdio>
#include <iostream>
#include <vector>

using namespace std;

int main() {
  /* Enter your code here. Read input from STDIN. Print output to STDOUT */

  // CREATE: a vector of vectors
  int x = 0;
  int y = 0;
  int numofItt = 0;
  int sizeodfIndivArr = 0;
  int val = 0;

  cin >> x;
  vector<vector<int>> matrix(x);
  cin >> numofItt;

  // int array1[numofItt]; /*vecotr is the problem*/
  vector<int> array1;

  for (int i = 0; i < numofItt; i++) {
    cin >> sizeodfIndivArr;

    matrix[i].resize(sizeodfIndivArr);
    for (int k = 0; k < sizeodfIndivArr; k++) {
      cin >> val;
      matrix[i][k] = val;
    }
  }

  // output

  for (int i = 0; i < numofItt; i++) {
    cin >> x;
    cin >> y;
    array1.push_back(matrix[x][y]);
    // array1[i]= matrix[x][y];
  }

  for (int i = 0; i < numofItt; i++) {
    // PRINTING-- same
    cout << array1[i] << endl;
  }

  return 0;
}
