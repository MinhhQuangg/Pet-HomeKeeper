#include "Hamster.h"

Hamster::Hamster(string petName) : Pet(petName){};
void Hamster::uniqueFunction1() {
  cout << "I love playing in the Cage!!" << endl;
  hungry += 30;
  happy += 30;
  bored -= 20;
};
void Hamster::uniqueFunction2() {
  cout << "Give me more vegetable please!!!" << endl;
  hungry -= 30;
  happy += 10;
  sleepy += 30;
};
void Hamster::uniqueFunction3() {
  cout << "I'm trapped. Let me out of the Cage" << endl;
  bored += 30;
  happy -= 30;
  sleepy += 20;
};
void Hamster::getSatisfy() const{
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
string Hamster::getType() const { return "Hamster"; };