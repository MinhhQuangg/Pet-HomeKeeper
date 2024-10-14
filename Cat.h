#include "Pet.h"

#ifndef CAT_H
#define CAT_H

class Cat : public Pet {

public:
  Cat(string petName);
  void uniqueFunction1() override;
  void uniqueFunction2() override;
  void uniqueFunction3() override;
  void getSatisfy() const override;
  string getType() const override;
  ~Cat() { cout << "Delete pet" << endl; }
};

#endif