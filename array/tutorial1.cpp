#include <iostream>

int main(){
        int i;
        int* b;
        std::cout << "Please enter an interger value: " << '\n';
        std::cin >> i;
        std::cout << "The number you entered is " << i << "\n";
        std::cout << "&i=  " <<&i << '\n';
        b = *i;
        std::cout <<"*b=  " << b << '\n';
        std::cout << "b= " << *b << '\n';
        return 0;
}
