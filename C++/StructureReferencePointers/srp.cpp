#include <iostream>
#include <string> //This is needed in order to run strings
#include <cmath> //Needed to run some math functions
using namespace std;

//named structures
//treated as a data type
struct Ford{
    string model;
    string trim;
    int year;
 };

int main(){
    //------------------------Structures
    //group several variables into one place
    //a "member" is an element in that structure and can contain diffrent data

    struct{              //Structure Declaration
        int myNum;       //Member int vale
        string myString; //Member string variable
    }   myStructure;     // Structure variable

    //assing values to members of my structure
    myStructure.myNum = 5;
    myStructure.myString = "Roger Garcia";

    //Print members of myStructure
    cout << myStructure.myNum << endl;
    cout << myStructure.myString << endl;

    //You can use a comma to use one structure on many variables
    struct{
        int numbs;
        string newString;
    } myStruct1, myStruct2, myStruct3; // Multi variables seperated with commas

    //how to apply it in real examples
    struct{
        string brand;
        string model;
        int year;
    } car1, car2;

    car1.brand = "Ford";
    car1.model = "GT500";
    car1.year  = 2022; 

    car2.brand = "Chevrolet";
    car2.model = "Camaro ZL1";
    car2.year  = 2021; 

    cout << car1.brand << " " << car1.model << " " << car1.year << endl;
    cout << car2.brand << " " << car2.model << " " << car2.year << endl;


    //named structures
    //treated as a data type
    Ford mustang;
    mustang.model = "Mustang";
    mustang.trim = "GT500";
    mustang.year = 2022;

    Ford truck;
    truck.model = "F-150";
    truck.trim = "Raptor R";
    truck.year = 2023;
  


  
    cout << mustang.model << " " << mustang.trim << " " << mustang.year << endl;
    cout << truck.model << " " << truck.trim << " " << truck.year << endl;


    //------------------------------------------Reference Variables
    //used to "refrence" an existing variable and is created using &

    string food = "Burgers";
    string &meal = food; // refrenced to food 

    cout << food << endl;
    cout << meal << endl;

    //----------------------------------------Pointers
    




}