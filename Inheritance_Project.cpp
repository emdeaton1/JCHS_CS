#include <algorithm>
#include <cmath>
#include <iomanip>
#include <iostream>
#include <string.h>
#include <vector>

using namespace std;

class car 
{
  string exteriorColor, interiorColor, brand;
  int milesPerGallon;

public:
  car() // default constructor
  {
    exteriorColor = "Blue";
    interiorColor = "Black";
    brand = "Honda";
    milesPerGallon = 25;
  }

  car(string e, string i, string b, int m) // overloaded constructor
  {
    exteriorColor = e;
    interiorColor = i;
    brand = b;
    milesPerGallon = m;
  }

  void setExteriorColor(string e) // set function
  {
    exteriorColor = e;
  }

  void setInteriorColor(string i) // set function
  {
    interiorColor = i;
  }

  void setBrand(string b) { brand = b; }

  void setMilesPerGallon(int m) // set function
  {
    milesPerGallon = m;
  }

  string getExteriorColor() // get function
  {
    return exteriorColor;
  }

  string getInteriorColor() // get function
  {
    return interiorColor;
  }

  string getBrand() // get function
  {
    return brand;
  }

  int getMilesPerGallon() // get function
  {
    return milesPerGallon;
  }

  void printCar() 
  {
    cout << "Exterior Color: " << getExteriorColor() << endl;
    cout << "Interior Color: " << getInteriorColor() << endl;
    cout << "Brand: " << getBrand() << endl;
    cout << "Miles Per Gallon: " << getMilesPerGallon() << endl << endl;
    carBurnsFuel();
  }

  void carBurnsFuel() // specific car function
  {
    cout << "Car fuel is low!" << endl;
  }

  ~car() // destructor
  {}
};

class sportsCar : public car 
{
  string lights;
  string wheels;

public:
  sportsCar() // default constructor
  {
    lights = "LED";
    wheels = "Special";
  }

  sportsCar(string e, string i, string b, int m, string l, string w) // overloaded constructor
  {
    lights = l;
    wheels = w;
    setExteriorColor(e);
    setInteriorColor(i);
    setBrand(b);
    setMilesPerGallon(m);
  }

  void sportMode() // specific sportsCar function
  {
    cout << "\nCar goes faster!!!" << endl;
  }

  void setLights(string l) // set function
  {
    lights = l;
  }

  void setWheels(string w) // set function
  {
    wheels = w;
  }

  string getLights() // get function
  {
    return lights;
  }

  string getWheels() // get function
  {
    return wheels;
  }

  void printSportsCar() //prints sportCar values
  {
    cout << "Lights: " << getLights() << endl;
    cout << "Wheels: " << getWheels() << endl;
    printCar();
    sportMode();
  }
  ~sportsCar() {}
};

class ferrari : public sportsCar 
{
  string seats;

public:
  ferrari() // default constructor
  {
    seats = "Leather";
    setBrand("Ferrari");
  }

  ferrari(string e, string i, string b, int m, string l, string w, string s) // overloaded constructor
  {
    setExteriorColor(e);
    setInteriorColor(i);
    setBrand(b);
    setMilesPerGallon(m);
    setLights(l);
    setWheels(w);
    seats = s;
  }

  void setSeats(string s) // set function
  {
    seats = s;
  }

  string getSeats() // get function
  {
    return seats;
  }

  void Ferrari() // specific ferrari function
  {
    cout << "\nFerrai is one of the best Sport's cars available." << endl;
  }

  void printFerrari() //prints ferrari values
  {
    cout << "Seats: " << getSeats() << endl;
    printSportsCar();
  }
  ~ferrari() // destructor
  {}
};

class convertible : public car 
{
  string seats;
  string top;
  string windows;

public:
  convertible() // default constructor
  {
    windows = "Tinted Glass";
  }

  convertible(string e, string i, string b, int m, string w) // overloaded constructor
  {
    setExteriorColor(e);
    setInteriorColor(i);
    setBrand(b);
    setMilesPerGallon(m);
    windows = w;
  }

  void setWindows(string w) // set function
  {
    windows = w;
  }

  string getWindows() // get function
  {
    return windows;
  }

  void Convertable() // specific convertible function
  {
    cout << "\nConvertable Car is one of the best cars available." << endl;
  }

  void printConvertible() //prints convertible values
  {
    cout << "Windows: " << getWindows() << endl;
    printCar();
  }

