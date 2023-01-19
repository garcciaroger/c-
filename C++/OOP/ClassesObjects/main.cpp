#include <iostream>
#include <string> //This is needed in order to run strings
#include <cmath> //Needed to run some math functions
using namespace std;

 /*
    public is acess specifier which means that members of the class
    are acessable from outside the class
    */
class myClass{          //The class
        public:             //Access Specifier
            int myNum;      //Attribute - int variable
            string myString;//Attribute - string variable
    };

class Car{
    public:
        string brand;
        string model;
        int year;
};

int main(){
    myClass myObj; //Create an object of the class

    //Acess attributes and set values
    myObj.myNum = 15;
    myObj.myString = "Roger";

    //Print attributes value
    cout << myObj.myNum << endl;
    cout << myObj.myString<< endl;

    //car object 1
    Car carObj1;
    carObj1.brand = "Ford";
    carObj1.model = "Raptor";
    carObj1.year = 2021;

    //car object 2
    Car carObj2;
    carObj2.brand = "Ford";
    carObj2.model = "Shelby F150";
    carObj2.year = 2022;

    cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << endl;
    cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << endl;
    
    return 0;
}