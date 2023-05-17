#include <iostream>
#include <string>
#include <string.h>
#include <algorithm>
#include <vector>
using namespace std;

class pound
{
  private:
    string type, color;  
    char gender;
    int age, weight, position;

  public:
    pound()
    {
      type = "dog";
      color = "brown";
      gender = 'f';
      age = 5;
      weight = 100;
      position = 1;
    }
   
    pound(string t, string c, char g, int a, int w, int pos)
    {
      type = t;
      color = c;
      gender = g;
      age = a;
      weight = w;
      position = pos;
    }
    
    void setType(string t)
    {
      type = t;
    }

    void setColor(string c)
    {
      color = c;
    }

    void setGender(char g)
    {
      gender = g;
    }

    void setAge(int a)
    {
      age = a;
    }

    void setWeight(int w)
    {
      weight = w;
    }

    void setPosition(int pos)
    {
      position = pos;
    }

    string getType()
    {
      return type;
    }

    string getColor()
    {
      return color;
    }

    char getGender()
    {
      return gender;
    }

    int getAge()
    {
      return age;
    }

    int getWeight()
    {
      return weight;
    }

    int getPosition()
    {
      return position;
    }

    void printValues()
    {
      cout << "Type for animal #" << position << ": " << getType() << endl;
      cout << "Color for animal #" << position << ": " << getColor() << endl;
      cout << "Gender for animal #" << position << ": " << getGender() << endl;
      cout << "Age for animal #" << position << ": " << getAge() << endl;
      cout << "Weight for animal #" << position << ": " << getWeight() << endl;
    }
};


int main() 
{
  string t, c;  
  char g;
  int a, w, num;

  cout << "How many animals were caught? " << endl;
  cin >> num;

  vector <pound> animalList;
  vector <string> animalTypes;

  for(int position=1; position<=num; position++)
    {
      cout << endl;
      cout << "Type for animal #" << position << ": ";
      cin >> t;
      cout << "Color for animal #" << position << ": ";
      cin >> c;
      cout << "Gender for animal #" << position << ": ";
      cin >> g;
      cout << "Age for animal #" << position << ": ";
      cin >> a;
      cout << "Weight for animal #" << position << ": ";
      cin >> w;

      cout << endl;

      animalList.push_back(pound(t,c,g,a,w,position));
    }

  //finds unique animal types from the list of animals
  for(int i = 0; i < animalList.size(); ++i)
  {
    string animalType = animalList[i].getType();
    if(find(animalTypes.begin(), animalTypes.end(), animalType) == animalTypes.end())
    {
      animalTypes.push_back(animalType);
    }
  }
  //sorts the unique animal types in ascending order
  sort(animalTypes.begin(), animalTypes.end());
  
  //prints all of the animals of a given type, and repeats for all animal types
  for(int i = 0; i < animalTypes.size(); ++i)
  {
    string animalType = animalTypes[i];
    for(int j = 0; j < animalList.size(); ++j)
    {
      if(animalList[j].getType() == animalType)
      {
        animalList[j].printValues();
        //animalList.at(i).printValues();
        cout << endl;
      }
    }
  }

  //how to print values short hand
  /*
  for(int j = 0; j < animalList.size(); ++j)
  {
    animalList[j].printValues();
    //animalList.at(i).printValues();
    cout << endl;
  } 
  */
}