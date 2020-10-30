Aaaaa4//1. Find out the meaning of these things below
#include <iostream>
#include <string>

using namespace std;

int main()
{
	// Declare and initialize
	int age = 0;
	double length = 0.0;
	char option = ' ';
	
	// Alphanumeric
	string username;
	string welcome = "Welcome ";
	string msg =  "Enter Your Username: ";
	double area = 0.0;
	double perimeter = 0.0;
	
	// 2. Research about OOP in computer science and variable naming styles, data
	// types
	
	// under_score
	//int num_students_nigeria;
	// camelCase
	//int numStudentsNigera;
	
	/* Think of ways you can implement error check on this program
	 Think of a user entering characters  "char" or "int" instead of the requ-
	 ired double datatype.
	 Error check for all user inputs
	*/ 
	
	// Ask for username; 
	cout << msg; 
	// Store the username
	cin >> username;
	
	// Display a personalized welcome message
	cout << welcome << username << endl; 
	 
	// Ask for user age
	cout << "Please Enter Your Age: " ;
	cin >> age;
	
	// Ask user for length of the square
	cout << "Please enter the length of the square: ";
	cin >> length;
	
	// Prompt Menu
	cout << "Enter A to calculate Area" << endl;
	cout << "Enter P to calcuate Perimeter" << endl;
	cin >> option;
	
	// Calculate the area and perimeter of the square
	area = length * length;
	perimeter = length  * 4;
	
	//Assignment operator ( = )
	// Comparison operator ( == )
	// Serving the orders
	if(option == 'A')
	{
		//Display Area
		cout << "The area of the square is " << area << endl;
	}
	else if(option == 'P')
	{
		// Display Perimeter
		cout << "The perimeter of the square is " << perimeter << endl;
	}
	else
	{
		cout << "Invalid Option! Good bye! ";
		// What does return -1 do????
		return -1;
	}
	
	//Homework
	// Read More about if statements
	// Implement options for A and P
	// Create Square3.cpp and do the homework there
	// Create a project on github with the name My-Coding-Class-Aramide
	return 0;
}
