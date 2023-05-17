//Ella Deaton
#include <iostream>
#include <iomanip> 
using namespace std;
#define CELLONE 155
#define CELLPHONES 120

int main() 
{
  float number, total, tax, cost;

  cout << "How many cellphones? " << endl;
  cin >> number;

  cost = (CELLONE + (CELLPHONES * (number - 1)));
  tax = 0.08 * cost;
  total = cost + tax;

  cout << fixed << setprecision(2) << "Your total is: $" << total << endl;
  
  return 0;
} 