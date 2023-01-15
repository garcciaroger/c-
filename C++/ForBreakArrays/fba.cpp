#include <iostream>
#include <string> //This is needed in order to run strings
#include <cmath> //Needed to run some math functions
using namespace std;

int main(){

    //------------------------------------------standard for loop
    for(int i=0; i<10; i++){
        cout << i << endl;
    }

    //This example will print out even numbers
    for(int i = 0; i<10; i = i +2){
        cout << i << endl;
    }

    //nested loops
    for(int i =1; i <=2; ++i){
        cout << "Outer: " << i << endl;
    }
        for(int j = 1; j <=3; ++j){
            cout <<"Inner: " << j << endl;
        }

    //foreach loop
    //used to loop through elements in an array
    int myNumbers[5] = {10,20,30,40,50};
    for(int i: myNumbers){
        cout << i << endl;
    }

    //-----------------------------------------Break and contine
    //break can be used to jump out of a loop
    for(int i = 0; i < 50; i++){
        if(i==25){
            break;
        }
        cout << i << endl;
    }

    //continue iteration breaks out of one loop and contines
    for(int i = 0; i < 50; i++){
        if(i==25){
            continue;;
        }
        cout << i << endl;
    }

    //------------------------------------------Arrays
    string cars[3] = {"Ford ", "Chevy ", "BMW "};
    int myNum[3] = {10,20,30};

    cout << cars[0]; //this acess ford
    cars[2] = "Tesla ";
    cout << cars[2] << endl;

    //Looping through an array
    string food[5] = {"Pizza", "Burgers", "Pasta", "Chicken", "Steak"};
    for(int i = 0; i < 5; i++){
        cout << i << " = " << food[i] << endl;
    }
    
    //foreach loop
    int numArray[5] = {10,20,30,40,50};
    for(int i : numArray){
        cout << i << "For each loop" << endl;
    }

    //C++ does not need to have a specifed size of array
    //you can always declare array and add later
    

    //you can get sizeof() operator to determine size of array
    //Return elements in bytes
    //you can divide size of array by the size of data type it contains

    int numbers[5] = {10,20,30,40,50};
    cout << sizeof(numbers) << endl;
    int getArrayLength = sizeof(numbers)/sizeof(int);
    cout << "Array list is "<<getArrayLength;
  

    //Looping through array with sizeof()
    int numberlist[5] = {1,2,3,4,5};
    for(int i = 0; i < sizeof(numberlist)/sizeof(int); i++){
        cout << numberlist[i] << endl;
    }

    int lastNumberList[5] = {10,20,30,40,50};
    for(int i : lastNumberList){
        cout << i << endl;
    }


    cout << "Multi Array" << endl;
    //Multi dimensional arrays
    //array of arrays
    //to declare, you need
    //1. define variable and name
    //2. then first square is how many elements main array has (Row)
    //3. 2nd array is for how many sub elements array has (Column)

        string letters[2][4] = {
            {"A", "B", "C", "D"}, 
            {"E", "F", "G", "H"}
        };

        int numbas[2][2][2]= {
        {
            {1, 2},
            {3, 4}
        },
        {
            {5, 6},
            {7, 8}
        }
        };

        //accessing elements in arrays
        cout << letters[1][2] << endl;
        cout << numbas[1][1] << endl;

        //Changing the elements in arrays
        letters[0][0] = "Z";
        cout << letters[0][0] << endl;

        //looping through multi dimensional array using letter
        for(int i = 0; i < 2; i++)
            for(int x = 0; x < 4; x++){
                cout << letters[i][x] << endl;
            }

        //Looping through a 3-d array
        string threeDArray[3][3][3]{
            {
                {"A","B","C"},
                {"D","E","F"},
                {"G","H","I"}
            },
            {
                {"J","K","L"},
                {"M","N","O"},
                {"P","Q","R"}
            }
        };

        for(int i = 0; i < 3; i ++){
            for(int x = 0; x < 3; x++){
                for(int c = 0; c < 3; c++){
                    cout << threeDArray[i][x][c] << endl;
                }
            }
        }



    return 0;

}