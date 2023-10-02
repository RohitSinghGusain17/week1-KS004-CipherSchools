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
	cout << "Entered array is : ";
	for(int i=0;i<n;i++){
		cout << arr[i] << " ";
	} 
}
