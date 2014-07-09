#include <iostream>

using namespace std;

int main(){
	int arrayLength = 8; // Magic number for the array to sort.
	bool swap = true;
	int swapBit = 0;
	int bSortArray[] = {14, -8, 2, 15, 6, -5, 1, 4};
	int temp = 0;
	
	while(swap){
		swapBit = 0;
		for (int j = 0; j < arrayLength; j++){
			if(bSortArray[j] > bSortArray[j + 1]){
				temp = bSortArray[j + 1];
				bSortArray[j + 1] = bSortArray[j];
				bSortArray[j] = temp;
				swapBit = 1;
			}
		}
		if (swapBit == 0) swap = false;
	}
	cout << endl;
	for (int print = 0; print < arrayLength; print++){
			cout << bSortArray[print] << endl;
	}	
	return 0;
}