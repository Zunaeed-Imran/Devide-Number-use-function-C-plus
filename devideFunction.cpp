#include <iostream>
using namespace std;

float devide(float a, float b) {
  float result;

  result = a / b;

  return result;
}


int main () {
  float n1, n2;

  cout << "Enter Number to Devide: ";
  cin >> n1;

  cout << "Enter number to Devide With: ";
  cin >> n2;

  cout << devide(n1, n2);

  return 0;
}