#include <iostream>
using namespace std;

int main() {
  int num, num2=1, total;
  cout << "Enter a number: " << endl;
  cin >> num;

  for (;num2<=num;++num2)
  {
    if ((num%num2)==0)
    {
      cout<<num2<<',';
    }
  }
}