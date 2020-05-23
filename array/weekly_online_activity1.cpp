#include <iostream>


void printQ2(std::string a[5][10]);
void printQ3a(std::string b[5][10]);
void printQ3b(std::string c[5][10]);
void printQ3c(std::string d[5][10]);

int main(){
        int counter = 0;
        int checkClass = 0;

        //Q1
        std::string timetable[5][10] ={{"X","X","X","X","X","X","X","X","X","X"},
                                      {"X","X","X","X","X","X","X","210CT","210CT","210CT"},
                                      {"220CT","220CT","260CT","260CT","X","X","X","X","X","X"},
                                      {"X","X","X","X","X","X","X","X","X","X"},
                                      {"220CT","220CT","X","X","210CT","X","X","A202SGI","A202SGI","X"}};

        printQ2(timetable);
        std::cout << '\n';
        printQ3a(timetable);
        std::cout << '\n';
        printQ3b(timetable);
        std::cout << '\n';
        printQ3c(timetable);
        std::cout << '\n';

        return 0;
}

void printQ2(std::string a[5][10]){
        for (int i = 0; i < 5; i++) {
                for (int j = 0; j < 10; j++) {
                        std::cout << a[i][j] << ' ';
                }
                std::cout << '\n';
        }
        std::cout << '\n';
}

void printQ3a(std::string b[5][10]){
  std::string rep = "X";
        for (int k = 0; k < 10; k++) {
                if (b[2][k] != "X") {
                  if (rep != b[2][k]){
                    std::cout << b[2][k] << ' ';
                    rep = b[2][k];
                  }
                }
        }
        std::cout << '\n';
}

void printQ3b(std::string c[5][10]){
        int counter = 0;
        for (int l = 0; l < 10; l++) {
                if (c[4][l] != "X") {
                        counter++;
                }
        }
        std::cout << "You have to attend "<< counter
                  << "hours of classes on Friday.\n";
}

void printQ3c(std::string d[5][10]){
        int checkClass = 0;
        for (int m = 0; m < 10; m++) {
                if (d[0][m] != "X") {
                        checkClass++;
                }
        }
        if (checkClass != 0) {
                std::cout << "You have class Monday.\n";
        } else {
                std::cout << "You don't have class Monday.\n";
        }
}
