#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

void average(float i, float num1, float num2, float num3, float num4)
  {
      float average;
      average = (num1 + num2 + num3 + num4)/4;
      cout << "The average for gymnast # "<< (i+1) << " is: " << average << endl;
  }

void totalaverage(const int scores[][4], int rows)
{
  float columns=4, sum=0;
  for(int i=0; i<rows; i++)
    {
      for(int i2=0; i2<columns; i2++)
        {
          sum += scores[i][i2];
        }
    }
  sum /= 12;
  cout << "The overall average is: " << fixed << setprecision(2) << sum << endl;
}

int main() 
{
  int choice;
  cout << "Which program do you want to run?" << endl;
  cin >> choice;

  switch (choice)
  {
    case 1:
    {
      int array[3][3] = {{2,4,6},{8,10,12},{14,16,18}}, array2[3][3] = {{9,8,7},{6,5,4},{3,2,1}}, array3[3][3];
      
      cout << "The first matrix is: " << endl;
      for(int row=0; row<3; row++)
        {
          for(int col=0; col<3; col++)
            {
              cout << array[row][col] << "\t";
            }
          cout << endl;
        }
      
      cout << "The second matrix is: " << endl;
      for(int row=0; row<3; row++)
        {
          for(int col=0; col<3; col++)
            {
              cout << array2[row][col] << "\t";
            }
          cout << endl;
        }

      for(int row=0; row<3; row++)
        {
          for(int col=0; col<3; col++)
            {
              array3[row][col] = array[row][col] + array2[row][col];
            }
        }
      
      cout << "The first matrix plus the second matrix is: " << endl;
      for(int row=0; row<3; row++)
        {
          for(int col=0; col<3; col++)
            {
              cout << array3[row][col] << "\t";
            }
          cout << endl;
        }
      
      break;
    }
    
    case 2:
    {
      int array[3][3], num;

      cout << "Enter 9 numbers: " << endl;

      for(int row=0; row<3; row++)
        {
          for(int col=0; col<3; col++)
            {
              cin >> array[row][col];
            }
        }

      num = array[0][0]+array[0][1]+array[0][2]; 

      if(array[1][0]+array[1][1]+array[1][2]==num&&array[2][0]+array[2][1]+array[2][2]==num&&array[0][0]+array[1][1]+array[2][2]==num&&array[0][2]+array[1][1]+array[2][0]==num)
      {
        cout << "Magic Square" << endl;
        cout << "The constant sum is: " << num << endl;
      }
      else
      {
        cout << "Not a magic square" <<  endl;
      }
      
      break;
    }

    case 3:
    {
      int array[3][4], row, col, total;
      
      
      for(int row=0; row<3; row++)
        {
          begin:
          cout << "Enter 4 scores for gymnast # " << (row+1) << " (range 0 to 10): " << endl;
          for(int col=0; col<4; col++)
            {
              cin >> array[row][col];
              if(array[row][col]>10||array[row][col]<0)
              {
                cout << "Invalid score!!! Please re-enter scores for gymnast # " << (row+1) << endl;
                goto begin;
              }
            }
        }

      for(int i=0; i<3; i++)
        {
          average(i,array[i][0],array[i][1],array[i][2],array[i][3]);
        }

      for(int row=0;  row<3; row++)
        {
          total = 0;
          for(int col=0; col<4; col++)
            {
              total += array[row][col];
            }
          cout << "The total for gymnast # " << (row+1) << " is: " << total << endl;
        }

      totalaverage(array, 3);
      
      break;
    }
  }
}