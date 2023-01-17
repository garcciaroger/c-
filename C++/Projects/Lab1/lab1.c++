#include <iostream>
#include <string> 
using namespace std;

void returnGrades(int* userGrades, int size);
//void sortArray(int userGrades[20], int size);


int main(){

    int arraySize = 0;
    //Validate no more than 20 grades.
    cout <<"Enter no more than 20 grades. ";
    cin >> arraySize;
    do{
        if(arraySize > 20){
            cout << "Please enter no more than 20 grades " << endl;
            cin >> arraySize;
        }
    }while(arraySize > 20 || arraySize < 0);

   int userGrades[20];


    returnGrades(userGrades, arraySize);
    //sortArray(userGrades, arraySize);//Sort the array
    
    for(int i = 0; i < userGrades[arraySize]; i++){
        cout << userGrades[i] << endl;
    }

    return 0;
}

//This part if the program the user enters the 
//number of grades and then it's stored into 
//array
void returnGrades(int* user, int size){
    for(int i = 0; i < size; i++){
        cout << "Enter Grades " << endl;
        cin >> user[i];
    }
}

// //This function sorts the user array
// void sortArray(int user[20], int size){
//     //sorted array (Accending)
//     for(int i = 0; i < size; i++)
//     {
//         for(int z=i+1;z<size;z++)
//         {
//             if(user[i]>user[z])
//             {
//                 int y = user[i];
//                 user[i] = user[z];
//                 user[z] = y;
//             }
//         }    
//     }
// }
