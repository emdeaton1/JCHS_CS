//Ella Deaton
#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
  int choice;
  cout << "What program would you like to run?" << endl;
  cin >> choice;

  switch(choice)
  {
    case 1:
    {
      int num1, num2, num3;
      cout << "Enter nunber 1: " << endl;
      cin >> num1;

      cout << "Enter number 2: " << endl;
      cin >> num2;

      cout << "Enter number 3: " << endl;
      cin >> num3;

      if (num1>num2 && num1>num3)
      {
      cout << "The greatest number is " << num1 << endl;
      }
      else
      {
        if (num2>num1 && num2>num3)
        {
        cout << "The greatest number is " << num2 << endl;
        }
        else
        {
          cout << "The greatest number is " << num3 << endl;
        }
      }
      break;
    }
    case 2:
    {
      int score, total;
      cout << "What is the score? " << endl;
      cin >> score;

      if (score>=1 && score<=3)
      {
        total = score*10;
        cout << "The total is: " << total << endl;
      }
      else 
      {
        if (score>=4 && score<=6)
        {
        total = score*100;
        cout << "The total is: " << total << endl;
        }
        else{
          if (score>=7 && score<=9)
          {
            total = score*1000;
            cout << "The total is: " << total << endl;
          }
          else 
          {
            cout << "ERROR" << endl;
          }
        }
      }
      break;
    }
    case 3:
    {
      int num1, num2, num3; 
      string triangle;
      cout << "What is the first side? " << endl;
      cin >> num1;
      
      cout << "What is the second side? " << endl;
      cin >> num2;
      
      cout << "What is the third side? " << endl;
      cin >> num3;
      
      if (num1+num2>num3 && num2+num3>num1 && num3+num1>num2)
      {
        triangle = "valid";
      }
      else
      {
        triangle = "invalid";
      }
      cout << "The triangle sides are: " << triangle << endl;
      break;
    }
    case 4:
    {
      float PA, i, n, simple, compound;
      char interest;

      cout << "Is the interest compound or simple? (c or s)" << endl;
      cin >> interest;

      cout << "What is the original amount invested? " << endl;
      cin >> PA;

      cout << "What is the interest rate? (%)" << endl;
      cin >> i;
      i = i/100;

      cout << "What is the number of years for the investment? " << endl;
      cin >> n;

      compound = PA*pow(1+i,n);
      simple = PA+(n*i*PA);
      
      switch(interest)
      {
        case 'c':
        {
          cout << "The total interest is: $" << compound << endl;
          break;
        }
        case 's':
        {
          cout << "The total interest is: " << simple << endl;
          break;
        }
      }
      break;
    }
    case 5:
    {
      int classMean, tardies, grade;
      
      cout << "What grade are you in? " << endl;
      cin >> grade;

      if (grade==9)
      {
        cout << "Sorry, you are not invited to the picnic." << endl;
        break;
      }
      
      cout << "What is your class average? " << endl;
      cin >> classMean;
      
      if (classMean>95)
      {
        cout << "You are invited to the picnic." << endl;
        break;
      }
      else
      {
        cout << "How many tardies have you had? " << endl;
        cin >> tardies;
        if (classMean<70 || tardies>3)
          {
            cout << "Sorry, you are not invited to the picnic." << endl;
          }
          else
          {
            cout << "Sorry, you are not invited to the picnic." << endl;
          }
      }
      break;
    }
  }
} 