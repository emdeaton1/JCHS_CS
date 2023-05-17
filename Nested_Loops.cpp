#include <iostream>
#include <cmath>
using namespace std;

  int main() 
{
  int choice;
  cout << "Which program do you want to run?" << endl;
  cin >> choice;

  switch (choice)
  {
    case 1:
    {
      for(int a=0; a<4; a++)
        {
          for(int b=0; b<5; b++)
          {  
            cout << "*";
            
            if (b==4)
            {
              cout << endl;
            }
          }
        }
      break;
    }
    
    case 2:
    {
      char b='A';
      for(int i=0; i<5; i++)
        {
        for(int a=0; a<=i; a++)
          {
            cout << (char)(b+a);
          }
        cout << endl;
        }
      break;
    }

    case 3:
    {
      char c='Z';
      for(int a=26; a>=0; a--)
        {
        for(int b=0; b<a; b++)
          {
            cout << (char)(c-b);
          }
        cout << endl;
        }
      break;
    }
    /*case 4:
    {
      char c='Z';
      for(int a=0; a<=(26/5)+1; a++)
        for(int b=0; b<5; b++)
        {  
          cout << char(c-b);
          
          if (b==4)
          {
            cout << endl;
            c = (c-b)-1;
          }
        }
      break;
    }*/
    case 4:
    {
      char c='A';
      int b=0;
      for (int a=25; a>=0; a--)
      {
        cout << char(c+a);
        b++;
        if ( (b % 5)==0 || a==0) cout << endl;
      }
    }
  }
}