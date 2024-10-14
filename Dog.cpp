#include "Dog.h"

Dog::Dog(string petName) : Pet(petName){};
void Dog::uniqueFunction1() {
  cout << "Yeah, we can hang out" << endl;
  hungry += 20;
  happy += 30;
  bored -= 15;
};
void Dog::uniqueFunction2() {
  cout << "Yeah! Beef again" << endl;
  hungry -= 30;
  happy += 15;
  sleepy += 20;
};
void Dog::uniqueFunction3() {
  cout << "Let's hang out. I do not want to be home" << endl;
  bored += 25;
  happy -= 25;
  sleepy += 20;
};
void Dog::getSatisfy() const {
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
string Dog::getType() const { return "Dog"; };