#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstring>

using namespace std;

string name, address;
char acc_type;
double balance;

void open_account() //creates an account with name, account number, account type, account balance
{
  cout << "\nEnter your name (no spaces): "<< endl; //asks your name and stores in name
  cin>>name;
  
  retry: cout << "\nEnter your account number (8 digits): "<< endl; // asks your account number and stores in address
  cin>>address;

  if(address.length()!=8) //Length type validation
  {
    cout<<"\nINVALID LENGTH"<<endl; // says " Invalid Length"
    goto retry; // goes to the same question
  }

  retry1: cout << "\nWhat type of account you want to open Saving then enter 'S' or Current then 'C': "<<endl; // asks you to open Saving or Checking account
  cin>>acc_type;

  if(acc_type!='C'&&acc_type!='S') //character type validation 
  {
    cout<<"\nINVALID CHARACTER!"<<endl; // says "Invalid Character"
    goto retry1; // goes to the same question
  }
  
  cout << "\nHow much money do you want to deposit in your account: "<< endl; // asks you how much money you want to deposit in your account
  cin>>balance;

  cout << "\t\tAccount Created Successfully"; //tells you that your account is created

  return; // returns
}

double deposit_money(double amount) //deposits money in your created accountt
{
  balance += amount; //balance = balance+amount

  return balance; //returns the balance to the call
}

double withdraw_money(double Amount) //withdraws money in your created account
{
  balance -= Amount; //balance = balance-amount

  return balance; //returns the balance to the call
}

double transfer(double Amount) //tranfers money to another user and withdraws from your account
{
  balance -=Amount; // balance
  
  return balance; //returns the balance to the call
}

void account_inquiry()
{
  cout<<"ACCOUNT INFORMATION:"<<endl; //Prints the title "Account Information"
  cout << "-------------------------"<<endl;
  cout << "\tName: " << name << endl; //Prints your name
  cout << "\tAddress: " << address << endl; //Prints your address
  cout << "\tType: " << acc_type << endl; //Prints your acc_type
  cout << "\tBalance: $" << fixed << setprecision (2) << balance << endl; //Prints your balance
  cout << "-------------------------"<<endl;
  cout << endl;
  return; // returns
}

int main()
{
  int count=0;
  while(1)
  {
    int choice;
    
    if(count==0) //you must create an account before the program can run
    {
      cout<<"\nWELCOME TO ELLA & TRISHA'S BANK!"<<endl; // prints out the title " Welcome to Ella & Trisha' Bank"

      choice = 1;
    }

    else if(count>=1)
    {
      cout << "\n---------------------------------------"<<endl; //prints out "---------"
      cout<<"\nWELCOME TO ELLA & TRISHA'S BANK!\n\n MENU:\n\n\t\t01. Open an account\n\t\t02. Deposit Money in your account\n\t\t03. Withdraw Money in your account\n\t\t04. Tranfer Money to another account\n\t\t05. Account Enquiry\n\t\t06. To quit\n\n"<<endl; // Prints out choices
      cout<< "\nSelect Your Option <1-5>: "; //choose a choice
      cin>>choice;
    }

    if(choice==6) //breaks on to exit if you choose to quit
    {
      break;
    }

    switch (choice)
    {
      case 1: //Goes to Open Account Function if you choose 1
      {
        cout << "\n\t\t1. Open account\n\n "; // Prints ot the title "Open account"
        open_account(); //Goes to Open Account Function
       
       count++;
       break;
      }

      case 2: //Deposit Money Function if you choose 2
      {
        double Amount;

        cout << "\n\t\t2. Deposit Money\n\n"; // Prints out the title "Deposit Money"

        cout << "\nHow much money do you want to deposit: "<< endl; // aks you how money you want to deposit
        cin>>Amount; // stores in Amount
        
        balance = deposit_money(Amount); //Goes to the Deposit Money Function

        cout << "---------------------------------------"<<endl; // Prints out "-------"
        cout << "\tAvailable balance: $"<< fixed << setprecision(2) << balance; // Shows the available balance in your account

        count++;
        break; // breaks out
      }
      
      case 3: //Goes to  Withdraw Money Function if you choose 3
      {
        double Amount;
        
        cout << "\n\t\t3. Withdraw Money\n\n"; // Prints out the title "Withdaw Money"
        
        retry3: cout << "\nHow much money do you want to withdraw: "<< endl; // asks you how much you want to withdraw
        cin>>Amount; // stores in Amount

        if(Amount>balance) // check the Amount validation
        {
          cout<<"\nINVALID WITHDRAW!\nYou can only withdraw the amount of money in your available balance"<<endl; // tells you invalid withdraw
          goto retry3; // goes to the same question
        }
        
        balance = withdraw_money(Amount); // Goes to Withdraw Money function

        cout << "---------------------------------------"<<endl; // prints out "-------"
        cout << "\tAvailable balance: $"<< fixed << setprecision (2) <<balance; // prints out available balance in your account 

        count++;
        break; //breaks out
      }

      
      
      case 4: ////Goes to Transfer Function if you choose 4
      {
        string person, num;
        double Amount;
        
        cout << "\n\t\t4. Transfer Money To Another Account\n\n"; // prints out the title "Transfer Money to Another Account"
        
        cout<<"Your balance account balance is: $"<< fixed << setprecision (2) << balance<<endl; // shows your balance in your account in case
        
        cout<<"\nWho would you like to pay?"<<endl; // enter the person you would like to pay
        cin>>person; // stores in person
        
        retry2: cout<<"\nWhat is their account number (8 digits)"<<endl; // asks that person's account number
        cin>>num; // stores in num
        
        if(num.length()!=8) // checking num validation
          {
            cout<<"\nINVALID LENGTH!"<<endl; // tells you "Invalid Length"
            goto retry2; // goes to the same question
          }

        retry4: cout << "\nHow much money you want to transfer: "<< endl; // asks you how much mnoey you want to transfer
        cin>>Amount; // stores in Amount

        if(Amount>balance) // check the Amount validation
        {
          cout<<"\nINVALID TRANSFER\nYou can only transfer the amount of money in your available balance"<<endl; // prints out "Invalid Transfer"
          goto retry4; // goes to the same question
        }
        
        balance = transfer(Amount); // Goes to the Transfer function

        cout << "---------------------------------------"<<endl; // prints out "-------"
        cout << "\tAvailable balance: $"<< fixed << setprecision(2) << balance; // Shows the available balance in your account
        
        count++;
        break; // breaks out
      }

      case 5: //Goes to Account Inquiry Function if you choose 5
      {
        double Amount;
        
        cout << "\n\t\t5. Account Enquiry\n\n"; // prints out the title "Account Enquiry"
        
        account_inquiry(); // Goes to the Account Inquiry function

        count++;
        break; // breaks out
      }
    }
  }
  return 0;
}