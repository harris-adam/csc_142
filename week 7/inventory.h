# pragma once
# include <iostream>
# include "Book.h"

class Inventory{
    private:
        Book* books;
        int nextEntry = 0;
        int length = 0;
    
    public:
        Inventory(int size){
            books = new Book[size];
            nextEntry = 0;
            length = size;
        };

        ~Inventory() {
            delete[] books;
        };

        bool addBook (Book theBook) {
            if (nextEntry >= length) {
                return false;
            }
            for (int k = 0; k < nextEntry; k++) {
                if (books[k].getISBN() == theBook.getISBN()) {  
                    return false; 
                }
            }

            books[nextEntry] = theBook;
            nextEntry ++;
            return true;
        
    }

        void changePrice(std::string isbn, double newPrice){
            for (int i = 0; i < nextEntry; i++){
                if (books[i].getISBN() == isbn) {
                    books[i].changePrice(newPrice);
                    return;
                }
            }
        };

        void printInventory(){
            std::cout << "-----------------------------------------------------------------------------------------" << std::endl;
            std::cout << "ISBN          AUTHOR           TITLE                                       ED  PUB   PRICE" << std::endl;
            for (int j = 0; j < nextEntry; j++) {
                std::cout << books[j];
            }
            std::cout << "-----------------------------------------------------------------------------------------" << std::endl;
        };


};