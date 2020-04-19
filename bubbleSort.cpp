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

	for(tempHead=begin;tempHead<end;tempHead++){
		
		for(nextoTempHead=(tempHead+1); nextoTempHead<end-1; nextoTempHead++) {
		
			if(*(nextoTempHead)>*(nextoTempHead+1)){
			
				swap(nextoTempHead,(nextoTempHead+1));

			}
		}
	
	}

}
