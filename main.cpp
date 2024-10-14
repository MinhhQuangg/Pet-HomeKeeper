#include "Cat.h"
#include "Dog.h"
#include "Hamster.h"
#include "Pet.h"
#include <cctype>
#include <fstream>
#include <iostream>
#include <string>

using namespace std;

Pet *createPet(int choice, string petName) {
  if (choice == 1) {
    return new Dog(petName);
  } else if (choice == 2) {
    return new Cat(petName);
  } else if (choice == 3) {
    return new Hamster(petName);
  } else {
    return nullptr;
  }
}

int main() {
  string fileName;
  string petName;
  string petPet;
  int option1;
  int option2;
  int option3;
  string type;
  double time;
  cout << "Welcome to the Pet Homekeeper game" << endl;
  while (true) {
    cout << "Please select from the following options: " << endl;
    cout << "1. Create new pet" << endl;
    cout << "2. Continue your pet" << endl;
    cout << "3. Exit" << endl;
    cin >> option1;
    cout << endl;

    Pet *pet = nullptr;

    if (option1 == 1) {
      cout << "Please enter your pet name:" << endl;
      cin >> petName;
      cout << "1. Dog" << endl;
      cout << "2. Cat" << endl;
      cout << "3. Hamster" << endl;
      cout << "Please enter your pet type (type the number): " << endl;
      cin >> option2;
      cout << endl;
      if (option2 == 1 || option2 == 2 || option2 == 3) {
        pet = createPet(option2, petName);
      } else {
        return 0;
      }
    } else if (option1 == 2) {
      cout << "Please enter your pet name:" << endl;
      cin >> petName;
      cout << "1. Dog" << endl;
      cout << "2. Cat" << endl;
      cout << "3. Hamster" << endl;
      cout << "Please enter your pet type (type the number): " << endl;
      cin >> option2;
      if (option2 == 1 || option2 == 2 || option2 == 3) {
        pet = createPet(option2, petName);
      } else {
        return 0;
      }
      pet->load();
      cout << "How long have you stop playing games?" << endl;
      cin >> time;
      cout << endl;
      pet->nextHour(time);
      pet->getUpdated();
    } else if (option1 == 3) {
      cout << "Thank you for playing" << endl;
      return 0;
    } else {
      cout << "Invalid option. Please try again" << endl;
      return 0;
    }
    while (true) {
      cout << "Please select from the following options: " << endl;
      cout << "1. Play" << endl;
      cout << "2. Sleep" << endl;
      cout << "3. Feed" << endl;
      cout << "4. Train" << endl;
      cout << "5. Bath" << endl;
      cout << "6. Unique interaction 1" << endl;
      cout << "7. Unique interaction 2" << endl;
      cout << "8. Unique interaction 3" << endl;
      cout << "9. Check Status" << endl;
      cout << "10. Get your pet type" << endl;
      cout << "11. Check your pet satisfaction" << endl;
      cout << "12. Save" << endl;
      cout << "13. Save and Exit" << endl;
      cin >> option3;
      cout << endl;
      if (option3 == 1) {
        pet->play();
      } else if (option3 == 2) {
        pet->sleep();
      } else if (option3 == 3) {
        pet->feed();
      } else if (option3 == 4) {
        pet->train();
      } else if (option3 == 5) {
        pet->bath();
      } else if (option3 == 6) {
        pet->uniqueFunction1();
      } else if (option3 == 7) {
        pet->uniqueFunction2();
      } else if (option3 == 8) {
        pet->uniqueFunction3();
      } else if (option3 == 9) {
        pet->checkStatus();
      } else if (option3 == 10) {
        type = pet->getType();
        cout << type << endl;
      } else if (option3 == 11) {
        pet->getSatisfy();
      } else if (option3 == 12) {
        pet->save();
      } else if (option3 == 13) {
        pet->save();
        return 0;
      } else {
        cout << "Invalid option. Please try again" << endl;
      }
      pet->nextHour(0.5);
      pet->getUpdated();
      cout << endl;
    }
  }
}