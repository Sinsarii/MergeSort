#include <iostream>
#include <array>
#include <vector>

//Merge Sort
//1. Divide array into equal halves until there are is only 1 number (this is return clause)
//2. As it is returning sort the numbers and then merge them

using std::vector;



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
vector<int> mergeArray(vector<int> arrayLeft, vector<int> arrayRight)
{
	//if the value in the left array is less than the value in the right, append it to the vector and use the next left value
	//if the value in the right array is less than the value in the left array, append the value to the vector and continue down the right array
	//CHECKS
	//need to check if there are any remaining numbers in either array to offload into merge
	//NEED TO FIX
	//drop numbers that have been added to vector
	/*
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
	*/
	//test faster merge loop

	vector<int> mergedVector;

	int left_index = 0;
	int right_index = 0;

	for (int i = 0; i < arrayLeft.size() + arrayRight.size(); i++)
	{
		//compare left with right

		if ((right_index==arrayRight.size()) || (arrayLeft[left_index] < arrayRight[right_index]))
		{
			mergedVector.push_back(arrayLeft[left_index]);
			left_index++;
		}
		else
		{
			mergedVector.push_back(arrayRight[right_index]);
			right_index++;
		}
	}

	return mergedVector;
}
//function that takes array and loops continually while diving array until theres is only 1 number left
vector<int> divideArray(vector<int> unsortedArray)
{
	vector<int> arrayLeft, arrayRight;

	while (unsortedArray.size() % 2)
	{

		for (int i = 0; i < unsortedArray.size(); i++)
		{
			arrayLeft.push_back(unsortedArray[i]);
			arrayRight.push_back(unsortedArray[i + (unsortedArray.size() / 2)]);
		}
		return divideArray(arrayLeft);
	}
	return unsortedArray;
}

vector<int> seperateArray(vector<int> unsortedArray)
{
	vector<int> arrayLeft, arrayRight;

	//if the unsorted array is not a single number, continue to divide array
	if (unsortedArray.size() != 1)
	{
		//when dividing the array, if the array is an odd number add the remainder at the end making the left side larger. otherwise divide equally.
		for (int i = 0; i < unsortedArray.size() / 2; i++)
		{
			arrayLeft.push_back(unsortedArray[i]);
			//start the right array at the midpoint plus modulus if there is one so ti is smaller.
			arrayRight.push_back(unsortedArray[i + (unsortedArray.size() / 2) + (unsortedArray.size()%2)]);
		}
		if (unsortedArray.size() % 2)
		{
			arrayLeft.push_back(unsortedArray[unsortedArray.size()/2]);
		}
	}
	return mergeArray(seperateArray(arrayLeft), seperateArray(arrayRight)); //NEED TO FIX

}

void main()
{

	vector<int> unsortedArray = { 1,8,3,2,6,4 };
	vector<int> mergedArray;
	vector<int> arrayLeft = { 1, 3, 8 };
	vector<int> arrayRight = { 2, 4, 6 };
	mergedArray = seperateArray(unsortedArray);
	mergeArray(arrayLeft, arrayRight);
}

/*pseudocode
-while an array is not a single number, continue to divide the array
divideArray()
{
while array.size()!=1
divide array
else
return a merged array
}
when the array is has become a single entity, merge it into the correct numeric order
*/
