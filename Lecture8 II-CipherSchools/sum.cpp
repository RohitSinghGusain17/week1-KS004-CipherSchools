#include<iostream>
using namespace std;
int sum(int a, int b){
	int c;
	c=a+b;
	return c;
}
int main(){
	int a,b;
	cout << "Enter a and b: ";
	cin >> a >> b;
	cout << sum(a,b);
	return 0;
}
