//Ella Deaton
#include <iostream>
#include <math.h>
#include <cmath>
#define MOLUCULE 3.0 * pow(10,-23)
#define quart 950
using namespace std;

int main() 
{
  double number, total;

  cout << "How many quarts of water do you have? " << endl;
  cin >> number;
  
  total = quart/MOLUCULE*number;

  cout << "The number of molucules in the water are: " << total << endl;

  return 0;

} 