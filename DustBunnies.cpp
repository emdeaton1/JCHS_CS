#include <iostream>
using namespace std;

int main() {
  int dust, total=0;
  while(1)
    {
      cout << "Enter number of dust bunnies or 0 to quit: " << endl;
      cin >> dust;
      if (dust==0)
        break;
      else
        total += dust;
    }
  cout << "The total number of dust bunnies is: " << total << endl;
}