# pragma once
# include <iostream>

class Book {
    private:
        std::string codeNum;
        std::string author;
        std::string title;
        int edition;
        std::string pubCode;
        double price;
    
    public:
        Book(std::string cn, std::string au, std::string ti, int ed, std::string pc, double pr) {
            codeNum = cn;
            author = au;
            title = ti;
            edition = ed;
            pubCode = pc;
            price = pr;
        }

        Book(){}

        std::string getTitle() {
            return title;

        }

        std::string getAuthor() {
            return author;

        }

        double getPrice() {
            return price;

        }

        int getEdition() {
            return edition;

        }

        std::string getISBN() {
            return codeNum;

        }

        std::string getPubCode() {
            return pubCode;

        }

        void changePrice(double newPrice) {
            price = newPrice;
            
        }
};