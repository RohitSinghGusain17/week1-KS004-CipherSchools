#include<iostream>
using namespace std;
int main(){
	int password;
	cout << "Enter the password: ";
	cin >> password;
	while(password<999999){
		cout << "The password does not meet the required condition. Please enter the password again" << endl;
		cin >> password;
	}
	cout << "The user has now entered a correct password.";
}
