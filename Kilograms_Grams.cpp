//Ella Deaton
#include <iostream>
#include <iomanip> 
#define KILO 2.2
#define GRAM 0.035 
using namespace std;

int main() 
{
  float pounds, ounces, gram, kilo;

  cout << "How many pounds? " << endl;
  cin >> pounds;

  cout << "How many ounces? " << endl;
  cin >> ounces;
  
  kilo = pounds/KILO;
  gram = ounces/GRAM;
  
  cout << fixed << setprecision(2) << "The number of kilograms is: " << kilo << endl;

  cout << fixed << setprecision(2) << "The number of grams is: " << gram << endl;

  return 0;

} 