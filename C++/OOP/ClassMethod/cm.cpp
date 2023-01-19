#include <iostream>
#include <string> //This is needed in order to run strings
#include <cmath> //Needed to run some math functions
using namespace std;

//This calls the method inside
class myClass{
    public:
        void myMethod(){ //Method/Functoin defined inside the class
            cout << "Hello World" << endl;
        }
   };


//This calls the method outside
class secondClass{
    public:
        void methodOutside();
};
void secondClass::methodOutside(){
    cout << "Outside call " << endl;
}


//Using parameters
class car{
    public:
        int speed(int maxSpeed);
};
int car::speed(int maxSpeed){
    return maxSpeed;
}



int main(){
    /*
    methods are functions that belongs to a class.
    you can define functions that belong to a class inside or outside
    */

   //call method inside
   myClass myObj;
   myObj.myMethod();

    //call method outside
    secondClass Outside;
    Outside.methodOutside();

    //using parameters
    car carObj;
    cout << carObj.speed(200);



   return 0;
}