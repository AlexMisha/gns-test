#include <iostream>

using namespace std;

int sum(int a, int b);

int main() {
  cout << "Do commits!" << endl;
  cout << "Add code" << endl;
  
  cout << sum(5,4) << endl;
  
  return 0;
}

int sum(int a, int b) {
  return a + b;
}
