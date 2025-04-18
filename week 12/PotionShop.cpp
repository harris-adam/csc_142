#include <iostream>

int main(){

    int gold = 100;
    int cost = 10;
    int potions;

    std::cout << "Welcome Traveler! Would you like to buy some potions?" << std::endl;
    std::cout << "Each potion cost " << cost << " gold coins." << std::endl;

    std::cout << "How many potions do you want?";
    std::cin >> potions;

    int total_cost = cost * potions;

    if (total_cost <= gold){
        std::cout <<"You bought " << potions << " potions for " << total_cost << " gold coins." << std::endl;
        gold -= total_cost;
        std::cout << "You have " << gold << " gold left" << std::endl;
    }
    else {
        std::cout << "You do not have enough gold coins!" << std::endl;
        std::cout << "You only have " << gold << " coin!" << std::endl;

    }


    return 0;
}