#include<iostream>
using namespace std;

int main()
{
	int number, i, j, side;
     
    cout << "\nPlease Enter Any Side of a Square = ";
    cin >> side;
    
	cout << "\nPlease Enter Any Integer Value to Print as a Square = ";
    cin >> number;
	 
    for(i = 0; i < side; i++)
    {
    	for(j = 0; j < side; j++)
		{
           	cout << number;
        }
        cout << "\n";
    }
		
 	return 0;
}
