/*
line number
Harris Adam
*/

#include <iostream>
#include <fstream>

int main() {
    std::ifstream mary("maryLamb.txt");
    std::ifstream war("WarAndPeace.txt");
    std::string reader; 
    std::string choose;

    std::cout << "which would you like to inspect. m = Mary Lamb or w = War And Peace ";
    std::getline(std::cin, choose);

    if (choose == "m")
    {
        for (int i = 0; i < 23; i++)
        {
            std::getline(mary, reader);
            std::cout << i + 1 << ". " << reader << std::endl;
        
        }
    }
    else if (choose == "w")
    {
        for (int i = 0; i < 50; i++)
        {
            std::getline(war, reader);
            std::cout << i + 1 << ". " << reader << std::endl;
        }    

    }
    mary.close();
    war.close();
    return 0;
}