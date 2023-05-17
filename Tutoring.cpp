//Ella Deaton
#include <iostream> 
using namespace std;
#define FIRST 50
#define NEXT 35

int main() 
{
  int hours, total;

  cout << "How many hours? " << endl;
  cin >> hours;

  total = FIRST + ((hours-1)*NEXT);

  cout << "Your total is: $" << total << endl;
  
  return 0;
} 