//Binary search of an array
#include <iostream>
#include <iomanip>

int binarySearch( const int [], int, int, int, int );
void printHeader(int);
void printRow( const int[], int, int, int, int );

int main(){
        const int arraySize = 15; //size of array a
        int a[arraySize]; //create array a
        int key; //value to locate in a

        for (int i = 0; i < arraySize; i++) {
                a[i] = 2 * i;
        }

        std::cout << "Enter a number between 0 and 28: ";
        std::cin >> key;

        printHeader(arraySize);

        //search for key in array a
        int result =
                binarySearch(a, key, 0, arraySize -1, arraySize);

        //display results
        if (result != -1) {
                std::cout << '\n' << key << "found in array element "
                          << result << '\n';
        } else {
                std::cout << '\n' << key << " not found " << '\n';
        }

        return 0;
} //end main

//function to perform binary search of an arrays
int binarySearch(const int b[], int searchKey, int low,
                 int high, int size){
        int middle;

        //loop until low subscript is greater than high subscript
        while (low <= high) {
                //determine middle element of subarray being searched
                middle = (low + high) / 2;

                //display subarray used in this loop iteration
                printRow(b, low, middle, high, size);

                //if searchKey matches middle element, return middle
                if (searchKey == b[middle]) { //match
                        return middle;
                } else {
                        // if searchKey less than middle element,
                        //set new high element
                        if (searchKey < b[middle]) {
                                high = middle -1; //search low end of array
                        } else {
                                //if searchKey greater than middle element,
                                //set new low element
                                low = middle + 1; //search high end of arrays
                        }
                }
        }

        return -1;
} //emd function binarySearch

//print header for output
void printHeader(int size){
        std::cout << "\nSubscripts:\n";

        //output column headers
        for (int j = 0; j < size; j++) {
                std::cout << std::setw(3) << j << ' ';
        }

        std::cout << '\n'; //start new line of output

        //output line of - characters
        for (int k = 1; k <= 4 * size; k++) {
                std::cout << '-';
        }

        std::cout <<'\n';
} //end function printHeader


//print one row of output showing the current
//part of the array being processed
void printRow(const int b[], int low, int mid, int high, int size){
        //loop through entire arrays
        for (int m = 0; m < size; m++) {
                //display spaces if outside current subarray range
                if (m < low || m > high) {
                        std::cout << "     ";
                } else { //display middle element marked with a *
                        if (m == mid) { //mark middle value
                                std::cout << std::setw(3) << b[m] << '*';
                        } else { //display other elements in subarray
                                std::cout << std::setw(3) << b[m] << ' ';
                        }
                }
        }

        std::cout << '\n'; //start new line of output
}//end function printRow
