#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

float Volume( float r, float h )
{
  float volume;
  cout << "What is the radius? " << endl;
  cin >> r;

  cout << "What is the height? " << endl;
  cin >> h;

  if(r<=0||h<=0)
  {
    cout << "Invalid Value" << endl;
    return 0;
  }
  else
  {
    volume = (22/7.0)*pow(r,2)*h;
    return volume;
  }
}
float Volume( float l, float w, float h)
{
  float volume;
  cout << "What is the length? " << endl;
  cin >> l;

  cout << "What is the width? " << endl;
  cin >> w;

  cout << "What is the height? " << endl;
  cin >> h;

  if(l<=0||w<=0||h<=0)
  {
    cout << "Invalid Value" << endl;
    return 0;
  }

  else 
  {
    volume = l*w*h;
    return volume;
  }
}
float Volume(float s)
{
  float volume;

  cout << "What is the side? " << endl;
  cin >> s;

  if(s<=0)
  {
    cout << "Invalid Value" << endl;
    return 0;
  }
  else
  {
    volume = pow(s,3);
    cout << volume << endl;
    return volume;
  }
}
float Volume()
{
  float volume, radius;

  cout << "What is the radius? " << endl;
  cin >> radius;

  if(radius<=0)
  {
    cout << "Invalid Value" << endl;
    return 0;
  }

  else
  {
    volume = (4.0/3)*pow(radius,3)*(22/7.0);
    cout << volume << endl;
    return volume;
  }
}

int main()
{
  while(1)
  {
    int choice;
    cout << "What shape would you like to calculate the volume for?"<< endl << "1. Right Circular Cylinder" << endl << "2. Rectangular Prism" << endl << "3. Cube" << endl << "4. Sphere" <<endl << "Enter 0 to quit" << endl;
    cin >> choice;
    
    if(choice==0)
    {
      break;
    }

    switch (choice)
    {
      case 1:
      {
        float r, h, volume;
        volume = Volume(r,h);
        cout << "The volume is: " << volume << endl;
        break;
      }
      
      case 2:
      {
        float l, w, h, volume;
        volume = Volume(l,w,h);
        cout << "The volume is: " << volume << endl;
        break;
      }

      case 3:
      {
        float s, volume;
        volume = Volume(s);
        cout << "The volume is: " << volume << endl;
        break;
      }

      case 4:
      {
        float volume;
        volume = Volume();
        cout << "The volume is: " << volume << endl;
        break;
      }
    }
  }
}