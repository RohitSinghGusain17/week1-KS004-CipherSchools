#include<iostream>
using namespace std;
int main(){
	int a;
	cout << "Enter Marks: ";
	cin >> a;
	cout <<"Your grade is: ";
	if(a>90){
		cout << "Grade A";
	}
	else if(a<=90 && a>80){
		cout << "Grade B";
	}
	else if(a<=80 && a>70){
		cout << "Grade C";
	}
	else{
		cout << "Grade D";
	}
}
