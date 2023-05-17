//Ella Deaton
#include <iostream>
#define CENTIMETER 2.54
using namespace std;

int main() 
{
  float inches, total;

  cout << "How many inches tall are you? " << endl;
  cin >> inches;
  
  total = CENTIMETER*inches;

  cout << "Your height in centimeters is: " << total << endl;

  return 0;

} 