  ~convertible() // destructor
  {}
};

class truck 
{
  string exteriorColor, interiorColor, brand;
  int milesPerGallon, horsePower;
  string accessories = "Trailer Hitch";

public:
  truck() // default constructor
  {
    exteriorColor = "Blue";
    interiorColor = "Black";
    brand = "Honda";
    horsePower = 450;
    milesPerGallon = 25;
  }

  truck(string e, string i, string b, int h, int m) // overloaded constructor
  {
    exteriorColor = e;
    interiorColor = i;
    brand = b;
    horsePower = h;
    milesPerGallon = m;
  }

  void setExteriorColor(string e) // set function
  {
    exteriorColor = e;
  }

  void setInteriorColor(string i) // set function
  {
    interiorColor = i;
  }

  void setBrand(string b) // set function
  {
    brand = b;
  }

  void setHorsePower(int h) // set function
  {
    horsePower = h;
  }

  void setMilesPerGallon(int m) // set function
  {
    milesPerGallon = m;
  }

  string getExteriorColor() // get function
  {
    return exteriorColor;
  }

  string getInteriorColor() // get function
  {
    return interiorColor;
  }

  string getBrand() // get function
  {
    return brand;
  }

  int getHorsePower() // get function
  {
    return horsePower;
  }

  int getMilesPerGallon() // get function
  {
    return milesPerGallon;
  }

  void Truck() // specific garbageTruck function
  {
    cout << "\nTruck has an attachment called a " << accessories << "." <<  endl;
  }

  void printTruck() //prints truck values
  {
    cout << "Exterior Color: " << getExteriorColor() << endl;
    cout << "Interior Color: " << getInteriorColor() << endl;
    cout << "Brand: " << getBrand() << endl;
    cout << "Horsepower: " << getHorsePower() << endl;
    cout << "Miles Per Gallon: " << getMilesPerGallon() << endl << endl;
    Truck();
  }

  ~truck() // destructor
  {}
};

class garbageTruck : public truck 
{
  string exteriorColor, interiorColor, brand;
  int milesPerGallon, horsePower;
  string accessories = "Grabber";
  
  public:

  garbageTruck() //default constructor
  {
    accessories = "Grabber";
  }

  garbageTruck(string e, string i, string b, int h, int m) // overloaded constructor
  {
    setExteriorColor(e);
    setInteriorColor(i);
    setBrand(b);
    setHorsePower(h);
    setMilesPerGallon(m);
  }

  void garbage() // specific garbageTruck function
  {
    cout << "\nGarbage is flying out of truck." << endl;
    cout << "\nGarbage truck has an arm called a " << accessories << "." <<  endl;
  }

  void printGarbageTruck() //prints garbageTruck values
  { 
    printTruck(); 
    garbage();
  } 

  ~garbageTruck() // destructor
  {}
};

