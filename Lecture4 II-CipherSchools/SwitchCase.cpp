#include<iostream>
using namespace std;
int main(){
	int n;
	cout << "Enter a number from 1 to 5 : ";
	cin >> n;
	switch(n){
		case 1:
			cout << "Entered number is 1.";
			break;
		case 2:
			cout << "Entered number is 2.";
			break;
		case 3:
			cout << "Entered number is 3.";
			break;
		case 4:
			cout << "Entered number is 4.";
			break;
		case 5:
			cout << "Entered number is 5.";
			break;
		default:
			cout << "Entered number is other than 1 to 5.";
			break;
	}
}
