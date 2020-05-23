#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>

int main(){
        const int arraySize = 7;
        int frequency[arraySize] = {0};

        //seed to random
        srand(time(0));

        for (int roll = 1; roll <= 6000; roll++) {
                ++frequency[rand() % 6 + 1];
        }

        std::cout << "Face" << std::setw(13) << "Frequency" << std::endl;

        //output frequency elements 1-6 in tabular format
        for (int face = 1; face < arraySize; face++) {
                std::cout << std::setw(4) << face
                          << std::setw(13) << frequency[face] << std::endl;
        }

        return 0;
}
