#include "sort.h"

void swap(int *x, int *y)
{
	int temp = *x;
	*x = *y;
	*y = temp;
}

void bubbleSort(int *begin, const int *end){


	int *tempHead;
	int *nextoTempHead;

	//Something is funky with your ending condition, I recommend
	// using the != operator for you ending condition.
	for(tempHead=begin;tempHead<(end-1);tempHead++){
		
		//The starting condition for this for loop should be the
		// same as the previous for loop
		for(nextoTempHead=(tempHead+1); nextoTempHead<end; nextoTempHead++) {
		
			//This looks good
			if(*(nextoTempHead)>*(nextoTempHead+1)){
			
				//This looks good
				swap(nextoTempHead,(nextoTempHead+1));

			}
		}
	
	}

}
