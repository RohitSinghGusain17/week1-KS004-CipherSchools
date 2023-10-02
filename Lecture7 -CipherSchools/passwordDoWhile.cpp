#include<iostream>
using namespace std;
int main(){
	int password;
	do{
		cout << "Enter password:";
		cin >> password;
		if(password<999999)
		cout << "The password does not meet the required condition. Please enter the password again" << endl;
		else
		cout << "The user has now entered a correct password.";
	}while (password<999999);
}
