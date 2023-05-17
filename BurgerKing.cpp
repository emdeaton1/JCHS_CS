//Ella Deaton
#include <iostream>
#include <iomanip> 
using namespace std;
#define BURGER 0.95
#define DRINK 0.75
#define TAX 0.08

int main() 
{
  float burger, drink, meal, total;

  cout << "How many burgers? " << endl;
  cin >> burger;

  cout << "How many drinks? " << endl;
  cin >> drink;

  meal = burger*BURGER + drink*DRINK;
  total = meal*TAX + meal;

  cout << fixed << setprecision(2) << "Your total is: $" << total << endl;
  
  return 0;
} 