#include <iostream>
#include <iomanip>

const int TBL1_ROWS = 3;
const int TBL2_ROWS = 4;
const int COLS = 4;

void showArray(int array[][COLS], int rows){
  for (int x = 0; x < rows; x++){
    for (int y = 0; y < COLS; y++){
      std::cout << std::setw(4) << array[x][y] << " ";
    }
    std::cout << '\n';
  }
} //end showarray function

int main(){

  int table1[TBL1_ROWS][COLS] = {{1,2,3,4},
                                  {5,6,7,8},
                                {9,10,11,12}};

  int table2[TBL2_ROWS][COLS] = {{10, 20, 30, 40},
                                  {50,60,70,80},
                                {90,100,110,120},
                              {130,140,150,160}};
  std::cout << "the content of table1 are: \n";
  showArray(table1, TBL1_ROWS);
  std::cout << "The content of table2 are: \n";
  showArray(table2, TBL2_ROWS);

  return 0;
}
