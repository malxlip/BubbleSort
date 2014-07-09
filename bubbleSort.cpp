#include <iostream>

using namespace std;

int main(){
	int arrayLength = 8; // Magic number for the array to sort.
	bool swap = true; // check to see if the sort needs to continue
	int swapBit = 0; // keeps from having to add another loop for a sort check
	int bSortArray[] = {14, -8, 2, 15, 6, -5, 1, 4};
	int temp = 0;
	while(swap){
		swapBit = 0; 								// check if a swap happened
		for (int j = 0; j < arrayLength; j++){
			if(bSortArray[j] > bSortArray[j + 1]){  // if not in order
				temp = bSortArray[j + 1];			// move the bigger num to the right.
				bSortArray[j + 1] = bSortArray[j];
				bSortArray[j] = temp;
				swapBit = 1;						// if swap happened, gotta go again.
			}
		}
		if (swapBit == 0) swap = false; // no swap happens, end While Loop
	}
	cout << endl;
	for (int print = 0; print < arrayLength; print++){
			cout << bSortArray[print] << endl;
	}	
	return 0;
}