//Ella Deaton
#include <iostream>
#include <iomanip> 
using namespace std;

int main() 
{
  int losses, wins;
  float total, percentage;

  cout << "How many games did the Jets baseball team win? " << endl;
  cin >> wins;
  
  cout << "How many games did the Jets baseball team loss? " << endl;
  cin >> losses;
  
  total = wins+losses;

  percentage = wins/total*100;
  
  cout << fixed << setprecision(3) << "The winning percentage is: " << percentage << "%" << endl;

  return 0;
} 