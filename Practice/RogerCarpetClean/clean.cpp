#include<iostream>
#include<string>
using namespace std;

/*$25 per small room
$35 per large room
sales tax is 6%
*/

int main(){
    //Flat cost to clean each room
    const int costLargeRoom = 35;
    const int costSmallRoom = 25;

    //Sales Tax
    const double salesTax = 0.06;

    //User Inputs
    int userLargeRooms = 0;
    int userSmallRooms = 0;

    //Get user inputs
    cout << "How many large rooms need to be cleaned? " << endl;
    cin >> userLargeRooms;
    cout << "How many small rooms need to be cleaned? " << endl;
    cin >> userSmallRooms;

    //Calculate total cost
    double totalCost = ((costLargeRoom*userLargeRooms) + (costSmallRoom*userSmallRooms));
    double salesTaxCalc = totalCost * salesTax;
    double grandTotal = totalCost + salesTaxCalc;

    //Display Information
    cout << endl;
    cout << "---------------------" << endl;
    cout << "Total Large Rooms: $" << userLargeRooms << endl;
    cout << "Total Small Rooms: $" << userSmallRooms << endl;
    cout << "Tax : $" << salesTaxCalc << endl;
    cout << "Grand Total: $" << grandTotal << endl;

}
