#include "Cat.h"

Cat::Cat(string petName) : Pet(petName){};
void Cat::uniqueFunction1() {
  cout << "I love playing with feather" << endl;
  hungry += 30;
  happy += 30;
  bored -= 20;
};
void Cat::uniqueFunction2() {
  cout << "Fish is always the best" << endl;
  hungry -= 30;
  happy += 10;
  sleepy += 30;
};
void Cat::uniqueFunction3() {
  cout << "Why do we change our routine?" << endl;
  bored += 30;
  happy -= 30;
  sleepy += 30;
};
void Cat::getSatisfy() const {
  double satisfy = (getHappy() + getHungry() + getBored() + getSleepy()) / 4;
  if (satisfy < 25) {
    cout << "You should treat me better!!!" << endl;
  } else if (satisfy >= 25 && satisfy < 50) {
    cout << "You should play with me more !!!" << endl;
  } else if (satisfy >= 50 && satisfy < 75) {
    cout << "I'm alright !!!" << endl;
  } else if (satisfy > 75) {
    cout << "You are the best!!!" << endl;
  }
}
string Cat::getType() const { return "Cat"; };
