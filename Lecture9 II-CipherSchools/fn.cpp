#include<iostream>
using namespace std;
int sum(int &a, int &b){
	int c;
	c=a+b;
	a=10;
	b=11;
	return c;
}
int main(){
	int a,b;
	cout << "Enter a and b: ";
	cin >> a >> b;
	int c;
	cout << "Value of a and b before function: ";
	cout << a << " " << b << endl; //these valuess are before I call the function
	c=sum(a,b);
	//int sum(int a, int b) // int a ---> a, int b---> b
	cout << "Value of c is :" << c << endl;
	cout << "Value of a and b after function: ";
	cout << a << " " << b << endl; //these values are after I call the function
	return 0;
}
