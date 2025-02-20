/*
    Roman.cpp
    Describes the roman numeral of the number that is entered.
   Harris A
*/

#include <iostream>

int main() {
    int num;
    do
    {
        std::cout << "Enter a number between 1 and 10: ";
        std::cin >> num;
        if (num == 1) 
            printf("%d / I, The first roman numeral.\n", num);
        
        else if (num == 2)
            printf("%d / II, The second roman numeral.\n", num);
        
        else if (num == 3)
            printf("%d / III, The third roman numeral.\n", num);
        
        else if (num == 4)
            printf("%d / IV, The fourth roman numeral.\n", num);
        
        else if (num == 5)
            printf("%d / V, The fifth roman numeral.\n", num);

        else if (num == 6)
            printf("%d / VI, The sixth roman numeral.\n", num);
        
        else if (num == 7)
            printf("%d / VII, The seventh roman numeral.\n", num);
        
        else if (num == 8)
            printf("%d / VIII, The eighth roman numeral.\n", num);
        
        else if (num == 9)
            printf("%d / IX, The nineth roman numeral.\n", num);
        
        else if (num == 10)
            printf("%d / X, The tenth roman numeral.\n", num);
        
        else 
            std::cout << "This number is over/under the requested amount. Try again." << std::endl;
        

    } while (num);

    return 0;
    
}