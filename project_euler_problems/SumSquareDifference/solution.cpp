#include <iostream>
// sum square difference from Project Euler

int main(){
    int biggestNum {100};
    int sumOfSquares {0};
    int squareOfSums {0};
    int sum {0};

    // find 1^2 + 2^2 + ... + biggestNum^2
    for (int i=1; i<=biggestNum; i++){
        sumOfSquares += (i * i);
    }

    std::cout << "The sum of all squares is " << sumOfSquares << std::endl;

    // first we add together all numbers 1 to biggestNum...
    for (int i=1; i<=biggestNum; i++){
        sum += i;
    }

    std::cout << "Total sum is " << sum << std::endl;

    // then we square that sum
    squareOfSums = sum * sum;

    std::cout << "The square of all sums is " << squareOfSums << std::endl;


    std::cout << "The difference is " << squareOfSums << " - " << sumOfSquares;
    std::cout << " = " << squareOfSums - sumOfSquares << std::endl;

}

