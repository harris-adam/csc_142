/* 
Tax

Harris Adam

*/

#include <iostream>
#include <iomanip>
int main() {
    const double tax = 0.06;
    bool keepGoing = true;
    std::string item;
    std::string cost;
    double num_cost;
    double sales_cost;
    double final_cost;
    std::string answer;

   do
   {
    std::cout << "name of an item being purchased: ";
    std::getline(std::cin, item);
    std::cout << "cost of thos item? (Must be in dollar decimals . $3.20): ";
    std::getline(std::cin, cost);
    num_cost = std::stod(cost);
    if (num_cost > 0)
    {
        std::cout << "\nItem you've chosen: "<< item << std::endl; 
        std::cout << "Regular cost of chosen item: $ "<< std::fixed << std::setprecision(2) << num_cost << std::endl;
        sales_cost = num_cost * tax;

        
        std::cout << "Sales tax for chosen item: $"<< std::fixed << std::setprecision(2) << sales_cost << std::endl; 
        final_cost = num_cost + sales_cost;
        std::cout << "Final cost of chosen item: $" << std::fixed << std::setprecision(2) << final_cost << std::endl;
    }
    else
    {
        std::cout << "You've entered a number which cannot be identified." << std::endl; 
    }
    
    std::cout << "Do you wish to continue buying? (y/n) "; 
    std::getline(std::cin, answer);
    if (answer == "n")
    {
        keepGoing = false;
    }
    

   } while (keepGoing == true);



   return 0;

}