#include <iostream>
#include <string>
#include <algorithm>
#include <vector>

using namespace std;

class movie
{
  private:
    string title;
    int year, rating, position;

  public:
    movie()
    {
      title = "Cinderella";
      year = 1957;
      rating = 5;
      position = 0;
    }

    movie(string t, int y, int r, int p)
    {
      title = t;
      year = y;
      rating = r;
      position = p;
    }

    void setTitle(string t)
    {
      title = t;
    }

    void setYear(int y)
    {
      year = y;
    }

    void setRating(int r)
    {
      rating = r;
    }

    void setPosition(int p)
    {
      position = p;
    }

    string getTitle()
    {
      return title;
    }

    int getYear()
    {
      return year;
    }

    int getRating()
    {
      return rating;
    }

    int getPosition()
    {
      return position;
    }

    void newMovie(movie &singleMovie)
    {
      string t;
      int y, r;
      
      cout << "Title: ";
      cin.ignore();
      getline(cin, t);
      cout << "Year: ";
      cin >> y;
      cout << "Rating (out of 5 stars): ";
      cin >> r;

      singleMovie.setTitle(t);
      singleMovie.setYear(y);
      singleMovie.setRating(r);
      
    }

    void printValues(movie m)
    {
      cout << "Title for movie #" << m.getPosition() << ": " << m.getTitle() << endl;
      cout << "Year for movie #" << m.getPosition() << ": " << m.getYear() << endl;
      cout << "Rating for movie #" << m.getPosition() << ": " << m.getRating() << endl;
      cout << endl;
    }

    bool search(movie m, string t)
    {
      if (m.getTitle()==t)
       {
         cout << "Movie found!" << endl << endl;
         m.printValues(m);
         return true;
       }
      else
      {
        return false;
      }
    }

};

int main() 
{
  vector <movie> m;
  
  while(1)
  {
    int choice=0;
    
    cout << endl << "Choose a number from the options below: " << endl << "\t1. Add a movie" << endl << "\t2. Search for a movie by title" << endl << "\t3. Display all movies" << endl << "\t4. Exit the program" << endl;
    cout << "Enter choice: " << endl;
    cin >> choice;
  
    if(choice==4)
    {
      break;
    }
  
    switch(choice)
      {
        case 1:
          {
            if(m.size()==10)
              {
                cout << "You have created 10 movies!" << endl;
                break;
              }
            
              cout << endl << "----1. Add a movie----" << endl << endl;
              movie entryMovie;
              entryMovie.newMovie(entryMovie);
              entryMovie.setPosition(m.size()+1);
              m.push_back(entryMovie);
              break;
          }
        case 2:
          {
            cout << endl << "----2. Search for a movie by title----" << endl << endl;
            string t2;
            int j;
            
            cout << "Enter a movie title: " << endl;
            cin.ignore();
            getline(cin, t2);
            cout << endl << "Looking for movie...." << endl;
  
            for(j=0; j<m.size(); j++)
              {
                 if (m[j].search(m[j],t2)==true)
                 {
                   break;
                 }
              }

            if(j==m.size())
            {
              cout << "Movie not found!" << endl;
            }
            break;
          }
        case 3:
          {
            cout << endl << "----3. Display all movies----" << endl << endl;
            for(int j=0; j<m.size(); j++)
              {
                m[j].printValues(m[j]);
              }
            
            break;
          }
      }
  }
}