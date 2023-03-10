#include<iostream>
using namespace std;

class Car{
private:
int yearModel;
string make;
int speed;

public:
Car(int year , string kind);
int getYear();
string getMake();
int getSpeed();
void accelerate();
void brake();
};