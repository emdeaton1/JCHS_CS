#include <iostream>
#define SECONDS 31560000
using namespace std;

int main() 
{
  double age, total;

  cout << "How old are you? " << endl;
  cin >> age;

  total = age*SECONDS;

  cout << "Your age in seconds is: " << total << endl;

  return 0;
} 