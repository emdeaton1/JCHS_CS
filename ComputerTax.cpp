//Ella Deaton
#include <iostream>
#include <iomanip> //input output manipulation
#define TAX 0.10
using namespace std;

int main() 
{
  float total, computer;

  cout << "How much does the computer cost? " << endl;
  cin >> computer;

  total = computer*TAX + computer;

  cout << fixed << setprecision(2) << "The total cost is: $" << total << endl;

  return 0;
} 