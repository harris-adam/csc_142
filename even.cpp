
/*
    Even
    This program will generate 1,000 numbers in the range of 0 to 100
    counting which ones were even, and which ones are odd and displaying them.
    Harris A
    3/19/25
*/

#include <iostream>
#include <ctime>

bool isEven(int even){
    if (even % 2 == 0)
    {
        std::cout << even << " is an even number!" << std::endl;
        return true;
    }
    else {
        std::cout << even << std::endl;
        return false;
    }
    
}

int main(){

    srand(time(0));

    int counter;
    int number;
    int oddnum = 0;
    int evennum = 0;
    for (counter = 0; counter < 1000; counter++)
    {
        number = rand() % 101;
        if (isEven(number) == 0)
        {
            evennum++;
        }
        else 
        {
            oddnum++;
        }
        
    }
    std::cout << "\nOut of " << counter << " numbers, there has been:" << std::endl;
    std::cout << oddnum << " odd numbers."<< std::endl;
    std::cout << "and " << evennum << " even numbers."<< std::endl;
    return 0;
}