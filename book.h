#pragma once
#include <string>
#include <iostream>

class Book {

    private:
        std::string author, title, pubCode, codeNum;
        int edition;
        double price;
    
    public:
        Book(){}
        Book(std::string cn, std::string au, std::string ti, int ed, std::string pc, double pr) {
            codeNum = cn;
            author = au;
            title = ti;
            edition = ed;
            pubCode = pc;
            price = pr;
        }

        inline std::string getCodenum(){return codeNum;}
        inline std::string getAuthor(){return author;}
        inline std::string getTitle(){return title;}
        inline int getEdition(){return edition;}
        inline std::string getPubCode(){return pubCode;}
        inline double getPrice(){return price;}
        
        void changePrice(double newPrice) {
            price = newPrice;
        }

        void print() const {
            std::cout << std::left << std::setw(12) << codeNum
                      << std::left << std::setw(16) << author
                      << std::left << std::setw(43) << title 
                      << std::right << std::setw(3) << edition
                      << std::right << std::setw(5) << pubCode
                      << std::right << std::setw(8) << price
                      << std::endl;
        }
       


};