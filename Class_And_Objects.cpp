#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cassert>
using namespace std;

// Write your Student class here

class Student {
  // remember to declare as oublic if you are using these parameters outside
public:
  int scores[5];

  // If you are using methods outside you must declare them inside
public:
  void input();
  int calculateTotalScore();
};

// outside- use the scope resolution operator
void Student::input() {
  int x;
  for (int i = 0; i < 5; i++) {
    cin >> x;
    scores[i] = x;
  }
}

int Student::calculateTotalScore() {
  int sum = 0;
  for (int i = 0; i < 5; i++) {
    sum = sum + scores[i];
  }
  return sum;
}
int main() {