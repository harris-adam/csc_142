# include <iostream>

int main(){
   
    std::string name;
    std::cout << "\nEnter your name: ";
    std::getline(std::cin, name);
   
   
    int age = 0;
    std::cout << "Enter your age: ";
    std::cin >> age;

  
    bool repeat = true;
    while (repeat == true){
        if (age < 1 || std::cin.fail()){
            std::cin.clear();
            std::cin.ignore(123, '\n');
            std::cout << "ERROR. Value inputted was not a valid number. Enter your age: ";
            std::cin >> age;
        } else {repeat = false;};};

 
    float days = 365.25f;
    float ageInDays = age * days;

 
    std::cout << "\nHello " << name << " you are approximately: " << ageInDays << " days old.\n" << std::endl;

    return 0;
};