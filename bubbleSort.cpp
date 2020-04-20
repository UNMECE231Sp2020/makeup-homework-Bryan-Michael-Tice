#include <iostream>
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


	for(tempHead=begin;tempHead!=end;tempHead++){
		std::cout << "Outer loop: " << *tempHead << std::endl;
		
		//The starting condition for this for loop should be what is 
		// modified. I just gave you bad advice. I have set up the code
		// so it prints data from the outer loop and the inner loop
		// the problem is in the inner loop. The starting condition is
		// close but it should be one less than the outer loop.

		//for(nextoTempHead=begin;nextoTempHead!=end; nextoTempHead++) {
		for(nextoTempHead=tempHead;/*<- play with this*/ nextoTempHead!=end; nextoTempHead++) {
			std::cout << "\tInner loop: " << *nextoTempHead << std::endl;	
		
			/*
			//This looks good
			if(*(nextoTempHead)>*(nextoTempHead+1)){
			
				//This looks good
				swap(nextoTempHead,(nextoTempHead+1));

			}
			*/
			
		}
	
	}

}
