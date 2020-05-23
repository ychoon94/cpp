//this program sorts an arrays values into ascending order

#include <iostream>
#include <iomanip>

int main(){
        const int arraySize = 10;
        int a[ arraySize ] = {2,6,4,8,10,12,89,88,45,37};
        int hold;

        std::cout << "Data items in original orders" << '\n';

        //output original array
        for (int i = 0; i <arraySize; i++) {
                std::cout << std::setw(4) << a[i];
        }

        //bubble sorts
        //loop to control number of passes
        for (int pass = 0; pass < arraySize - 1; pass++) {
                //loop to control number of comparisons per pass
                for (int j = 0; j < arraySize - 1; j++) {

                        //compare side-by-side elements and swap them if
                        //first element is greater than second element
                        if  (a [j] > a[j+1]) {
                                hold = a[j];
                                a[j] = a[j+1];
                                a[j+1] = hold;
                        }
                }
        }

        std::cout << "\nData items in ascending order" << '\n';

        //output sorted array
        for (int k = 0; k < arraySize; k++){
          std::cout << std::setw(4) << a[k];
        }

        std::cout  << '\n';
        return 0;
}
