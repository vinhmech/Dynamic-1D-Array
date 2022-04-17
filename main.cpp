#include <iostream>
using namespace std;

int main() {
	cout << "\n========== Dynamic 1D Array ========== ";
	// ask for input
	int n;
	cout << "\nEnter number of elements for the array: ";
	cin >> n;

	// only pointer can manage user defined array length
	int* arr = new int[n];
	for (int i = 0; i < n; i++) {
		cout << "Enter arr[" << i << "] : ";
		cin >> arr[i];
	}

	// display the array
	cout << "\nThe array user entered is: ";
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
	
	system("pause");
	return 0;
}