#include <iostream>
using namespace std;

int main(){
	int number, tmax, tmin, max, min, dummy;
	cout << "How many numbers do you want to enter ";
	cin >> number;
	int numarray[number];
	for (int i = 0; i < number; i++){
		cin >> numarray[i];
	}
	if (number % 2){
		max = numarray[0];
		min = numarray[0];
    dummy = 1; 
	}
	else{
		max = numarray[0];
		min = numarray[1];
		if (min > max){
			max = numarray[1];
			min = numarray[0];
		}
		dummy = 2;
	}
	for (int i = dummy; i < number; i = i + 2){
		tmax = numarray[i];
		tmin = numarray[i + 1];
		if (tmin > tmax){
			if (tmin > max){
				max = tmin;
			}
			if (tmax < min){
				min = tmax;
			}
		}
		else{
			if (tmax > max){
				max = tmax;
			}
			if (tmin < min){
				min = tmin;
			}
		}
	}
	cout << max << endl;
	cout << min << endl;
	return 0;
}
