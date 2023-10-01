#include<iostream>
using namespace std;
int main(){
	int a,b;
	cout << "Enter a and b:";
	cin >> a >> b;
	cout << (a>b) << endl; //return 1 if condition is true else 0
	
	int c,d;
	cout <<"Enter c and d:";
	cin >> c >> d; 
	cout << ((a>b) && (c>d)); //return 1 if both condition are true else 0
}
