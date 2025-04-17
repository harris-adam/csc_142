#include "Inventory.h"
#include <iostream>

Inventory::Inventory(int size) {
    books = new Book[size];
    nextEntry = 0;
    length = size;
}

Inventory::~Inventory() {
    delete[] books;
}

bool Inventory::addBook(Book b) {
    if (nextEntry >= length) return false;

    for (int i = 0; i < nextEntry; ++i) {
        if (books[i] == b) return false;
    }

    books[nextEntry++] = b;
    return true;
}

void Inventory::changePrice(std::string isbn, double newPrice) {
    for (int i = 0; i < nextEntry; ++i) {
        if (books[i].getISBN() == isbn) {
            books[i].setPrice(newPrice);
            return;
        }
    }
}

void Inventory::printInventory() const {
    std::cout << "-----------------------------------------------------------------------------------------\n";
    std::cout << "ISBN         AUTHOR          TITLE                                       ED  PUB     PRICE\n";
    for (int i = 0; i < nextEntry; ++i) {
        std::cout << books[i] << std::endl;
    }
    std::cout << "-----------------------------------------------------------------------------------------\n";
}
