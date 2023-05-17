#include <iostream>
#include <string>
#include <cmath>
using namespace std;

class book
{
  private:
    string title;
    int pages, chapters, edition;

  public:
    book()
    {
      title = "Book Title";
      pages = 100;
      chapters = 10;
      edition = 5;
    }

    book(string t, int p, int c, int e)
    {
      title = t;
      
      if(p<0)
      {
        cout << "Invalid integer!" << endl << "Value will be set to the absolute value of your integer!" << endl;
        pages = abs(p);
      }
      else
      {
        pages = p;
      }
      
      if(c<0)
      {
        cout << "Invalid integer!" << endl << "Value will be set to the absolute value of your integer!" << endl;
        chapters = abs(c);
      }
      else
      {
        chapters = c;
      }

      if(e<0)
      {
        cout << "Invalid integer!" << endl << "Value will be set to the absolute value of your integer!" << endl;
        edition = abs(e);
      }
      else
      {
        edition = e;
      }
    }

    void setTitle(string t)
    {
      title = t;
    }

    void setPages(int p)
    {
      if(p<0)
      {
        cout << "Invalid integer!" << endl << "Value will be set to the absolute value of your integer!" << endl;
        pages = abs(p);
      }
      else
      {
        pages = p;
      }
    }

    void setChapters(int c)
    {
      if(c<0)
      {
        cout << "Invalid integer!" << endl << "Value will be set to the absolute value of your integer!" << endl;
        chapters = abs(c);
      }
      else
      {
        chapters = c;
      }
    }

    void setEdition(int e)
    {
      if(e<0)
      {
        cout << "Invalid integer!" << endl << "Value will be set to the absolute value of your integer!" << endl;
        edition = abs(e);
      }
      else
      {
        edition = e;
      }
    }

    string getTitle()
    {
      return title;
    }

    int getPages()
    {
      return pages;
    }

    int getChapters()
    {
      return chapters;
    }

    int getEdition()
    {
      return edition;
    }

    int averagePagesPerChapter(int p, int c)
    {
      return p/c;
    }

    ~book()
    {
      cout << "Book is being destroyed" << endl;
    };

};

int main() 
{
  string t, t2;
  int p, p2, c, c2, e, e2;
  
  book b1;

  cout << "What is book #1's title?" << endl;
  getline(cin, t);
  b1.setTitle(t);
  cout << endl;

  cout << "How many pages are in book #1?" << endl;
  cin >> p;
  b1.setPages(p);
  cout << endl;

  cout << "How many chapters are in book #1?" << endl;
  cin >> c;
  b1.setChapters(c);
  cout << endl;

  cout << "What edition is book #1?" << endl;
  cin >> e;
  b1.setEdition(e);
  cout << endl;


  cout << "What is book #2's title?" << endl;
  cin.ignore();
  getline(cin, t2);
  cout << endl;

  cout << "How many pages are in book #2?" << endl;
  cin >> p2;
  cout << endl;

  cout << "How many chapters are in book #2?" << endl;
  cin >> c2;
  cout << endl;

  cout << "What edition is book #2?" << endl;
  cin >> e2;
  cout << endl;

  cout << endl;

  book b2(t2, p2, c2, e2);

  cout << "Book #1 Title: " << b1.getTitle() << endl;
  cout << "Book #1 Pages: " << b1.getPages() << endl;
  cout << "Book #1 Chapters: " << b1.getChapters() << endl;
  cout << "Book #1 Edition: " << b1.getEdition() << endl;
  cout << "Book #1 average pages per chapter: " << b1.averagePagesPerChapter(p, c) << endl;

  cout << endl; 

  cout << "Book #2 Title: " << b2.getTitle() << endl;
  cout << "Book #2 Pages: " << b2.getPages() << endl;
  cout << "Book #2 Chapters: " << b2.getChapters() << endl;
  cout << "Book #2 Edition: " << b2.getEdition() << endl;
  cout << "Book #2 average pages per chapter: " << b2.averagePagesPerChapter(p2, c2) << endl;

  cout << endl;
}