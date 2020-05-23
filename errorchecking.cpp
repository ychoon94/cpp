#include <iostream>
#include <string>
#include <iomanip>

void oddEven(int[], int);

int main(){
        const int arraySize = 5;
        int Number[arraySize];
        int counter = 5;
        int counter1 = 0;
        std::string userInput;
        bool flag;

        //while loop for 5 times for user entry
        while (counter != 0) {
                flag = true; //set condition to true
                std::cout << "Enter "<< counter <<" more integer: ";
                std::cin >> userInput;

                //function for error checking for non-integer
                for (int i = 0; i < userInput.size(); i++) {
                        //used weird ascii symbol to make sure error checking always work on symbol
                        if ((userInput[i]>'9' || userInput[i]<'0') && userInput[i] != '~') {
                                std::cout << "Please enter INTEGER only! \n";
                                counter++;
                                flag = false; //if not integer, set flag to false
                                break;         //break inner for loop if error
                        }
                }         //end inner for loop
                //use flag condition to determine whether it is safe
                //or not to convert string to integer
                if (flag == true) {
                        int tempoHolder = std::stoi(userInput);
                        Number[counter1] = tempoHolder;
                        counter1++;
                }
                counter--;

        } //end outer while loop

        oddEven(Number, arraySize);

        return 0;
}

void oddEven(int a[], int sizeOfArray){
  int counterOdd = 0;
  int counterEven = 0;
  for (int k = 0; k < sizeOfArray; k++){
    if ((a[k] % 2) != 0){
      counterOdd++;
    }else{
      counterEven++;
    } //end if else
  } //end for loop

  std::cout << "There is " << counterOdd << " of odd number in the array.\n";
  std::cout << "There is " << counterEven << " of even number in the array.\n";
}
