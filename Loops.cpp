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
    case 5:
    {
      float r, h, volume;
      while(1)
      {
        cout << "Enter radius or 0 to quit" << endl;
        cin >> r;

        if(r == 0)
        {
          break;
        }
        cout << "Enter the hieght" << endl;
        cin >> h;

        volume = (3.14*pow(r,2)*h);

        cout << "The volume is: " << volume << endl;
      }
      break;
    }
    
    case 6:
    {
      float grade, total, count, average;
      while(1)
      {
        cout << "Enter grade or a negative number to quit" << endl;
        cin >> grade;

        if(grade<0)
        {
          average = total/count;
          cout << "Your average is: " << average << endl; 
          break;
        }

        total += grade;
        count++;
      }
      break;
    }

    case 7:
    {
      float b, h, area;
      while(1)
      {
        cout << "Enter base or a negative number to quit" << endl;
        cin >> b;

        if(b<0)
        {
          break;
        }
        cout << "Enter hieght" << endl;
        cin >> h;

        area = (0.5*b*h);

        cout << "The area is: " << area << endl;
      }
      break;
    }
    case 8:
    {
      int num, count=1, pay=0;
      cout << "Enter the number of years to display: " << endl;
      cin >> num;
      do
      {
        if(count>=2)
        {
          pay = (38148*.02)+(38148*count);
        }
        else
        {
          pay = 38148*count;
        }
        cout << count << '\t' << pay << endl;
        count++;
      }
      while(count<=num);
      break;
    }
  }
}