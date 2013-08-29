#include <iostream>
#include <math.h>
using namespace std;

int main()
	{
		int n, k, temp, temp2, tind;
		cout << "How many numbers do you want to enter" << endl;
		cin >> n;
		int numarray[n];
		for (int i = 0; i < n; i++)
		{
			cin >> numarray[i];
		}
		// Building a heap
		for (int j = n - 1; j >= 0; j--)
		{
			k = j;
			while (2*k + 1 <= n - 1){
				if (2*k + 2 <= n - 1){
					if (numarray[2*k + 1] > numarray[2*k + 2]){
						temp = numarray[2*k + 1];
						tind = 2*k + 1;
					}
					else{
						temp = numarray[2*k + 2];
						tind = 2*k + 2;
					}
					if (temp > numarray[k]){
						temp2 = numarray[k];
						numarray[k] = numarray[tind];
						numarray[tind] = temp2;
						k = tind;
					}
					else
						break;
				}
				else{
					if (numarray[2*k + 1] > numarray[k]){
						temp = numarray[k];
						numarray[k] = numarray[2*k + 1];
						numarray[2*k + 1] = temp;
						k = 2*k + 1;}
					else
						break;
				}
			}
		}
		for (int i = 0; i < n; i++)
		{
			cout << numarray[i] << endl;
		}
		return 0;
	}
