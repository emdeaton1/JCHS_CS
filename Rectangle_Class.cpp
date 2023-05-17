#include <iostream>
#include <string>
using namespace std;

class rectangle
{
  private:
    float length, width;  //member variables

  public:
    rectangle()  //defualt constructor
    {
      length = 5;
      width = 5;
    }

    rectangle(float w, float l)  //overloaded constructor
    {
      if(length<0)
      {
        cout << "Invalid integer!" << endl << "Value will be set to the absolute value of your integer!" << endl;
        length = abs(l);
      }
      else
      {
        length = l;
      }
      
      if(length<0)
      {
        cout << "Invalid integer!" << endl << "Value will be set to the absolute value of your integer!" << endl;
        width = abs(w);
      }
      else
      {
        width = w;
      }
    }

    void setLength(float l)  //set function
    {
     if(length<0)
      {
        cout << "Invalid integer!" << endl << "Value will be set to the absolute value of your integer!" << endl;
        length = abs(l);
      }
      else
      {
        length = l;
      }
    }
   
    void setWidth(float w)  //set function
    {
      if(length<0)
      {
        cout << "Invalid integer!" << endl << "Value will be set to the absolute value of your integer!" << endl;
        width = abs(w);
      }
      else
      {
        width = w;
      }
    }

    
    float getWidth()  //get function
    {
      return width;
    }

    float getLength()  //get function
    {
      return length;
    }

    float perimeter()
    {
      return (2*width)+(2*length);
    }

    ~rectangle()  //destructor
    {
      cout << "Object is being destroyed!" << endl;
    };

};

int main() 
{
  //construct a rectangle instance or create an object

  rectangle r1;
  
  cout << "Length = " << r1.getLength() << endl;
  cout << "Width = " << r1.getWidth() << endl;
  cout << "Perimeter = " << r1.perimeter() << endl;

  cout << endl;

  //construct a rectangle instance using overloaded constructor
  
  rectangle r2(12, 3);

  cout << "Length = " << r2.getLength() << endl;
  cout << "Width = " << r2.getWidth() << endl;
  cout << "Perimeter = " << r2.perimeter() << endl;

  cout << endl;

  rectangle r3;

  r3.setLength(27);
  r3.setWidth(2);

  cout << "Length = " << r3.getLength() << endl;
  cout << "Width = " << r3.getWidth() << endl;
  cout << "Perimeter = " << r3.perimeter() << endl;

  cout << endl;
  
}
