#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

int main(){
        const int responseSize = 40; //size of array response
        const int frequencySize = 11; //size of array frequency

        int responses[responseSize];

        srand(time(0));

        for (int i = 0; i < responseSize; i++) {
                responses[i] = rand() % 10 + 1;
        }
        int frequency[frequencySize] = {0};


        // for each answer, select value of an element of array
        // responses and use that value as subscript in array
        // frequency to determine element to increment
        for (int answer = 0; answer < responseSize; answer++) {
                ++frequency[ responses[answer]];
        }

        std::cout << "Rating" << std::setw(17) << "Frequency" << '\n';

        for (int rating = 1; rating < frequencySize; rating++) {
                std::cout << std::setw(6) << rating
                          << std::setw(17) << frequency[rating] << '\n';
        }
        return 0;
}
