#include <iostream>
#include <cstdlib>
#include <ctime>


int dice_rolling(int sides) {
    return (rand() % sides) + 1;
}

int main(){
    srand(time(0));

    int chara_hp = 20;
    int chara_AC = 15;;
    int gob_hp = 10;
    int gob_AC = 12;

    std::cout << "Combat begins between Hero and Goblin!\n\n";

    while (chara_hp > 0 && gob_hp > 0) {
        
        std::cout << "-- Hero's turn --\n";
        int hero_roll = dice_rolling(20);
        std::cout << "Hero rolls a " << hero_roll;
        if (hero_roll >= gob_AC) {
            int hero_damage = dice_rolling(8);
            gob_hp -= hero_damage;
            std::cout << " and hits the Goblin!\n";
            std::cout << "Hero deals " << hero_damage << " damage. ";
            std::cout << "Goblin has " << (gob_hp > 0 ? gob_hp : 0) << " HP remaining.\n\n";
        } else {
            std::cout << " and misses!\n\n";
        }

        if (gob_hp <= 0) break;

        
        std::cout << "-- Goblin's turn --\n";
        int goblin_roll = dice_rolling(20);
        std::cout << "Goblin rolls a " << goblin_roll;
        if (goblin_roll >= chara_AC) {
            int goblin_damage = dice_rolling(6);
            chara_hp -= goblin_damage;
            std::cout << " and hits!\n";
            std::cout << "Goblin deals " << goblin_damage << " damage. ";
            std::cout << "Hero has " << (chara_hp > 0 ? chara_hp : 0) << " HP remaining.\n\n";
        } else {
            std::cout << " and misses!\n\n";
        }
    }

    if (chara_hp > 0) {
        std::cout << "Goblin is defeated! Hero wins the battle!\n";
    } else {
        std::cout << "Hero has fallen! Goblin wins the battle!\n";
    }
                                                                                             



    return 0;
}
