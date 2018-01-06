#include <iostream>
using namespace std;
const int ARRAY_SIZE = 10;
void bubbleSort(int** arr){
	bool end = false;
	int temp;
	for(int i = 0; i < ARRAY_SIZE - 1; i++){
		end = true;
		for(int j = ARRAY_SIZE - 1 - i; j > 0; j--)
			if(*arr[j] < *arr[j - 1]){
				end = false;
				temp = *arr[j];
				*arr[j] = *arr[j - 1];
				*arr[j - 1] = temp;
			}
		if(end) i = ARRAY_SIZE;
	}
}
int main(int argc, char **argv){
	int* arr = new arr[ARRAY_SIZE];
	bubbleSort(&arr);
	delete[] arr;
	return 0;
}