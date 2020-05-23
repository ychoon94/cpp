#include <iostream>

int main(){
        const int arraySize = 10;

        int a[arraySize] = {1,2,3,4,5,6,7,8,9,10};

        int total = 0;

        //sum content for array a
        for (int i = 0; i < arraySize; i++) {
                total+= a[i];
        }
        std::cout << "Total of array element values is " << total << '\n';

        return 0;
}
