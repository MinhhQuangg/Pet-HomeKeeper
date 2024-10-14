#ifndef PET_H
#define PET_H

#include <cctype>
#include <fstream>
#include <iostream>
#include <string>

using namespace std;
class Pet {
protected:
  string name;
  unsigned int hungry;
  unsigned int bored;
  unsigned int sleepy;
  unsigned int happy;
  unsigned int time;

public:
  Pet(string petName);
  Pet(string petName, int _happy, int _bored, int _sleepy, int _hungry);
  void play();
  void sleep();
  void feed();
  void train();
  void bath();
  void nextHour(double time);
  void checkStatus();
  int getHungry() const;
  int getBored() const;
  int getSleepy() const;
  int getHappy() const;
  void getUpdated();
  virtual string getType() const = 0;
  virtual void getSatisfy() const;
  virtual void uniqueFunction1();
  virtual void uniqueFunction2();
  virtual void uniqueFunction3();
  string getName();
  void save();
  void load();
  virtual ~Pet() { cout << "Delete pet" << endl; }
};

#endif