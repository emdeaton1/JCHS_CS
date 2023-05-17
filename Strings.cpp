#include <iostream>
#include <string.h>
#include <string>
using namespace std;

int EQUAL(string string1, string string2)
{
  if(string1==string2)
  {
    return 1;
  }
  else
  {
    return 0;
  }
}

int inString(string str1, char lett)
{
  int num;
  num = str1.find(lett);
  return num;
}

void TRIMFONT(string str1)
{
  str1.erase(0, str1.find_first_not_of(" "));
  cout << "Your string with no whitespace in front: " << endl << str1 << endl;
}

int main()
{
  int choice;
  cout << "Which program would you like to run? " << endl;
  cin >> choice;
  
  switch(choice)
  {
    case 1:
    {
      string str1, str2;
      
      cout << "Enter a string: " << endl; 
      cin.ignore();
      getline(cin, str1);
     

      cout << "Enter another string: " << endl;
      getline(cin, str2);
    

      int compare;
      compare = EQUAL(str1, str2);
      
      if(compare==1)
      {
        cout << compare << endl;
        cout << "Your strings are equal" << endl;
      }
      else
      {
        cout << compare << endl;
        cout << "Your strings are not equal" << endl;
      }
      
      break;
    }
    
    case 2:
    {
      string string1;
      char letter;
      int value;

      cout << "Enter a string: " << endl; 
      cin.ignore();
      getline(cin, string1);
     
      cout << "Enter character: " << endl;
      cin >> letter;

      value = inString(string1, letter);
      if(value==-1)
      {
        cout << value << endl;
        cout << "The character is not in your string. " << endl;
      }
      else
      {
        cout << value << endl;
        cout << "The character is located at index: " << value << endl;
      }
    
      break;
    }

    case 3:
    { 
      string string1;

      cout << "Enter a string: " << endl; 
      cin.ignore();
      getline(cin, string1);

      TRIMFONT(string1);
      
      break;
    }
  }
}