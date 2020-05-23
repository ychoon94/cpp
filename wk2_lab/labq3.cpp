#include <iostream>
#include <iomanip>

int main(){
        const int arraySize = 10;
        double cost_price[arraySize];
        double price_with_tax[arraySize];
        double userInput;
        int counter = 10;
        int counter1 = 0;

        while (counter != 0) {
                std::cout << "Enter " << counter
                          << " more price unit (between 0.01 to 1000.00) to be stored: ";
                std::cin >> userInput;

                if (userInput > 0 && userInput <= 1000) {
                        cost_price[counter1] = userInput;
                        counter1++;
                }else{
                        std::cout << "Please enter a valid input.\n";
                        counter++;
                }
                counter--;
        }

        for (int i = 0; i < arraySize; i++) {
                price_with_tax[i] = cost_price[i] * 1.06;
        }

        for (int j = 0; j < arraySize; j++) {
                std::cout << std::setprecision(2) << std::fixed;
                std::cout << " Unit " << std::setw(3)<< std::left << j+1 << std::setw(10) << std::left << ": "
                          << std::setw(12) << std::left << "cost price: "<< std::setw(15)
                          << std::left << cost_price[j] << std::setw(15) << std::left
                          << "price with tax: " << std::setw(7)
                          << std::left << price_with_tax[j] << '\n';
        }


        return 0;
}
