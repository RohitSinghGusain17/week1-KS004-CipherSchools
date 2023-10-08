#include<iostream>
using namespace std;
void PrintHi(){ //No parameter are required.
	cout << "HI" << endl;
}
//void swap(int a,int b){
//	int c;
//	c=a;
//	a=b;
//	b=c;
//	cout << "The value of a and b after swapping are " << a << b << endl;
//}
void swap(int &a,int &b){
	int c;
	c=a;
	a=b;
	b=c;
	cout << "The value of a and b after swapping are " << a  << " "<< b << endl;
}
int main(){
	int a,b;
	a=4;
	b=6;
	PrintHi();
	cout << "The value of a and b before swapping are " << a  << " " << b << endl;
	swap(a,b);
}
