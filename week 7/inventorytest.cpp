#include <iostream>
#include "inventory.h"
#include "book.h"

int main() {
    Inventory inventory(10);  


    Book books[] = {
        Book("0134444329", "Tony Gaddis", "Starting Out With Python", 4, "PE", 99.95),
        Book("0133582736", "Tony Gaddis", "Starting Out With Python", 3, "PE", 19.95),
        Book("013478796X", "Tony Gaddis", "Starting Out With Java", 4, "PE", 145.38),
        Book("1119056553", "Cay Horstmann", "Python for Everyone", 2, "WI", 98.38),
        Book("0134802217", "Tony Gaddis", "Starting Out With Java", 7, "PE", 188.95),
        Book("0134462017", "Tony Gaddis", "Starting Out With Java", 6, "PE", 58.50)
    };


    for (const Book& book : books) {
        if (inventory.addBook(book)) {
            std::cout << "Added: " << book.getTitle() << " (ISBN: " << book.getISBN() << ").\n";
        } else {
            std::cout << "ERROR: Could not add book with ISBN " << book.getISBN() << ".\n";
        }
    }

    std::cout << "\n--- Initial Inventory ---\n";
    inventory.printInventory();


    inventory.changePrice("013478796X", 50.00); 
    inventory.changePrice("0143067889", 9.95);  
    inventory.changePrice("0134743350", 100.00); 

    std::cout << "\n--- Updated Inventory ---\n";
    inventory.printInventory();

    return 0;
}