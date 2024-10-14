#include "Pet.h"

#ifndef DOG_H
#define DOG_H

class Dog : public Pet {

public:
  Dog(string petName);
  void uniqueFunction1() override;
  void uniqueFunction2() override;
  void uniqueFunction3() override;
  void getSatisfy() const override;
  string getType() const override;
  ~Dog() { cout << "Delete pet" << endl; }
};

#endif