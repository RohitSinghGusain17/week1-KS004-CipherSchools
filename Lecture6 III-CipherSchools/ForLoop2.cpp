#include<iostream>
using namespace std;
int main(){
	int input,i;
	i=100;
	for(i=1;i<101;i++){
		cout << "Enter input: ";
		cin>>input;
		if(input==65){//only takes place if the input is exactly 65.
			cout << "Congrats you have guessed correct number";
			break;
		}
	}
}
