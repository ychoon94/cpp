//this program intriduces the topic of survey data analysis.
//it computes the mean, median, and mode of the data.
#include <iostream>
#include <iomanip>
#include <ctime>
#include <cstdlib>

void mean (const int [], int );
void median ( int[], int );
void mode( int [], int [], int );
void bubbleSort( int[], int );
void printArray( const int[], int );

int main(){
        const int responseSize = 99;

        int frequency [10] = {0}; //initializes array frequency
        int response[responseSize]; //initializes array

        srand(time(0));

        for (int i = 0; i < responseSize; i++) {
                response[i] = rand() % 10;
        }
        //initializes array response
//        int response [responseSize] =
//     {6, 7, 8, 9, 8, 7, 8, 9, 8, 9,
//     7, 8, 9, 5, 9, 8, 7, 8, 7, 8,
//     6, 7, 8, 9, 3, 9, 8, 7, 8, 7,
//       7, 8, 9, 8, 9, 8, 9, 7, 8, 9,
//         6, 7, 8, 7, 8, 7, 9, 8, 9, 2,
//         7, 8, 9, 8, 9, 8, 9, 7, 5, 3,
//         5, 6, 7, 2, 5, 3, 9, 4, 6, 4,
//         7, 8, 9, 6, 8, 7, 8, 9, 7, 8,
//         7, 4, 4, 2, 5, 3, 8, 7, 5, 6,
//         4, 5, 6, 1, 6, 5, 7, 8, 7};

        //process responses
        mean(response, responseSize);
        median( response, responseSize);
        mode(frequency, response, responseSize);

        return 0;
}

//calculate average of all response nValues
void mean( const int answer[], int arraySize){
        int total = 0;

        std::cout << "****************\n Mean\n******************\n";

        //total response nValues
        for (int i = 0; i < arraySize; i++) {
                total += answer [i];
        }

        std::cout << std::fixed << std::setprecision(4);

        std::cout << "The mean is the average value of the data\n"
                  << "items. The mean is equal to the total of\n"
                  << "all the data items divided by the number\n"
                  << "of data items (" << arraySize
                  << "). The mean value for\nthis run is: "
                  << total << " / " << arraySize << " = "
                  << static_cast< double >( total ) / arraySize
                  << "\n\n";
}

//sort array and determine median element's values
void median( int answer[], int size){
        std::cout << "\n***************\n Median\n******************\n"
                  << "The unsorted array of responses is";

        printArray(answer, size); //output unsorted array

        bubbleSort(answer, size); //sort array

        std::cout << "\n\nThe sorted array is";
        printArray(answer, size); //output sorted array

        //display median elements
        std::cout << "\n\nThe median is element " << size / 2
                  << " of\nthe sorted " << size
                  << " element array.\nFor this run the median is "
                  << answer[ size / 2 ] << "\n\n";
}

//determine most frequent responses
void mode (int freq[], int answer[], int size)
{
        int largest = 0; //represent largest frequency
        int modeValue = 0; //represents most frequent response

        std::cout << "\n***********\n Mode\n***************\n";

        //initializes frequencies to 0
        for (int i = 1; i <= 9; i++) {
                freq[i] = 0;
        }

        //summarize frequencies
        for (int j = 0; j < size; j++) {
                ++freq[answer[j]];
        }

        //output headers for result columns
        std::cout << "Response" << std::setw( 11 ) << "Frequency"
                  << std::setw( 19 ) << "Histogram\n\n" << std::setw( 55 )
                  << "1    1    2    2\n" << std::setw( 56 )
                  << "5    0    5    0    5\n\n";

        //output results
        for (int rating = 1; rating <=9; rating++) {
                std::cout << std::setw(8) << rating << std::setw(11)
                          << freq[rating] << "        ";

                if (freq[rating] > largest) {
                        largest = freq[rating];
                        modeValue = rating;
                } //end if

                //output histogram bar representing frequency value
                for (int k = 1; k <= freq[rating]; k++) {
                        std::cout << '*';
                }

                std::cout << '\n';
        }

        std::cout << "The mode is the most frequent value.\n"
                  << "For this run the mode is " << modeValue
                  << " which occurred " << largest << " times." << "\n";
}

//function that sorts an array with bubble sort algorithm
void bubbleSort(int a[], int size){
        int hold; //temporary location used to swap elements

        //loop to control number of passes
        for (int pass = 1; pass < size; pass++) {
                //loop to control number of comparisons per pass
                for (int j = 0; j < size - 1; j++) {
                        //swap elements if out of order
                        if (a[j] > a[j+1]) { //change the '<' or '>' sign to
                                //change ascending or descending order
                                hold = a[j];
                                a[j] = a[j+1];
                                a[j+1] = hold;
                        } //end if
                }
        }
}

void printArray( const int a[], int size){
        for (int i =0; i < size; i++) {
                if (i % 20 == 0) { //begin new line every 20 values
                        std::cout << "\n";
                }
                std::cout << std::setw(2) << a[i];
        }
}