int main() 
{
  while (1) 
  {

    int choice, choice2, choice3, choice4;
    cout << endl << "Choose an option below:" << endl << "\n01. Car" << endl << "02. Truck" << endl << "03. Quit" << endl << "\nSelect a Choice: ";
    cin >> choice;

    if (choice == 3) 
    {
      return 0;
    }

    switch (choice) 
    {
    case 1: 
      {
        cout << "\n01. Car Menu: " << endl;
        cout << endl << "Choose an option below:" << endl << "\n01. Regular Car" << endl << "02. Sports Car" << endl << "03. Convertable" << endl << "04. Quit" << endl << "\nSelect a Choice: ";
        cin >> choice2;

        if (choice2 == 4) 
        {
          break;
        }

      switch (choice2) 
      {
      case 1: 
        {
          string e, i, b;
          int m;

          cout << "\n01. Regular Car Menu: " << endl;
  
          cout << "\nExterior Color: ";
          cin.ignore();
          getline(cin,e);
          cout << "Interior Color: ";
          getline(cin,i);
          cout << "Brand: ";
          getline(cin,b);
          cout << "Miles Per Gallon: ";
          cin >> m;
  
          car c(e, i, b, m);
  
          cout << "\nRegular Car:\n" << endl;
          c.printCar();
  
          break;
        } // end of regular car

      case 2: 
        {
          cout << "\n02. Sports Car Menu: " << endl;
          cout << endl << "Choose an option below:" << endl << "\n01. Regular Sports Car" << endl << "02. Ferrari" << endl << "03. Quit" << endl << "\nSelect a Choice: ";
        cin >> choice3;

          if (choice3 == 3) 
          {
            break;
          }

        switch (choice3) 
        {
          case 1: 
          {
            string e, i, b, l, w;
            int m;

            cout << "\n01. Regular Sports Car Menu: " << endl;
  
            cout << "\nExterior Color: ";
            cin.ignore();
            getline(cin,e);
            cout << "Interior Color: ";
            getline(cin,i);
            cout << "Brand: ";
            getline(cin,b);
            cout << "Miles Per Gallon: ";
            cin >> m;
            cout << "Type of Lights: ";
            cin.ignore();
            getline(cin,l);
            cout << "Type of Wheels: ";
            getline(cin,w);
  
            sportsCar s(e, i, b, m, l, w);
  
            cout << "\nRegular Sports Car:\n" << endl;
            s.printSportsCar();
  
            break;
          } // end of regular sports car
          break;

          case 2: 
          {
            string e, i, b, l, w, s;
            int m;

            cout << "\n02. Ferrari Menu: " << endl;
  
            cout << "\nExterior Color: ";
            cin.ignore();
            getline(cin,e);
            cout << "Interior Color: ";
            getline(cin,i);
            cout << "Brand: ";
            getline(cin,b);
            cout << "Miles Per Gallon: ";
            cin>>m;
            cout << "Type of Lights: ";
            cin.ignore();
            getline(cin,l);
            cout << "Type of Wheels: ";
            getline(cin,w);
            cout << "Seat Fabric: ";
            getline(cin,s);
  
            ferrari s2(e, i, b, m, l, w, s);
  
            cout << "\nFerrari:\n" << endl;
            s2.printFerrari();
  
            break;
            break;
          } // end of ferrari
          break;
        } // end of sports car cases
        break;
      } //end of sports car switch

        case 3: 
          {
            string e, i, b, w;
            int m;

            cout <<endl << "\n03. Convertible Menu: " << endl;
    
            cout << "\nExterior Color: ";
            cin.ignore();
            getline(cin,e);
            cout << "Interior Color: ";
            getline(cin,i);
            cout << "Brand: ";
            getline(cin,b);
            cout << "Miles Per Gallon: ";
            cin >> m;
            cout << "Window Type: ";
            cin.ignore();
            getline(cin,w);
    
            convertible conv(e, i, b, m, w);
    
            cout << "\nConvertable:\n" << endl;
            conv.printConvertible();
    
            break;
          } // end convertible
          break;
        } // end of all car switch
        break;
      } // end of all car switch
    
      case 2: 
      {
        cout << endl << "\n02. Truck Menu: " << endl;
        cout << endl << "Choose an option below:" << endl << "\n01. Regular Truck" << endl << "02. Garbage Truck" << endl << "03. Quit" << endl << "\nSelect a Choice: ";
        cin >> choice4;
  
        if (choice4 == 3) 
        {
          break;
        }

      switch (choice4) 
      {
        case 1: 
          {
            string e, i, b;
            int h, m;

            cout << endl << "\n01. Regular Truck Menu: " << endl;
    
            cout << "\nExterior Color: ";
            cin.ignore();
            getline(cin,e);
            cout << "Interior Color: ";
            getline(cin,i);
            cout << "Brand: ";
            getline(cin,b);
            cout << "Horsepower (In Digits): ";
            cin >> h;
            cout << "Miles Per Gallon: ";
            cin >> m;
    
            truck t(e, i, b, h, m);
    
            cout << "\nRegular Truck:\n" << endl;
            t.printTruck();
            break;
          } // end of regular truck
  
        case 2: 
          {
            string e, i, b;
            int h, m;

            cout << endl << "02. Garbage Truck Menu: " << endl;
    
            cout << "\nExterior Color: ";
            cin.ignore();
            getline(cin,e);
            cout << "Interior Color: ";
            getline(cin,i);
            cout << "Brand: ";
            getline(cin,b);
            cout << "Horsepower (In Digits): ";
            cin >> h;
            cout << "Miles Per Gallon: ";
            cin >> m;
    
            garbageTruck t2(e, i, b, h, m);
    
            cout << "\nGarbage Truck:\n" << endl;
            t2.printGarbageTruck();
    
            break;
            break;
          } // end of garbage truck
          break;
        } // end of truck cases
        break;
      } // end of truck switch
    } // end of first switch
  } // end of while loop
} // end of int main