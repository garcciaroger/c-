#include "car.h"

int main(){
Car car(2020 , "SUV");

cout<<"Year Model : "<<car.getYear()<<endl;
cout<<"Make : "<<car.getMake()<<endl;

for(int i=0;i<5;i++){
car.accelerate();
cout<<"Current speed : "<<car.getSpeed()<<endl;
}
cout<<"\nApplying brake\n";
for(int i=0;i<5;i++){
car.brake();
cout<<"Current speed : "<<car.getSpeed()<<endl;
}
}