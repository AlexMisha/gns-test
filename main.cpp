#include <iostream>

using namespace std;

float div(int a, int b);

int main() {
  cout << "Do commits!" << endl;
  cout << "Add code" << endl;
  
  cout << div(5, 4) << endl;
  
  return 0;
}

float div(int a, int b) {
  return (float) a / (float) b;
}
