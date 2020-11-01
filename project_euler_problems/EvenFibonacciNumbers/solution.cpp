#include <iostream>
// even fibonacci numbers from Project Euler

int main()
{
    int firstTerm {1};
    int secondTerm {2};
    int tempTerm {0};

    long sum {0};

    while (secondTerm <= 4000000){
        
        // only count even fibonacci numbers toward our sum
        if (secondTerm % 2 == 0)
            sum += secondTerm;
        
        // for the next loop, firstTerm is equal to the previous second
        // and second is equal to the sum of the current two terms
        tempTerm = secondTerm;
        secondTerm += firstTerm;
        firstTerm = tempTerm;
    }

    std::cout << "Sum of even fibonacci numbers <= 4 million: " << sum << std::endl;

    return 0;
}

