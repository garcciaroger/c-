#include <iostream>
using namespace std;
//function that inputs the grades, stores them in an array and returns the number of grades
int inputGrades(double grades[])
{
    //input number of grades
    int count = 0;
    cout<<"Please enter the number of grades: ";
    cin>>count;
    
    //input grades
    cout<<"Enter the Grades : ";
    for(int i=0;i<count;i++)
    cin>>grades[i];
    
    //return number of grades
    return count;
}

double medianGrades(double grades[], int n)
{
    double median;
    //If number of grades = even, the median is the average of the middle two grades.
    if (n%2==0)
    median = (grades[n/2] + grades[(n/2)-1])/2;
    else
    //median grades is the middle grade.
    median = grades[n/2];
    
    //returning median
    return median;
}
//function to sort grades[] array
void sort(double grades[], int n)
{
    //Simple bubble sorting technique
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(grades[i]>grades[j])
            swap(grades[i],grades[j]);
        }
    }
}
int main()
{
    int n;
    //grades array of maximum 20 elements
    double grades[20];
    //calling inputGrades to store number of grades
    n = inputGrades(grades);
    
    //calling sort function to sort grades array
    sort(grades,n);
    
    //calling medianGrades too store median and printing it
    double median = medianGrades(grades,n);
    cout<<"Median of Grades is : "<<median<<endl;
    return 0;
}