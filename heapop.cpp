#include <iostream>
#include <math.h>
using namespace std;

int main()
	{
		int n, k, temp, temp2, tind;
		// Inserting element into heap
		cout << "How many numbers do you want to enter? " << endl;
		cin >> n;
		int heaparray[n], newn;
		for (int i = 0; i < n; i++)
		{
			cin >> heaparray[i];
		}
		cout << "Enter number you want to enter? " << endl;
		cin >> newn;
		heaparray[n] = newn;
		k = n;
		int t;
		while (k > 0){
			if (k % 2)
				t = k/2;
			else
				t = k/2 - 1;
			if (heaparray[k] > heaparray[t])
			{
				temp = heaparray[k];
				heaparray[k] = heaparray[t];
				heaparray[t] = temp;
				k = t;
			}
			else
				break;
		}
		cout << "New heap" << endl;
		for (int i = 0; i < n + 1; i++)
			cout << heaparray[i] << endl;

		// Deleting element from leap
		int index, parent, max;
		cout << "Enter index of element you want to delete" << endl;
		cin >> index;
		heaparray[index] = heaparray[n];
		if (index % 2)
			parent = index/2;
		else
			parent = index/2 - 1;
		k = parent;
		while (2*k + 1 <= n)
		{
			if (2*k + 2 <= n){
				if (heaparray[2*k + 1] > heaparray[2*k + 2]){
					max = heaparray[2*k + 1];	
					tind = 2*k + 1;
				}
				else{
					max = heaparray[2*k + 2];
					tind = 2*k + 2;
				}
				if (heaparray[k] < max){
					temp = heaparray[k];
					heaparray[k] = heaparray[tind];
					heaparray[tind] = temp;
					k = tind;
				}
				else if (k == parent)
					k = index;
				else
					break;
			}
			else{
				if (heaparray[k] < heaparray[2*k + 1]){
					temp = heaparray[k];
					heaparray[k] = heaparray[2*k + 1];
					heaparray[2*k + 1] = temp;
					break;
				}
				else
					break;
			}
		}
		for (int i = 0; i < n; i++)
			cout << heaparray[i] << endl;
		return 0;
	}
