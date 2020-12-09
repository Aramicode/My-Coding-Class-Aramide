#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
	string fullname;
	string country_code;
	cout << "Please enter your fullname: ";
	cin >> fullname;
	
	cout << "Please enter your country code: ";
	cin >> country_code;
	
	transform(country_code.begin(), country_code.end(), country_code.begin(),
	::tolower);
	
	if(country_code == "ngr"){
		cout << "Welcome " << fullname <<", from Nigeria" << endl;
	}
	else if(country_code == "usa"){
		cout << "Welcome " << fullname <<", from United State" << endl;
	}
	else if(country_code == "gh"){
		cout << "Welcome " << fullname <<", from Ghana" << endl;
	}
	
	
	
	
}
