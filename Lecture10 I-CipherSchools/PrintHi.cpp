#include<iostream>
using namespace std;
void PrintHi(){ //No parameter are required.
	cout << "HI" << endl;
}
int sum(int a,int b){
	int c;
	c=a+b;
	return c;
}
int main(){
	PrintHi();
	int a,b;
	a=4;
	b=6;
	int d=sum(a,b);
	cout << "The sum is equal to " << d << endl;
	return 0;
}
