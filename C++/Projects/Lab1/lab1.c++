#include <iostream>
#include <string> 
#include <iomanip>
using namespace std;

//Function Declarations
int populateArray(double []);
void sortArray(double [], int);
double calculateMedian(double [], int);

//The main function
int main(){
    //variables
    int numOfGrades;
    double arrGrade[20];
    //Populate Array
    numOfGrades = populateArray(arrGrade);
     //sort array
    sortArray(arrGrade, numOfGrades);
    //calculate the median of the array
    double median = calculateMedian(arrGrade, numOfGrades);
    cout << "The median is: " << median << endl;
    return 0;
}
//This function will populate the array and store it
int populateArray(double arrGrade[]){
    int grades = 0;
    //calculate number of grades
    cout << "Please enter no more than 20 grades " << endl;
    cout << "Enter number of grades: " << endl;
    cin >> grades;
    //User inputs grades
    for(int i = 0; i < grades; i++){
        cout << "Enter the number of Grades: " << endl;
        cin >> arrGrade[i];
    }
    //return # of grades
    return grades;
}
//This function will sort the array.
void sortArray(double arrGrade[], int numOfGrades){
    for(int i = 0; i < numOfGrades; i++)
    {
        for(int z=i+1;z<numOfGrades;z++)
        {
            if( arrGrade[i]> arrGrade[z])
            {
                if(arrGrade[i]>arrGrade[z])
                 swap(arrGrade[i],arrGrade[z]);
             }
       }    
    }
}
//Function will calculate the median of the array
double calculateMedian(double arrGrades[], int numOfGrades){
    double median;
    //check for even numbers
    if(numOfGrades % 2 !=0){
        return median = arrGrades[numOfGrades / 2];
    }
    //return if odd numbers
    else
    median = (arrGrades[(numOfGrades - 1) / 2] + arrGrades[numOfGrades/2]) / 2.0;
    return median;
}


