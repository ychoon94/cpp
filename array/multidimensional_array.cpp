//initialising multidimensional array
#include <iostream>

void printArray(int[][3]); //first row must empty, but columns must not

int main(){
        int array1[2][3] = {{1,2,3},
                            {4,5,6}};
        int array2[2][3] = {1,2,3,4,5};
        int array3[2][3] = {{1,2}, {4}};

        std::cout << "Values in array1 by row are:" << "\n";
        printArray( array1);

        std::cout << "Values in array2 by row are:" << "\n";
        printArray( array2);

        std::cout << "Value in array3 by row are:" << "\n";
        printArray( array3);

        return 0;
} //end main

//function to output array with two rows
void printArray(int a[][3]){
        for (int i = 0; i < 2; i++) { //for each row
                for (int j = 0; j < 3; j++) { //output column waves
                        std::cout << a[i][j] << ' ';
                }
                std::cout << '\n';
        }
} //end function printArray
