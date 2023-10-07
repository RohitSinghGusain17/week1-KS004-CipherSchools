#include<iostream>
using namespace std;
string compare(int a,int b){
	if(a>b){
		return "A is greater than B";
	}
	else{
		return "B is greater than A";
	}
}
int main(){
	int a,b;
	cout << "Enter a and b: ";
	cin >> a >> b;
	cout << compare(a,b);
	return 0;
}
