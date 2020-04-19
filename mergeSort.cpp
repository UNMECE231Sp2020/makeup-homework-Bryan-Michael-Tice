#include <vector> 
#include "sort.h"

void merge(std::vector<int> &array, int left, int mid, int right)
{
	int i, j, k;

	int LeftSize = mid - left + 1;
	int RightSize = right - mid;


	std::vector<int> LeftVector,RightVector;
	LeftVector.reserve(LeftSize);
	RightVector.reserve(RightSize);

	for (i=0; i<LeftSize;i++) {

		LeftVector.push_back(array[left+1]);
	
	}			
	for (j=0;j<RightSize;j++) {
	
		RightVector.push_back(array[mid+1+j]);
	}

	i=0,j=0,k=left;
	while ((i<left) && (j<right)) {
		
		if(LeftVector[i] <= RightVector[j]) {
		
			array[k]=LeftVector[i];
			i+=1;
		}
		else {
		
			array[k]=RightVector[j];
			j+=1;
		}

		k+=1;
	}
	while(i<LeftSize) {
	
		array[k] = LeftVector[i];
		i+=1;
		k+=1;
	}
	while(j<RightSize) {
	
		array[k]=RightVector[j];
		j+=1;
		k+=1;

	}
}

void mergeSort(std::vector<int> &array, int left, int right) 
{
	int mid;
	if(left<right)
	{
		mid = (left+right)/2;

		mergeSort(array, left, mid);
		mergeSort(array, mid+1, right);

		merge(array, left, mid, right);
	}
}
