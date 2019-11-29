

/* Write a C++ function named apply_all that expects two arrays of integers and their sizes and
  dynamically allocates a new array of integers whose size is the product of the 2 array sizes
  
  The function should loop through the second array and multiplies each element across each element of array 1 and store the
  product in the newly created array.
  
  The function should return a pointer to the newly allocated array.
  
 
*/

#include <iostream>

using namespace std;

void  print(int arr[], size_t size){
	cout<<"[ ";
	for (size_t i{0}; i < size; ++i){
		cout<<arr[i]<<" ";
	}
	cout<<"]";
	cout<<endl;
}


int * apply_all(int *array1, size_t array1_size, int *array2, size_t array2_size){
	    int k = 0;
		int *new_array = new int[array1_size * array2_size];
		for(size_t i = 0; i < array2_size; ++i){
			for(size_t j = 0; j < array1_size; ++j){
				int element {0};
				element = array2[i] * array1[j];
				new_array[k] = element;
				k++;
			}
		} 
		return new_array;
	}
    
int main() {
    const size_t array1_size {5};
    const size_t array2_size {3};
	
    int array1[] {1,2,3,4,5};
    int array2[] {10,20,30};


    cout << "Array 1: " ;
    print(array1,array1_size);
    
    cout << "Array 2: " ;
    print(array2,array2_size);
	    
    int *results = apply_all(array1, array1_size, array2, array2_size);
    constexpr size_t results_size {array1_size * array2_size};

    cout << "Result: " ;

    print(results, results_size);
    
    cout << endl;

    delete [] results;
    return 0;
}