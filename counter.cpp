//TODO C-1: add a comment block describing this program as described in the coding style guide on the course website
//   You should follow the style guide as much as possible throughout the assignment.
/*********************************************************
* Summary: This code gets number inputs from the user, calculate the min, max, and average of the numbers
*
*
* Author: Joey Wong
* Created: September 12, 2023
*
********************************************************/

//TODO C-2: include any needed and *allowed* libraries
#include <iostream>
#include <iomanip>
#include <string>

int main() {

    //TODO C-3: get the total number of values to be read as inputs from the user.
    // use the prompt: "Input the total number of values:\n"

    // initalize variable to store total number values
    unsigned int counter{0};
    int total{0};
    int inputNumber{0};
    double averageValue{0};
    int maxValue{0};
    int minValue{};
    int tempVar{0};
    bool firstInput{true};

    std::cout << "Input the total number of values:\n";
    std::cin >> inputNumber;


    //TODO C-4: ask the user to input a list of numbers. Your program should only give this prompt once.
    //          you can assume the user will only pass in integers as inputs, but you should output an error message if they enter in negative numbers.
    // use the prompt: "Input the numbers to be used. Please enter one per line.\n"
    // use the error message: "Sorry, no negative numbers are allowed. Only enter positive numbers!\n"

    if (inputNumber > 0){
        // std::cout << "Greater than 0 value inputted" << std::endl;

            while (counter < inputNumber) {

                // std::cout << "Counter number: " << counter << std::endl;
                std::cin >> tempVar;
                // std::cout << "TempVar is " << tempVar << std::endl;

                ++counter;
                total += tempVar;

                if (firstInput){
                    maxValue = tempVar;
                    minValue = tempVar;
                    firstInput = false;
                }

                else if (tempVar > maxValue) {
                    maxValue = tempVar;
                    // std::cout << "The max value is " << maxValue << std::endl;
                }

                // check to see if the value is
                else if (tempVar < minValue) {
                    minValue = tempVar;
                    // std::cout << "The min value is " << minValue << std::endl;
                }

            }

        // std::cout << "Total is: " << total << std::endl;
        // calculate averageValue
        averageValue = static_cast<double>(total) / counter;

        // set the output precision to 2 decimal places
        std::cout << std::setprecision(2) << std::fixed;
        std::cout << "Min value is: " << minValue << ". Max value is: " << maxValue << ". Average is: " << averageValue << ".\n";
        // std::cout << "Max value is: " << maxValue << ".\n";
        // std::cout << "Min value is: " << minValue << ".\n";

    }

    else {
        std::cout << "Sorry, no negative numbers are allowed. Only enter positive numbers!\n" << std::endl;

    }


return 0;
    };

    //TODO C-5: Read in the numbers from the user using a counter loop. Calculate the minimum number entered, the maximum number entered, and the average of the numbers.


    //TODO C-6: Output the resulting values
    // use the format: "Min value is: <min value>. Max value is: <max value>. Average is: <average>.\n"
