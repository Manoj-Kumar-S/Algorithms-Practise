#include <iostream>
using namespace std;

void merge(int array2[], int low, int mid, int high){
	int i = low, j = mid, k = low, l = 0;
    int array3[(low + high)/2];
	for (; i < mid || j < high ; l++){
		if (i < mid && j < high){
			if (array2[i] < array2[j]){
				array3[l] = array2[i];
				i++;}
			else{
				array3[l] = array2[j];
				j++;}
		}
		else if (i < mid){
			array3[l] = array2[i];
			i++;
		}
		else if (j < high){
			array3[l] = array2[j];
			j++;
		}
	}
	for (i = low, k = 0; i < high; i++, k++)
		array2[i] = array3[k];
}

void merge_sort(int array1[], int array2[], int low, int high){
	int range = (high - low);
	int mid = low + range/2;
	if (range == 1){
		array2[low] = array1[low];
		}
	else{
		merge_sort(array1, array2, low, mid);
		merge_sort(array1, array2, mid, high);
		merge(array2, low, mid, high);
	}
}
int main(){
	int n;
	cout << "How many numbers do you want to enter?" << endl;
	cin >> n;
	int numarray[n];
	int dumarray[n];
	for (int i = 0; i < n; i++){
		cin >> numarray[i];
	}
	merge_sort(numarray, dumarray, 0, n);
	for (int j = 0; j < n; j++){
		cout << dumarray[j] << endl;
	}
	return 0;
}
