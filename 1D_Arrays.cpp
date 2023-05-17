#include <iostream>
#include <cmath>
#include <iomanip>
#include <time.h>
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
      srand(time(0));
      int array1[15], array2[15], array3[15];

      for(int index=0; index<15; index++)
        {
          array1[index] = rand() % 10 + 1;
        }

      for(int index2=0; index2<15; index2++)
        {
          array2[index2] = rand() % 10 + 1;
        }
      for(int index3=0; index3<15; index3++)
        {
          array3[index3] = array1[index3]+array2[index3];
        }

      cout << "The values are: " << endl;
      for(int i=0; i<15; i++)
        {
          cout << array1[i] << "\t";
        }
      cout << endl;

      for(int i2=0; i2<15; i2++)
        {
          cout << array2[i2] << "\t";
        }
      cout << endl;

      for(int i3=0; i3<15; i3++)
        {
          cout << array3[i3] << "\t";
        }
      cout << endl;
      
      break;
    }
    
    case 2:
    {
      int even[10], odd[10];
      int num, zero=0, remain=0;

      cout << "Enter 10 numbers: " << endl;
      for(int i=0; i<10; i++)
        {
          cin >> num;
          if (num%2==0)
            {
              even[zero] = num;
              zero++;
            }
          else
            {
              odd[remain] = num;
              remain++;
            }
        }

      cout << "The even numbers are: " << endl;
      for(int i2=0; i2<zero; i2++)
        {
          cout << even[i2] << "\t";
        }
      cout << endl;

      cout << "The odd numbers are: " << endl;
      for(int i3=0; i3<remain; i3++)
        {
          cout << odd[i3] << "\t";
        }
      cout << endl;
      
      break;
    }

    case 3:
    {
      int array[10] = {1,2,3,4,5,6,7,8,9,10}, array2[10];
      
      cout << "The values are: " << endl;
      for(int i=0; i<10; i++)
        {
          cout << array[i] << "\t";
        }
      cout << endl;

      for (int i2=0; i2<9; i2++)
      {
        array2[i2] = array[i2-1];
      }

      array2[9] = array[8];
      array2[0] = array[9];

      cout << "The values are: " << endl;
      for(int i2=0; i2<10; i2++)
        {
          cout << array2[i2] << "\t";
        }
      cout << endl;
      
      break;
    }
    
    case 4:
    {
      int num, num2, largest=0;
      cout << "How many numbers would you like to compare? " << endl;
      cin >> num;

      cout << "Enter your numbers: " << endl;
      
      for(int i=0; i<num; i++)
        {
          cin >> num2;
          int array[num];
          array[num] = num2;
          if (num2>largest)
          {
            largest = num2;
          }
        }
      
      cout << "The largest number is: " << largest << endl;
      
      break;
    }
    
    case 5:
    {
      int array1[10], num, num2, equal=0;
      
      cout << "Enter 10 numbers: " << endl;
      for(int i=0; i<10; i++)
        {
          cin >> array1[i];
        }
      cout << "Enter another number: " << endl;
      cin >> num;
      
      for(int i2=0; i2<10; i2++)
        {
          num2 = array1[i2];
          if(num2==num)
          {
            cout << "Your number is in the list." << endl;
            equal++;
          }
          else
          {
            continue;
          }
        }

      if(equal==0)
      {
        cout << "Your number is not in the list." << endl;
      }
      
      break;
    }

    case 6:
    {
      int array1[20], positive=0, negative=0, odd=0, even=0, zero=0;
      
      cout << "Enter 20 numbers: " << endl;
      for(int i=0; i<20; i++)
        {
          cin >> array1[i];
        }

      for (int i=0; i<20; i++)
        {
          if(array1[i]>0)
          {
            positive++;
          }
          if(array1[i]<0)
          {
            negative++;
          }
          if(array1[i]%2==0&&array1[i]!=0)
          {
            even++;
          }
          if(array1[i]%2!=0)
          {
            odd++;
          }
          if (array1[i]==0)
          {
            zero++;
          }
        }
          cout << "The number of positive numbers is: " << positive << endl;
            cout << "The number of negative numbers is: " << negative << endl;
            cout << "The number of odd numbers is: " << odd << endl;
            cout << "The number of even number is: " << even << endl;
            cout << "The number of zeros is: " << zero << endl;
        }
      
      break;
    

    case 7:
    {
      int array[10] = {}, array2[10] = {}, num2 = 0, lastNum;

      cout << "Enter 10 numbers: " << endl;
      
      for(int i=0; i<10; i++)
        {
          cin >> array[i];
        }

      lastNum = array[9];

      for(int i=9; i>0; i--)
        { 
          array2[i]=array[num2];
          num2++;
        }
      array2[0] = lastNum;
      
      cout << "Your list in reverse is: " << endl;
      for(int i=0; i<10; i++)
        {
          cout << array2[i] << " ";
        }
      
      break;
    }
    
  }
}