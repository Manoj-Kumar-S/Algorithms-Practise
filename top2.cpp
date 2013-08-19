#include <iostream>
using namespace std;

int main(){
	int smax, number, dummy = 0, tmax, tmin, max, min;
	cout << "How many numbers do you want to enter? ";
	cin >> number;
	int numarray[number];
	for (int i = 0; i < number; i++){
		cin >> numarray[i];
	}
	if (number % 2){
		max = numarray[0];
		smax = numarray[0];
		dummy = 1;
	}
	else{
		max = numarray[0];
		smax = numarray[1];
		if (smax > max){
			max = numarray[1];
			smax = numarray[0];
		}
		dummy = 2;
  }
	for (int i = dummy; i < number; i = i + 2){
		tmax = numarray[i];
		tmin = numarray[i + 1];
		if (tmax > tmin){
			if (tmax > max){
				if (max > tmin){
					smax = max;
				}
				else{
					smax = tmin;
				}
				max = tmax;
			}
			else{
				smax = tmax;	
			}
		}
		else{
			if (tmin > max){
				if (max > tmax){
					smax = max;
				}
				else{
					smax = tmax;
				}
				max = tmin;
			}
			else{
				smax = tmin;
			}
		}
	}
	cout << max << endl;
	cout << smax << endl;
	return 0;
}
