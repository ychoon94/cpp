//linear search of an arrays
#include <iostream>

int linearSearch( const int [], int, int);

int main(){
        const int arraySize = 100; //size of array size a
        int a[arraySize]; //create array a
        int searchKey; //value to locate in a

        for (int i = 0; i < arraySize; i++) { //create some data
                a[i] = 2 * i;
        }

        std::cout << "Enter integer search key: ";
        std::cin >> searchKey;

        //attempt to locate searchkey in array a
        int element = linearSearch(a, searchKey, arraySize);

        //display results
        if (element != -1) {
                std::cout << "Found value in element " << element << "\n";
        } else {
                std::cout << "value not found" << "\n";
        }
        return 0;
}

//compare key to every element of array until location is
//found or until end of array is reached; return subscript of
//element if key or -1 if key not found
int linearSearch( const int array[], int key, int sizeOfArray){
        for (int j =0; j < sizeOfArray; j++) {
                if (array[j] == key ) { //if found,
                        return j; //return location of key
                }
        }
        return -1; //key not found
} //end function linearSearch
