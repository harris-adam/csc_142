#include <iostream>
#include <vector>
#include <string>
#include <iomanip>
#include <cstdio>
#include <ctime>

int main(){
    
    srand(static_cast<unsigned>(time(0)));

    int charisma = rand() % 21;

    std::cout<<"You encounter a goblin guarding a castle\n";
    std::cout<<charisma;

    if(charisma >= 10){
        std::cout<<"\nThe goblin lets you pass";
    }
    else{
        std::cout<<"\nThe golbin does not let you pass";
    }


}