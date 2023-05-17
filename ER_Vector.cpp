#include <algorithm>
#include <iostream>
#include <string>
#include <vector>

using namespace std;

class Patient 
{
private:
  string name, ailment;
  int priority, position;

public:
  Patient() 
  {
    name = "Name";
    ailment = "sick";
    priority = 5;
    position = 0;
  }

  Patient(string n, int a, int p, int pos) 
  {
    name = n;
    ailment = a;
    priority = p;
    position = pos;
  }

  void setName(string n) 
  { 
    name = n; 
  }

  void setAilment(string a) 
  {
    ailment = a; 
  }

  void setPriority(int p)
  {
    priority = p; 
  }

  void setPosition(int pos) 
  {
    position = pos; 
  }

  string getName() 
  { 
    return name; 
  }

  string getAilment() 
  {
    return ailment; 
  }

  int getPriority() 
  {
    return priority; 
  }

  int getPosition() 
  {
    return position; 
  }

  void newPatient(Patient &patient) 
  {
    string n, a;
    int p, pos;

    cout << "Name: ";
    cin.ignore();
    getline(cin, n);
    cout << "Ailment: ";
    getline(cin, a);
    cout << "Priority level (1-5: 1=low, 5=life-threatening): ";
    cin >> p;

    patient.setName(n);
    patient.setAilment(a);
    patient.setPriority(p);
  }

  void printValues(Patient e) 
  {
    cout << "Name for patient #" << e.getPosition() << ": " << e.getName()
         << endl;
    cout << "Ailment for patient #" << e.getPosition() << ": " << e.getAilment()
         << endl;
    cout << "Priotiry for patient #" << e.getPosition() << ": "
         << e.getPriority() << endl;
    cout << endl;
  }
};

bool compareFunc(Patient p1, Patient p2) 
{
  if (p1.getPriority() >= p2.getPriority()) 
  {
    return true;
  } 
    
  else 
  {
    return false;
  }
}

int main() 
{
  vector <Patient> e;
  vector <Patient>::iterator nextPatient;

  while (1) {

    int choice = 0;

    cout << endl
         << "Choose a number from the options below: " << endl
         << "\t1. Add patient" << endl
         << "\t2. Call next patient" << endl
         << "\t3. List patients" << endl
         << "\t4. Quit" << endl;
    cout << "Enter choice: " << endl;
    cin >> choice;

    if (choice == 4) 
    {
      if (e.size() != 0) 
      {
        cout << endl
             << "There are still more patients to call, you cannot quit yet!"
             << endl;
        continue;
      } 
        
      else
      {
        cout << endl << "The ER is now closed!" << endl << "Goodbye!" << endl;
        break;
      }
    }

    switch (choice) 
    {
      case 1: 
      {
        cout << endl << "----1. Add patient----" << endl << endl;
        Patient patient;
        patient.newPatient(patient);
        patient.setPosition(e.size() + 1);
        e.push_back(patient);
  
        // call sort
        sort(e.begin(), e.end(), compareFunc);
  
        break;
      }
      
      case 2: 
      {
      cout << endl << "----2. Call next patient----" << endl << endl;

      nextPatient = e.begin();

      if (nextPatient != e.end()) 
      {
        nextPatient->printValues(*nextPatient);
        cout << endl;

        // remove the patient
        e.erase(nextPatient);
      }

      else 
      {
        cout << "There are no more patients!" << endl << "Choose 4 to quit." << endl;
      }

      break;
    }
      case 3: 
      {
        cout << endl << "----3. List patients----" << endl << endl;
  
        if (e.size() == 0) 
        {
          cout << "There are no more patients!" << endl
               << "Choose 4 to quit." << endl;
        }
  
        for (vector<Patient>::iterator it = e.begin(); it != e.end(); it++) 
        {
          it->printValues(*it);
          cout << endl;
        }
  
        break;
      }
    }
  }
}