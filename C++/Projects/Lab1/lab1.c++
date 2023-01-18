#include <iostream>
#include <string> 
using namespace std;

void populateArray(double [], int);
void sortArray(double [], int);
// double calculateMedian(double[], int, double);

int main(){
    int numOfGrades;
    double arrGrade[numOfGrades] = {};

    cout << "Enter total number of Grades. No more than 20. " << endl;
    cin >> numOfGrades;

    do{
        if(numOfGrades < 0 || numOfGrades > 20){
            cout << "Please Enter a total of no more than 20 grades! : " << endl;
            cin >> numOfGrades;
        }
    }while(numOfGrades < 0 || numOfGrades > 100);

    //Populate Array
    populateArray(arrGrade, numOfGrades);
     //sort array
    sortArray(arrGrade, numOfGrades);
    //display sorted array
    for(int i = 0; i < numOfGrades; i++){
        cout << arrGrade[i] << endl;

    }

}

//This function will populate the array and store it
void populateArray(double arrGrade[], int numOfGrades){
    for(int i = 0; i < numOfGrades; i++){
        cout << "Enter the number of Grades: " << endl;
        cin >> arrGrade[i];
    }
}

//This function will sort the array.
void sortArray(double arrGrade[], int numOfGrades){
    for(int i = 0; i < numOfGrades; i++)
    {
        for(int z=i+1;z<numOfGrades;z++)
        {
            if( arrGrade[i]> arrGrade[z])
            {
                int y = arrGrade[i];
                arrGrade[i] = arrGrade[z];
                arrGrade[z] = y;
             }
       }    
    }
}
