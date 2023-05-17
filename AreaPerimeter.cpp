//Ella Deaton
#include <iostream>
using namespace std;

int main()
{
  int length, width;
  int perimeter, area;

  cout << "Please enter the length: " << endl;
  cin >> length;

  cout << "Please enter the width: " << endl;
  cin >> width;

  perimeter = 2*length + 2*width;
  area = length*width;

  cout << "The perimeter is: " << perimeter << endl;
  cout << "The area is " << area << endl;

  return 0;
}