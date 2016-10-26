//============================================================================
// Name        : 11.cpp
// Author      : Ak0s
//============================================================================

// sortAscending: Implement this function to sort the array in an ascending order.
// sortDescending: Implement this function to sort the array in a descending order.

#include <iostream>
using namespace std;

void sortAscending(int *array, int length);
void sortDescending(int *array, int length);
void printArray(int *array, int length);



int main(int argc, char** argv){
	int example[13] = {34, 56, 26, 84, 29, 3875, 43, 96, 4759, 979, 92, 56, 1987};
	sortAscending(example, 13);
	printArray(example, 13);
	sortDescending(example, 13);
	printArray(example, 13);

	return 0;
}

void sortAscending(int *array, int length) {
  for (int i = 0; i < length; i++) {
    for (int j = i + 1; j < length; j++) {
	  if (array[i] > array[j]) {
	    int temp = array[i];
	    array[i] = array[j];
	    array[j] = temp;
	  }
	}
  }
}

void sortDescending(int *array, int length) {
  for (int i = 0; i < length; i++) {
    for (int j = i + 1; j < length; j++) {
	  if (array[j] > array[i]) {
	    int temp = array[j];
	    array[j] = array[i];
	    array[i] = temp;
	  }
    }
  }
}

void printArray(int *array, int length) {
	cout << "{";
	for(int i=0; i<length; i++){
		cout << array[i];
		if(i<length-1) {
			cout << ", ";
		}
	}
	cout << "}" << endl;
}
