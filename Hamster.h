#include "Pet.h"

#ifndef HAMSTER_H
#define HAMSTER_H

class Hamster : public Pet {

public:
  Hamster(string petName);
  void uniqueFunction1() override;
  void uniqueFunction2() override;
  void uniqueFunction3() override;
  void getSatisfy() const override;
  string getType() const override;
  ~Hamster() { cout << "Delete pet" << endl; }
};

#endif