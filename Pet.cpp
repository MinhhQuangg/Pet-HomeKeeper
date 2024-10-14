#include "Pet.h"

Pet::Pet(string petName)
    : name(petName), hungry(50), bored(50), sleepy(50), happy(50){};

Pet::Pet(string petName, int _happy, int _bored, int _sleepy, int _hungry)
    : name(petName), hungry(_hungry), bored(_bored), sleepy(_sleepy),
      happy(_happy){};

void Pet::play() {
  cout << "Let's have some fun" << endl;
  happy += 20;
  bored -= 10;
  hungry += 15;
};

void Pet::sleep() {
  cout << "Good night" << endl;
  sleepy -= 15;
  bored += 5;
  happy -= 5;
};

void Pet::feed() {
  cout << "Thanks for taking care of me" << endl;
  hungry -= 20;
  happy += 10;
  sleepy += 5;
};

void Pet::train() {
  cout << "Let's be more active!!!" << endl;
  hungry += 10;
  sleepy += 10;
  bored += 10;
  happy += 15;
};

void Pet::bath() {
  cout << "So cool!!!!" << endl;
  hungry += 5;
  happy += 5;
  sleepy += 5;
};

void Pet::nextHour(double time) {
  if (time >= 6) {
    hungry += 30;
    sleepy += 30;
    bored += 30;
    happy -= 30;
  } else if (time < 6 && time >= 1) {
    hungry += 15;
    sleepy += 15;
    bored += 15;
    happy -= 15;
  } else if (time > 0 && time < 1) {
    hungry += 5;
    sleepy += 5;
    bored += 5;
    happy -= 5;
  } else {
    cout << "Invalid input";
  }
};

string Pet::getName() { return name; };

void Pet::checkStatus() {
  cout << "Your " << name << "'s characteristics:" << endl;
  cout << "Hungry:" << hungry << endl;
  cout << "Bored:" << bored << endl;
  cout << "Sleepy:" << sleepy << endl;
  cout << "Happy:" << happy << endl;
  cout << endl;
};
int Pet::getHungry() const { return hungry; };
int Pet::getBored() const { return bored; };
int Pet::getSleepy() const { return sleepy; };
int Pet::getHappy() const { return happy; };

void Pet::save() {
  string fileName;
  cout << "Please input your fileName: " << endl;
  cin >> fileName;
  ofstream output;
  output.open(fileName + ".txt");
  if (!output.is_open()) {
    cout << "File not found" << endl;
  }
  output << name << endl;
  output << hungry << " " << bored << " " << sleepy << " " << happy;
  cout << "Pet saved succesfully" << endl;
  cout << "Please remember your pet name: "<< name << " and type: " << getType() << " to continue the game next time" << endl;
  output.close();
};

void Pet::load() {
  // string petName;
  // int _hungry, _bored, _sleepy, _happy;
  string fileName;
  cout << "Please input your fileName: " << endl;
  cin >> fileName;
  ifstream input;
  input.open(fileName + ".txt");
  if (!input.is_open()) {
    cout << "Pet not found" << endl;
  }
  getline(input, name);
  input >> hungry >> bored >> sleepy >> happy;
  cout << "Pet loading succesfully" << endl;
  input.close();
};

void Pet::getUpdated() {
  if (hungry > 100) {
    hungry = 100;
    cout << "Please give me some food" << endl;
  }
  if (bored > 100) {
    bored = 100;
    cout << "Can we have some fun?" << endl;
  }
  if (sleepy > 100) {
    sleepy = 100;
    cout << "I'm tired, let me sleep" << endl;
  }
  if (happy < 10) {
    cout << "I am sad" << endl;
  }
  if (hungry == 0) {
    hungry = 1;
    cout << "I'm too full" << endl;
  }
  if (bored == 0) {
    bored = 1;
    cout << "That's so much fun. Can we rest a little bit" << endl;
  }
  if (sleepy == 0) {
    sleepy = 1;
    cout << "I have lots of energy. Can we do some activities?" << endl;
  }
  if ( happy > 100) {
    happy = 100;
    cout << "I need some rest. That's too fun" << endl;
  }
}

void Pet::getSatisfy() const {}
void Pet::uniqueFunction1(){};
void Pet::uniqueFunction2(){};
void Pet::uniqueFunction3(){};