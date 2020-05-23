#include <iostream>


void enterSales(int[][4]);
int totalWeeklySales(int[][4]);

int main(){
        const int row = 7;
        const int column = 4;
        int sales[row][column] = {{380,100,240,720},
                                  {300,200,300,800},
                                  {250,240,130,620},
                                  {320,150,200,670},
                                  {200,200,200,600},
                                  {400,300,290,990},};

        enterSales(sales);
        std::cout << "Total sales of the week is RM "
                  << totalWeeklySales(sales) << '\n';

        return 0;
}

void enterSales(int a[7][4]){
        std::cout << "Enter sales for Dried noodle: ";
        std::cin >> a[6][0];
        std::cout << "Enter sales for Dark noodle: ";
        std::cin >> a[6][1];
        std::cout << "Enter sales for Spicy noodle: ";
        std::cin >> a[6][2];
        a[6][3] = a[6][0]+a[6][1]+a[6][2];
}

int totalWeeklySales(int a[7][4]){
        int totalSales = 0;
        for (int i = 0; i < 7; i++) {
                totalSales += a[i][3];
        }
        return totalSales;
}
