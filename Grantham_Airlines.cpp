#include <iostream>
#include <iomanip> //decimal manip
#include <cmath> //pow
#include <time.h> //random num generator
#include <fstream> //image call header

using namespace std;

#define startFirst 0
#define endFirst 3
#define startBus 3
#define endBus 9
#define startEcon 9
#define endEcon 12
#define firstColor "\33[37;46;1m"
#define busColor "\33[37;45;1m"
#define econColor "\33[37;42;1m"
#define resetColor "\33[0m"

int tickets=0, seat=0, full;

int plane[12][4] = {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30,31,32,33,34,35,36,37,38,39,40,41,42,43,44,45,46,47,48};



void Print(int start, int end, string color)
{
  cout << resetColor << "\nGrantham Airlines Plane: \n" << endl;
  cout << color << "           ⏜            " << resetColor << endl;
  cout << color << "         (    )         " << resetColor << endl;
  cout << color << "       /        \\       " << resetColor << endl;
  cout << color << "     /            \\     " << resetColor << endl;
  cout << color << "  |                  |  " << resetColor << endl;
  cout << color << "|" << setw(23) << "|" << resetColor << endl;
  
  for(int row=start; row<end; row++)
  {
    for(int col=0; col<4; col++)
    { 
      if (plane[row][col] == 0)
      {
        if (row<3)
        {
          cout << firstColor;
          cout << "| ❌ |";
        }
        else if (row>2&&row<9)
        {
          cout << busColor;
          cout << "| ❌ |";
        }
        else
        {
          cout << econColor;
          cout << "| ❌ |";
        } 
      }
      else 
      {
        if (row<3)
        {
          cout << firstColor << "| " << setw(2) << plane[row][col] << " |";
        }
        else if (row>2&&row<9)
        {
          cout << busColor << "| " << setw(2) << plane[row][col] << " |";
        }
        else
        {
          cout << econColor << "| " << setw(2) << plane[row][col] << " |";
        }
      }
    }
  cout << resetColor << endl;
  }
  cout << color << "|" << setw(23) << "|" << resetColor << endl;
  cout << color << "  |                  |  " << resetColor << endl;
  cout << color << "     \\            /     " << resetColor << endl;
  cout << color << "       \\        /       " << resetColor << endl;
  cout << color << "         ------         " << resetColor << endl;
}

void planeFull(string s, int start, int end)
{
  int countFull=0, total=0;

  full = 0;
  
  for(int row=start; row<end; row++)
    {
      for(int col=0; col<4; col++)
        {
          total++;
          if(plane[row][col] == 0)
          {
            countFull++;
          }
          else
          {
            continue;
          }
        }
    }
  if(countFull==total)
  {
    cout << "\n" << s << " is FULL." << endl;
    full = 1;
  }
  else
  {
    cout << "\n" << s << " is NOT FULL." << endl;
    full = 0;
  }
}

void logic(int num, string s, int start, int end, string color)
{
  cout << "\n" << color << num << ". " << s << "          " << resetColor << endl;

  planeFull(s, start, end);

  if(full==1)
  {
    cout << "\nPick a different section that you have not entered previously." << endl;
    return;
  }
  
  int adults=0, children=0, age=0;

  cout << "\nHow many total adults?" << endl;
  cin >> adults;

  tickets += adults;
  
  cout << "\nHow many children are you traveling with?" << endl;
  cin >> children;
  
  tickets += children;
  
  for(int i=0; i<children; i++)
  {
    retry:
    cout << "\nEnter the ages of your child " << (i+1) << ": " << endl;
    cin >> age;

    if(age<2)
      {
        tickets--;
      }
    
    if(age<0)
      {
        cout << "\nInvalid age" << endl;
        goto retry;
      }
  }
  
  cout << "\nYou need " << tickets << " tickets." << endl;

  //check to see if tickets is greater than available # of seats
  int count=0;
  for(int row=start; row<end; row++)
  {
    for(int col=0; col<4; col++)
    { 
      count++;
    }
  }
  if(tickets>count)
  {
    cout << "\nPlease pick a different section or choose a fewer number of tickets."  << endl;
    return;
  }
  
  //print part of plane
  Print(start, end, color);

  for(int seatCount=0; seatCount<tickets; seatCount++)
    {
      retry2:

      cout << "\nPick a seat number for ticket #" << (seatCount+1) << ": " << endl;
      cin >> seat;
      
      int seatNumber = (start*4)+1;
      
      //TBD: check to see if seat is already taken
     for(int rows=start; rows<end; rows++)
      {
        //cout << "seat: " << seat << endl;
        for(int cols=0; cols<4; cols++)
        {
          //cout << "seat: " << seat << endl;
          //cout << "plane: " << plane[rows][cols] << endl;
          if(plane[rows][cols]==0)
          {
            if (seatNumber == seat) 
            {
              cout << "\nThat seat is full. Pick a different seat number that you have not previously entered." << endl;
              goto retry2;
            }
          }
          seatNumber++;
        }
      }

      if(seat<=(start*4)||seat>(end*4))
      {
        cout << "\nInvalid seat number." << endl;
        goto retry2;
      }

      //cin full seats
      for(int rows=start; rows<end; rows++)
      {
        for(int cols=0; cols<4; cols++)
       
          if ( plane[rows][cols] == seat)
          {
            plane[rows][cols] = 0;
          }
        }
      }
  Print(startFirst, endEcon, firstColor);  
}

int main()
{
  Print(startFirst, endEcon, firstColor);
  
  while(1)
  {
    tickets = 0;

    planeFull("\nThe plane", 0, 12);

    if(full==1)
    {
      break;
    }
    
    int choice;
    
    retry1:
    
    cout << resetColor << "\nWhat section would you like to sit in?\n\n\t" << firstColor << "1.  First Class   " << resetColor <<   "\n\t" << resetColor << busColor << "2.  Business      " << resetColor << "\n\t" << resetColor << econColor << "3.  Economy       " << resetColor << "\n\nChoice: ";
    cin >> choice;
    
    if(choice>3||choice<0)
    {
      cout << "\nInvalid section number" << endl;
      goto retry1;
    }
      
    switch(choice)
      {
        case 1:
        {
          logic(1,"First Class", startFirst, endFirst, firstColor);
            
          break;
        }
        
        case 2:
        {
          logic(2,"Buisness Class", startBus, endBus, busColor);
          
          break;
        }
        
        case 3:
        {
          logic(3,"Economy", startEcon, endEcon, econColor);
  
          break;
        } 
      } // end switch
  } // end while
} // end main