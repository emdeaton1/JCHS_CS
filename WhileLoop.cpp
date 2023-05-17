//Ella Deaton
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
      int checking, savings, num;
      float total;

      while(1)
      {
        cout << "Enter checking account balance or -1 to quit: " << endl;
        cin >> checking;

        if(checking == -1)
        {
          break;
        }
        
        cout << "Enter savings account balance: " << endl;
        cin >> savings;

        cout << "How many checks did you write? " << endl;
        cin >> num;

        if(checking>1000 || savings>1500)
        {
          cout << "There is no service charge." << endl;
        }
        else
        {
          total = num*0.15;
          cout << "The service charge is: $" << total << endl;
        }
      }
      break;
    }
    
    case 2:
    {
      int lf, rf, lr, rr;

      while(1)
      {
        cout << "Right front pressure or -1 to quit: " << endl;
        cin >> rf;
        
        if(rf == -1)
        {
          break;
        }

        cout << "Left front pressure: " << endl;
        cin >> lf;

        cout << "Right rear pressure: " << endl;
        cin >> rr;

        cout << "Left rear pressure: " << endl;
        cin >> lr;

        if(rf==lf && rr==lr)
        {
          cout << "Tire pressure is OK" << endl;
        }
        else
        {
          cout << "Tire pressure is not OK" << endl;
        }
      }
      break;
    }

    case 3:
    {
      float total, discount;

      while(1)
      {
        cout << "Enter total cost or -1 to quit: " << endl;
        cin >> total;
        
        if(total == -1)
        {
          break;
        }

        if(total>10)
        {
          discount = total-(.10*total);
          cout << "Discounted Price: $" << discount << endl;
        }
        else
        {
          cout << "No Discount" << endl;
        }
      }
      break;
    }

    case 4:
    {
      int result;
      cout << "Power\tResult" << endl;
      for(int counter=0; counter<=15; counter++)
      {
        result = pow(2,counter);
        cout << counter << "\t\t" << result << endl;
      }
      break;
    }
  }

} 