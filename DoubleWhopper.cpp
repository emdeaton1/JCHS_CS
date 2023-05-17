//Ella Deaton
#include <iostream>
using namespace std;
#define WHOPPER 45
#define CHICKEN 3

int main() 
{
  int whopper, chicken, total;

  cout << "How many whoppers? " << endl;
  cin >> whopper;

  cout << "How many chicken? " << endl;
  cin >> chicken;

  total = WHOPPER*whopper + CHICKEN*chicken;

  cout << "Your total fat is: " << total << "g" <<endl;
  
  return 0;
} 