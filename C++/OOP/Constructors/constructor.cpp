#include <iostream>
#include <string> //This is needed in order to run strings
#include <cmath> //Needed to run some math functions
using namespace std;
 
 /*
 special method that is automatically called when an object of a class  
 is created
 */
 
class  Myclass{ //The class
    public:
        Myclass(){ // Constructor
            cout << "Hello World" << endl;
        }
};

class Car{            //The class 
    public:           //Acess specifier
        string brand; //Attribute
        string model; //Attribute
        int year;     //Attriubute   
        Car(string x, string y, int z){ // Constructor with parameters
            brand = x;
            model = y;
            year = z;
        }
};

class fordMustang{
    public:
        string model;
        string trim;
        int year;
        fordMustang(string m, string t, int yer);

};
fordMustang::fordMustang(string m, string t, int yer){
    model = m;
    trim = t;
    year = yer;
}

 int main(){
    Myclass myObj; //Create an object of myclass(this will call the constructor)

    //Create car objects and call the constructor
    Car carObj1("Ford", "Shelby GT500", 2022);
    Car carObj2("Ford", "Shelby F-150", 2019);

    //Create car object and call contructor with diffrent values
    fordMustang mustang1("Mach 1", "Premium", 2018);
    fordMustang mustang2("GT", "Premium", 2024);

    //Print values
    cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << endl;
    cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << endl;

    //Print Vlaues
    cout << mustang1.model << " " << mustang1.trim << " " << mustang1.year << endl;
    cout << mustang2.model << " " << mustang2.trim << " " << mustang2.year << endl;



    return 0;

 }