#include <iostream>
#include <string> 
using namespace std;

void populateArray(double [], int);
void sortArray(double [], int);
double calculateMedian(double[], int, double);

int main(){
    double median = 0.0;
    int numOfGrades = 0;
    double arrGrade[] = {0.0};

    cout << "Enter total number of Grades. No more than 20. " << endl;
    cin >> numOfGrades;

    do{
        if(numOfGrades < 0 || numOfGrades > 20){
            cout << "Please Enter a total of no more than 20 grades! : " << endl;
            cin >> numOfGrades;
        }
    }while(numOfGrades < 0 || numOfGrades > 20);

    //Populate Array
    populateArray(arrGrade, numOfGrades);
     //sort array
    sortArray(arrGrade, numOfGrades);
    //display sorted array
    for(int i = 0; i < numOfGrades; i++){
        cout << arrGrade[i] << endl;
    }
    //calculate the median of the array
    median = calculateMedian(arrGrade, numOfGrades, median);

    cout << "The median is: " << median << endl;

    return 0;
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
//Function will calculate the median of the array
double calculateMedian(double arrGrades[], int numOfGrades, double median){

    if(numOfGrades % 2 !=0){
        return arrGrades[numOfGrades / 2];
    }
    median = (arrGrades[(numOfGrades - 1) / 2] + arrGrades[numOfGrades/2]) / 2.0;
    return median;

}


