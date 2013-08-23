#include <iostream>
using namespace std;

int main()
{
	int n, temp;
	cout << "How many numbers do you want to enter?" << endl;
	cin >> n;
	int numarray[n];
	for (int i = 0; i < n; i++){
		cin >> numarray[i];
	}

	// Insertion Sort
	for (int i = 1; i < n; i++){
		for (int j = i; j > 0; j--){
			if (numarray[j] < numarray[j - 1]){
				temp = numarray[j - 1];
				numarray[j - 1] = numarray[j];
				numarray[j] = temp;
			}
			else
				break;
		}
	}
    cout << "Insertion Sort" << endl;
	for (int i = 0; i < n; i++){
		cout << numarray[i] << endl;
	}

	return 0;
}
