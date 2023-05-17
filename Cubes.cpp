#include <iostream>
#include <cmath>
using namespace std;

int main() {
  int num=1;
  do
    {
      cout << num << '\t'
        << pow(num,3) << endl;
      ++num;
    }
  while (num<=10);
}