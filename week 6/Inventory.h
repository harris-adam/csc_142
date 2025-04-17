/*
Task 1: Create the Inventory Class
    For our bookstore project we will need to manage a collection of Book objects. We will
    make this possible by creating a new class called Inventory to hold an array of Book
    objects. Remember that your class must be declared and defined in a file named Inventory.h 
    or instead declared in Inventory.h and defined in InventoryDef.cpp. These files will be in one folder
    along with a copy of the Book.h file and the InventoryTester.cpp file that you will create.
    
    Class Diagram:
        * Anything marked with " — " is private *
        * Anything marked with " + " is public *
        * When you see a colon " : ", anything to the left of the colon is a name
            and anything to the right of the colon is the data type of said name *

        Inventory:
            — books : Book*     <- (This a pointer)
            — nextEntry : int
            — length : int

            + Inventory( size : int ) <- Constructor
            + ~Inventory( )           <- Destructor

            + addBook( theBook : Book ) : boolean
            + changePrice(isbn : string, newPrice : double ) : void
            + printInventory( ) : void

            Fields:
                – books : Book*
                    The main field in the Inventory class is a pointer to an array of Book objects. 
                    The size of the array will be determined by the constructor.
                – nextEntry : int
                    This field is the index number (in the books array) where the next Book object will
                    be added to the array. Initially this is 0, because the first book added will be added
                    to the empty array at position 0. This value is incremented with each use of the
                    addBook() method.
                — length : int
                    This field is needed to keep track of the size of the array because a standard C array
                    does not have any methods to retrieve the size

            Constructor:
                The constructor takes one argument, which is the size of the books array. The
                constructor dynamically creates an empty array of the specified size, initializes the
                nextEntry field to be 0, and assigns the value of the argument given to the length field.

            Destructor:
                The destructor will delete your dynamically allocated Book array

        Methods:
            + addBook( theBook : Book ) : boolean
                Input: This method takes one argument: a Book object.
                Return: The Book object is added to the books array at the position specified by the
                nextEntry field, the nextEntry field is incremented by 1, and the method returns
                true as an indication of success. If the array is already full there is no space to add
                the new book, so the method returns false as an indication of failure.

            + changePrice( isbn : string, newPrice : double ) : void
                Input: This method takes two arguments: an ISBN code of a book, and a newPrice
                for that book.
                Note that you will need to identify the proper Book object by iterating through the
                inventory to find the matching ISBN string. Remember to use the comparison operator
                for equality "==" to check if one string matches another
                Return: There is no return value (void).

            + printInventory( ) : void
                Input: This method takes no arguments.
                Return: There is no return value (void).
                This method will print the entire inventory with appropriate headers and formatting.
                An example is shown below. You may choose to format differently, but it must be
                clear and understandable, with consistent columns of information.
                ---------------------------------------------------------------------------------------
                ISBN        AUTHOR          TITLE                                    ED  PUB      PRICE
                013478796X  Tony Gaddis     Starting Out with Java: From Control St   4   PE  $  121.75
                0321409493  John Lewis      Java Software Solutions: Foundations of   5   AW  $   94.00
                0134743350  Harvey Dietel   Java: How to Program, Early Objects      12   PE  $  134.84
                002360692X  Richard Johns   Algorithms                                1   PH  $  109.00
                1593276036  Eric Matthes    Python Crash Course                       1   NS  $   39.95
                0143067889  Ray Kurzweil    The Singularity is Near                   1   PG  $   17.70
                ---------------------------------------------------------------------------------------
*/
#pragma once
#include <string>
#include "Book.h"

class Inventory {
private:
    Book* books;
    int nextEntry;
    int length;

public:
    Inventory(int size);          
    ~Inventory();                     

    bool addBook(Book theBook);      
    void changePrice(std::string isbn, double newPrice); 
    void printInventory() const;      
};