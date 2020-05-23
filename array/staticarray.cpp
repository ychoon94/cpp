#include <iostream>

void staticArrayInit(void);
void automaticArrayInit(void);

int main(){
        std::cout << "First call to each function: \n";
        staticArrayInit();
        automaticArrayInit();

        std::cout << "\n\nSecond call to each function: \n";
        staticArrayInit();
        automaticArrayInit();
        std::cout << "\n";

        return 0;
}

//function to demonstrate a static local array
void staticArrayInit(void){
        static int array1[3];

        std::cout << "\nValues on entering staticArrayInit: \n";

        //output content of array1
        for (int i = 0; i < 3; i++) {
                std::cout << "array1[ " << i << " ] = " << array1 [i] << "   ";
        }
        std::cout << "\nValues on exiting staticArrayInit: \n";

        //modify and output contents of array1
        for (int j = 0; j < 3; j++) {
                std::cout << "array1[ " << j << " ] = "
                          << ( array1[ j ] += 5 ) << "   ";
        }
}

//function to demonstrate an automatic local array
void automaticArrayInit(void){
        //initializes elements each time function is called
        int array2[3] = {1,2,3};

        std::cout << "\n\nValues on entering automaticArrayInit: \n";

        //output contents of array2
        for (int i = 0; i < 3; i++) {
                std::cout << "array2[" << i << " ] = " << array2[i] << "   ";
        }

        std::cout << "\nValues on exiting automaticArrayInit: \n";

        //modify and output contents of array2
        for (int j = 0; j < 3; j++) {
                std::cout << "array2[ " << j << "] = "
                          << ( array2[ j ] += 5) << "   ";
        }
}
