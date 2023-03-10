#include "car.h"

Car::Car(int year , string kind){
yearModel = year;
make = kind;
speed = 0;
}

int Car::getYear(){
return yearModel;
}

string Car::getMake(){
return make;
}

int Car::getSpeed(){
return speed;
}
void Car::accelerate(){
speed = speed + 5;
}
void Car::brake(){
speed = speed - 5;
}