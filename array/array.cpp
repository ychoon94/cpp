#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <ctime>

int main(){
        int n[6][9];

        srand(time(0));

        for (int i = 0; i < 6; i++){
            for (int j = 0; j < 9; j++){
                n[i][j] = rand() % 100+1;
            }
          }
        std::cout << "Element" << std::setw(13) << "Value" << '\n';

        for (int j = 0; j < 10; j++){
          std::cout << std::setw(7) << j << std::setw(7) << n[j] << '\n';
        }

        return 0;
}
