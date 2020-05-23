#include <iostream>

void findLargest(int[], int );

int main(){
        const int arraySize = 10;
        int Mark[arraySize];
        int i = 0;
        int userInput;
        while (i < 10) {
                std::cout << "Please enter integers from 1 - 100: ";
                std::cin >> userInput;
                if (userInput > 0 && userInput <= 100) {
                        Mark[i] = userInput;
                        i++;
                }else{
                        std::cout << "invalid response.\n";
                        i = i;
                } //end if else
        }//end while

        findLargest(Mark, arraySize);

        return 0;
}

void findLargest(int arr[], int sizeOfArray){
  int temp = 0;
  int counter = 0;
  for (int i = 0; i < sizeOfArray; i++){
    if (arr[i] > temp){
      temp = arr[i];
      counter = i + 1;
    }else{
      temp = temp;
      counter = counter;
    } //end if else
  } //end for
  std::cout << "The largest number " << temp
  << " is stored at the " << counter << " location of the array.\n";

} //findLargest function
