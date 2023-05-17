//Ella Deaton
#include <iostream>
#include <iomanip>
#define PRICE 4.32
using namespace std;
int main() 
{
  int thing;
  float cost;

  cout << "How many thingamajigs did you sell? " << endl;
  cin >> thing;

  cost = thing*PRICE;
  cout << fixed << setprecision(2) << "THe total cost is: " << cost << endl;

  return 0;
} 