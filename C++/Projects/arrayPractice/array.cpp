#include <iostream>
#include <string> 
using namespace std;

void showValues(int [], int);
void sortArray(int [], int);

int main(){

    const int ARRRAY_SIZE = 8;
    int numbers[ARRRAY_SIZE] = {5,1,78,3,65,72,32,24};

    //Adding array to function
    showValues(numbers, ARRRAY_SIZE);
    //sort array
    sortArray(numbers, ARRRAY_SIZE);

    cout << "We will now display the sorted array!" << endl;
    //display sorted array
    for(int i = 0; i < ARRRAY_SIZE; i++){
        cout << numbers[i] << endl;
    }



    return 0;
}


void showValues(int nums[], int size)
{
    for(int index = 0; index < size; index++)
        cout << nums[index] << " ";
    cout << endl;
}

void sortArray(int nums[], int size){
    for(int i = 0; i < size; i++)
    {
        for(int z=i+1;z<size;z++)
        {
            if(nums[i]>nums[z])
            {
                int y = nums[i];
                nums[i] = nums[z];
                nums[z] = y;
             }
       }    
    }
}