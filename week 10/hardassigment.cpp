/*
    File name: hardassigment
    Name: Harris Adam
    Date: 04/17/2025
*/

# include <iostream>
# include <string>

class MagicItem{
    public:
       
        MagicItem(const std::string& itemName, const std::string& magicPower, int charges)
            : itemName_{itemName}, magicPower_{magicPower}, charges_{charges} {
                std::cout << itemName << " WAS CREATE WITH " << charges << " charges!\n";}
    
        void UseItem(){ 
           
            if (charges_ > 0){
                charges_ -= 1;
                std::cout << "\nYOU USED THE " << itemName_ << ". . ." << std::endl;
                std::cout << "THE ITEM " << magicPower_ << "!" << std::endl;
                std::cout << "CHARGES LEFT: " << charges_ << std::endl;}
            else {std::cout << "\nYOU TRIED TO USE THE " << itemName_ << " BUT IT HAD NO CHARGE LEFT." << std::endl;}}
    
    private:

        std::string itemName_;
        std::string magicPower_;
        int charges_;   
};


int main(){
    
    MagicItem sword("THE SWORD OF A THOUSAND CUTS", "DUPLICATES ITSELF AND FLIES TOWARDS YOUR ENEMIES", 1);
    MagicItem staff("THE STAFF OF OBJECT ORIENTATION", "ANIMATES A NEARBY OBJECT INTO A FAMILIAR TO ATTACK YOUR ENEMIES", 2);
    MagicItem ring("THE RING OF PYTHON PROTECTION", "SUMMONS A PYTHONIC FORCE FIELD TO PROTECT YOU", 3);

  
    sword.UseItem();
    sword.UseItem();

   
    staff.UseItem();
    staff.UseItem();
    staff.UseItem();
    

    ring.UseItem();
    ring.UseItem();
    ring.UseItem();
    ring.UseItem();

    return 0;
}