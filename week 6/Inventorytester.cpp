/*

There are two main tasks in this lab:
    - Task 1: Create the Inventory class. The Inventory
        class will manage an array of Book objects
    - Task 2: Create a simple main() method that will test the Inventory class. 
        This will be in the file InventoryTester.cpp

Task 0: Modify the Book Class
    Since you will be creating an array of empty Book objects, the Book class needs a
    zero-argument constructor (default constructor). Make sure you add the
    zero-argument constructor to the Book class before proceeding.

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

Task 2: Create the InventoryTester Program
    Create your main() method in your InventoryTester.cpp file based on the
    pseudocode given below. Remember that all your files must be in the same folder. 
    Your testing program (with the main() method) must be stored in a file named
    InventoryTester.cpp, and must be in the same folder with your Book.h file and 
    your Inventory.h file. (Also with your Def.cpp files if you have them)

    Your inventory tester program will do the following:
        1. Create an Inventory object of size 10.
        2. You will use the following data to create several Book objects. For each line,
        create a new Book object and then add it to the Inventory using addBook().
        (The first three books are the same as from the previous lab.)
        Be sure to check the return value from the addBook() method to confirm that the
        operation was successful.

        "013478796X", "Tony Gaddis", "Starting Out With Java: From Control
        Structures through Data Structures", 4, "PE", 121.75
        "0321409493", "John Lewis", "Java Software Solutions: Foundations of
        Program Design", 5, "AW", 94.00
        "0134743350", "Harvey Deitel", "Java How to Program, Early Objects", 12,
        "PE", 134.84
        "002360692X", "Richard Johnsonbaugh", "Algorithms", 1, "PH", 109.00
        "1593276036", "Eric Matthes", "Python Crash Course", 1, "NS", 39.95
        "0143067889", "Ray Kurzweil", "The Singularity is Near", 1, "PG", 17.70

        3. Use the printInventory() method to display the initial inventory report.
        4. Test the changePrice() method by attempting the following changes. (You will
        need to use the ISBN codes to specify the book.)
        a. Change the price of the Gaddis book (013478796X) to $50.00.
        b. Change the price of the Kurzweil book (0143067889) to $9.95.
        c. Change the price of the Deitel book (0134743350) to $100.00.
        5. Use the printInventory() method again to display the final inventory report.
        
        
Finishing Up:
    When you have finished, there are up to five (5) files to submit for this assignment:
        - if you chose to declare and define your classes in one header file each, 
        then you only need to submit three (3) files with the following names...
            - Book.h
            - Inventory.h
            - InventoryTester.cpp

        - if you chose to declare your classes in a header file and define them within a .cpp
        file, then you need to submit five (5) files in total with the following names...
            - Book.h
            - BookDef.cpp
            - Inventory.h
            - InventoryDef.cpp
            - InventoryTester.cpp

*/


#include <iostream>
#include "Book.h"
#include <cstdio>
#include <string>
#include "Inventory.h"

int main() {
  
    Inventory inventory(10);

    // Step 2: Create and add several Book objects to the inventory
    Book book1("013478796X", "Tony Gaddis", "Starting Out With Java: From Control Structures through Data Structures", 4, "PE", 121.75);
    Book book2("0321409493", "John Lewis", "Java Software Solutions: Foundations of Program Design", 5, "AW", 94.00);
    Book book3("0134743350", "Harvey Deitel", "Java How to Program, Early Objects", 12, "PE", 134.84);
    Book book4("002360692X", "Richard Johnsonbaugh", "Algorithms", 1, "PH", 109.00);
    Book book5("1593276036", "Eric Matthes", "Python Crash Course", 1, "NS", 39.95);
    Book book6("0143067889", "Ray Kurzweil", "The Singularity is Near", 1, "PG", 17.70);

    inventory.addBook(book1);
    inventory.addBook(book2);
    inventory.addBook(book3);
    inventory.addBook(book4);
    inventory.addBook(book5);
    inventory.addBook(book6);

 
    std::cout << "Initial Inventory:\n";
    inventory.printInventory();

   
    inventory.changePrice("013478796X", 50.00); // Change the price of the Gaddis book
    inventory.changePrice("0143067889", 9.95);  // Change the price of the Kurzweil book
    inventory.changePrice("0134743350", 100.00); // Change the price of the Deitel book

    
    std::cout << "\nFinal Inventory:\n";
    inventory.printInventory();

    return 0;
}