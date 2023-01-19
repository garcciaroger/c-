#include <iostream>
#include <string>
using namespace std;

void studentGrades(int, double[]);

int main(){

    //variables to hold student grades.
    int numberOfGrades = 0;

    //array to store student grades.
    double arrayGrade[numberOfGrades];

    //This functction will get student names and populate the grades into the array
    studentGrades(numberOfGrades, arrayGrade);

    return 0;
}

void studentGrades(int numOfGrades, double arrGrade[]){

    //Start calculating the size of the array.
    cout <<"How many grades are you going to enter? Limit to 30. " << endl;
    cin >> numOfGrades;

    do{
        if(numOfGrades > 30){
            cout << "No more than 30 Grades. " << endl;
            cin >> numOfGrades;
        }else(numOfGrades <= 0){
            cout << "Enter a number greater than 0 " << endl;
             cin >> numOfGrades;
        }
    } while(numOfGrades < 0 || numOfGrades > 30);

    //Start populating the array.
    for(int i = 0; i < numOfGrades; i++){
        cout << "Enter Grade: " << endl;
        cin >> arrGrade[i];
    }

  







}