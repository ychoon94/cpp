#include <iostream>
#include <iomanip>

void modifyArray( int[], int );
void modifyElement( int );

int main(){
        const int arraySize = 5;
        int a[arraySize] = {0,1,2,3,4};

        std::cout << "Effects of passing entire array by reference: "
                  << "\n\nThe values of the original array are: \n";

        //output original array
        for (int i = 0; i < arraySize; i++) {
                std::cout << std::setw(3) << a[i];
        }
        std::cout << "\n";

        //pass array a to modifyArray
        modifyArray(a, arraySize);

        std::cout << "The values of the modified array are:\n";

        //output modified array
        for (int j = 0; j < arraySize; j++) {
                std::cout << std::setw(3) << a[j];
        }

        //output value of a[3]
        std::cout << "\n\n\n"
                  << "Effects of passing array element by value: "
                  << "\n\nThe value of a[3] is " << a[3] << "\n";

        modifyElement(a[3]);

        //output value of a[3]
        std::cout << "The value of a[3] is " << a[3] << '\n';

        return 0;
}

//in function modifyarray, "b" points to
// the original array "a" in memory
void modifyArray(int b[], int sizeOfArray){
        //multiply each array element by 2
        for (int k =0; k < sizeOfArray; k++) {
                b[k] *= 2;
        }
}

//in function modifyElement, "e" is a local copy of
//array element a[3] passed from main
void modifyElement(int e){
        //multiply parameter by 2
        std::cout << "Value in modifyElement is "
                  << (e *= 2) << '\n';
}
