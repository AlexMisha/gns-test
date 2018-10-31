#include <iostream>

using namespace std;

int sub(int a, int b);

int main() {
  cout << "Do commits!" << endl;
  cout << "Add code" << endl;
  
  cout << sub(5, 4) << endl;
  
  return 0;
}

int sub(int a, int b) {
  return a - b;
}
