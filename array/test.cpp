#include <iostream>

int adding(int, int);

int main(){
        int a = 100;
        int b = 1230;

        std::cout << adding(a,b) << '\n';
        return 0;
}

int adding(int x, int y){
        int c;
        c = x + y;
        return c;
}
