#include <iostream>
using namespace std;

int main()
{
	int n, temp, swi = 2;
	cout << "Enter number of elements you want to enter" << endl;
	cin >> n;
	int numarray[n];
    for (int i = 0; i < n; i++){
	    cin >> numarray[i];
	}
    // Maximum number of loops will be n
	for (int i = 1; i < n; i++){
		for (int j = 0; j < n - i; j++){
			if (numarray[j] > numarray[j + 1]){
				temp = numarray[j];
				numarray[j] = numarray[j + 1];
				numarray[j + 1] = temp;
				swi = 1;
			}
		}
	    if (swi == 2)
			break;
	}
	for (int i = 0; i < n; i++){
		cout << numarray[i] << endl;

	}
	return 0;
}

