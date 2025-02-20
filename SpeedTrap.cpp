/*

-SpeedTrap.cpp
-Harris Adam
-see if someone is speeding using conditional statements.



*/
#include <iostream>

int main(){
    //Variable declarations
    int speed_limit;
    double driver_speed;

    //Prompt for user inputs
    std::cout<<"what is the speed limit?: ";
    std::cin>>speed_limit;
    std::cout<<"how fast were you driving?: ";
    std::cin>>driver_speed;

    //If statement
    if (driver_speed <= speed_limit)
        std::cout<<"You are driving legally. Good job!"<<std::endl;
    else
        std::cout<<"You are speeding. You are getting a ticket."<<std::endl;

    //Return 0 to indicate successful execution
    return 0;
}