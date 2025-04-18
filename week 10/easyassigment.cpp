#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <cstdio>

void drinkPotion(int& health){
    health += 5;
};

void damageHero(int* health){
    *health -= 3;
};

int main(){
    int health = 10;

    std::cout<<"The players health is: "<<health;
    drinkPotion(health);
    std::cout<<"\nThe player drank a potion ad his health is now: "<<health;
    damageHero(&health);
    std::cout<<"\nThe player took damage and his health is now: "<<health;
} 