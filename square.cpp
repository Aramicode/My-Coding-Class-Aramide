#include <iostream>
using namespace std;

int main ()
{
	//Declare and initialize
	// int length = 0;
	double length = 0.0;
	string username;
	double area = 0.0;
	// Pseudocode
	// Ask for username
	cout << "Enter your username: "; 

	// Store username
	cin >> username; 
	// Display a  personalized welcome message
	cout << "Welcome " << username << endl;
	
	// Ask user for length of the square
	cout << "Please enter the length of the square:";
	cin >> length;
	// Error Check
	// Calculate the area of the square
	area = length * length;
	// Display the result
	cout << "The area of the square is " << area << endl;
	return 0;
}

