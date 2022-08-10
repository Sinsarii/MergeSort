#include <iostream>
#include <array>
#include <vector>

//Merge Sort
//1. Divide array into equal halves until there are is only 1 number (this is return clause)
//2. As it is returning sort the numbers and then merge them

using std::vector;


//function that takes array and loops continually while diving array until theres is only 1 number left
int* divideArray(int* masterArray, int* arrayLeft, int* arrayRight)
{
	return 0;
}
//function that sorts the numbers in the array
int* sortArray(int* unsortedLeft, int * arrayRight, int arrayLength)
{
	for (int i = 0; i < arrayLength; i++)
	{
		//compare number of array left with array right (number must be more than arrayleft number and less than arrayleft number +1)
	}
	return 0;
}
//function that merges two arrays together into 1 array
void mergeArray(vector<int>& mergedVector, vector<int> arrayLeft, vector<int> arrayRight)
{
	//if the value in the left array is less than the value in the right, append it to the vector and use the next left value
	//if the value in the right array is less than the value in the left array, append the value to the vector and continue down the right array
	//CHECKS
	//need to check if there are any remaining numbers in either array to offload into merge
	for (int i = 0; i < arrayLeft.size(); i++ )
	{
		for (int j = 0; j < arrayRight.size(); j++)
		{
			if (arrayLeft[i] > arrayRight[j])
			{
				mergedVector.push_back(arrayRight[j]);
			}
			else
			{
				mergedVector.push_back(arrayLeft[i]);
				break;

			}
		}
	}
}

void main()
{
	vector<int> mergedArray;
	vector<int> arrayLeft = { 1, 3, 8 };
	vector<int> arrayRight = { 2, 4, 6 };

	mergeArray(mergedArray, arrayLeft, arrayRight);
}