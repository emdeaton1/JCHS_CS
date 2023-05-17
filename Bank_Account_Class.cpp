#include <iostream>
#include <string>
using namespace std;

class bankAccount
{
  private: // member data declarations
    float balance; // how much in the acct in dollars
  
  public: // member function declarations

    bankAccount() //default constructor
    {
      balance = 0;
    }
  
    bankAccount(float b) //overloaded constructor
    {
      if(b>=0)
      {
        balance = b;
      }
      else
      {
        cout << "Invalid number!" << endl;
        cout << "Choose another balance: " << endl;
        cin >> b;
        balance = b;
      }
      
    }

    void setBalance(float b) //set function
    {
      balance = b;
    }
  
    float getBalance() //get function
    {
      return balance;
    }

    void credit(float amount) //adds an amount to the balance
    {
      balance += amount;
    }

    void debit(float amount) //subtracts an amount from the balance
    {
      if(amount<balance)
      {
      balance -= amount;
      }
      else
      {
        cout << endl << "Withdraw amount exceeds account balance." << endl;
        cout << "Choose another balance: " << endl;
        cin >> amount;
        balance -= amount;
      }
    }
    
    
};

int main() 
{
  float amount;
  int choice;

  cout << "How much money do you want to put in the account? " << endl;
  cin >> amount;
  
  bankAccount acct1(amount);
  
  while(1)
    {
      cout << endl << "Choose an option below:" << endl << "1 - Deposit money" << endl << "2 - Withdraw money" << endl << "3 - Display Balance" << endl << "4 - Quit" << endl;
      cin >> choice;
    
      switch(choice)
        {
          case 1:
            {
              cout << endl << "----------------- Option 1 -----------------" << endl;
              float amount;
              cout << "How much money would you like to deposit? " << endl;
              cin >> amount;
              
              acct1.credit(amount);
              break;
            }
          case 2:
            {
              cout << endl << "----------------- Option 2 -----------------" << endl;
              float amount;
              cout << "How much money would you like to withdraw? " << endl;
              cin >> amount;
              
              acct1.debit(amount);
              break;
            }
          case 3:
            {
              cout << endl << "----------------- Option 3 -----------------" << endl;
              cout << "Account Balance: " << acct1.getBalance() << endl;
              break;
            }
          case 4:
            {
              return 0;
              break;
            }
        } 
    }
}
