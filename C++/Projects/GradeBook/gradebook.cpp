#include <iostream>
#include <string>
using namespace std;


class student{
    public:
        string firstName;
        string lastName;
        int IdNumber;
        int numOfGrades;
        double grades[];
};

void populateArray(int, double[]);

int main(){

    //Student Object
    student stuFristName;
    student stuFristLast;
    student id;
    student numGrades;
    student arrGrades;

    //Variables
    int numberOfGrades = numGrades.numOfGrades;
    double arrayGrades = arrGrades.grades[0];

    //Other
    double average = 0;

    //Entering the student basic info
    cout << "Enter Student First Name " << endl;
    cin >> stuFristName.firstName;
    cout << "Enter Student Last Name " << endl;
    cin >> stuFristLast.lastName;
    cout << "Enter ID" << endl;
    cin >> id.IdNumber;
    cout << endl;

    //Starting to calculate the array size
    cout << "We will now enter the students grade" << endl;
    cout << "How many grades are you entering? No more than 30" << endl;
    cin >> numberOfGrades;

    //Verify Grades that its no more than 30.
    do{
        if(numberOfGrades < 0 || numberOfGrades > 30){
            cout << "Please Enter a total of no more than 20 grades! : " << endl;
            cin >> numberOfGrades;
        }
    }while(numberOfGrades < 0 || numberOfGrades > 20);

    //user enters grades
    populateArray(numberOfGrades, arrayGrades);
    //This will calculate and return a average
    calculateAverage(numberOfGrades, arrayGrades, average);



    return 0; 
}

void populateArray(int numberOfGrades, double arrayGrades[]){
    //User enters grade
    for(int i = 0; i < numberOfGrades; i++){
        cout << "Enter the grades: " << endl;
        cin >> arrayGrades[i];
    }
}
double calculateAverage(int numberOfGrades, double arrayGrades[], double average){


}

