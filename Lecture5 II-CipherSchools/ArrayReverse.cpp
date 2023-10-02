#include<iostream>
using namespace std;
int main(){
	int n;
	cout << "Enter size of array: ";
	cin >> n;
	int arr[n]; //Create array of size n with same datatype(int).
	for(int i=0;i<n;i++){
		cin >> arr[i]; //taking input in array.
	}
	cout << "Reversed array is : ";
	for(int i=n-1;i>=0;i--){
		cout << arr[i] << " ";
	} 
}
