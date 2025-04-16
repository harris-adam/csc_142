/*

Name of File: BookTester.cpp
Name: Harris Adam
Date: 4/16/2025

Your task 1:
    Implement the Book class defined by the diagram given below. Remember that
    your class must be declared and defined in a single header file named Book.h
    or declared in a header file named Book.h and defined in a separate .cpp file BookDef.cpp

    Note that the Book class does not contain a main() method. This class only defines what
    makes a Book object. The main() method is in the tester file, just like in the previous
    lab.
    The Constructor is used to create a new instance of the class. Its arguments provide the
    initial values for each of the fields. The constructor is covered in more detail below.
    The various Accessor methods (getters) are used to retrieve information from a Book
    object as we have seen in class.
    Notice that there is only one Mutator method (setter). The only way that a book’s title,
    author, edition, pubCode, and ISBN are set is through the constructor, when the object
    is created. Those values can never change. However, a book’s price can be changed
    through use of the changePrice() mutator (setter) method.

        - Diagram for the Book class:

            * Anything marked with " — " is private *
            * Anything marked with " + " is public *
            * When you see a colon " : ", anything to the left of the colon is a name
                and anything to the right of the colon is the data type of said name *

            Book
            — codeNum : string    ----
            — author : string        |
            — title : string         |____ Fields
            — edition : int          |
            — pubCode : string       |
            — price : double      ----
            
            + Book(cn:string, au:string, ti:string, ed:int, pc:string, pr:double) <- Constructor

            + getTitle( )                               -----
            + getAuthor( )                                  |
            + getPrice( )                                   |
            + getEdition( )                                 |______ Methods
            + getISBN( )                                    |
            + getPubCode( )                                 |
            + changePrice(newPrice : double) : void     -----

    The Book Constructor:
        In addition to fields and methods, a class definition can also include a constructor,
        which is a special method that is used to create a new object of that class. In the
        previous lab we did not use a constructor for the Rectangle class, so C++ created each
        new Rectangle object with the fields set to the default value 0.0.
        For the Book class we will use a constructor to create new objects of the class. The
        constructor will set the initial field values, avoiding the need for using separate setter
        methods.
        The constructor for a Book is given here. You may copy and paste this code directly into
        your Book class:

            Book(std::string cn, std::string au, std::string ti, int ed, std::string pc, double pr) {
                codeNum = cn;
                author = au;
                title = ti;
                edition = ed;
                pubCode = pc;
                price = pr;
            }

        Note that the name of a constructor method is the same as the class name, and the
        constructor has no return type (not even void). This constructor takes six input
        parameters which are used to assign values to the six field variables.
        When a constructor is defined, then it can be used in main() when a new object is
        created. For example, in main() you can create a Book object like this:
        Book book1 = Book(
            "013478796X", "Tony Gaddis",
            "Starting Out with Java: From Control Structures to Data Structures",
            4, "PE", 118.30
        );

Your task 2:
    Create the BookTester.cpp file to help you debug your Book class. (Future labs will
    use the Book class much more extensively. The BookTester program this week is a
    simple program which is only used for debugging your Book class.)

    Your BookTester program will do the following:
        - Create at least three Book objects. You may use the following data:

            -   "013478796X", "Tony Gaddis", 
                "Starting Out With Java: From Control Structures through Data Structures", 
                4, "PE", 118.30

            -   "0321409493", "John Lewis", 
                "Java Software Solutions: Foundations of Program Design", 
                5, "AW", 94.05

            -   "0134743350", "Harvey Deitel", "Java How to Program, Early Objects",
                12, "PE", 134.84

        - Use the changePrice() method to change the price of each of the three books
        that you created.

        - Use the accessor methods to print a table of all the fields for your three books.

        - Confirm for yourself that your Book class and all its methods have been
        implemented correctly.

        - The output from your testing program should be sensibly formatted so that it is
        readable and understandable. For full credit, columns must line up, and each
        book must be printed similarly. Text columns should be left aligned, and numeric
        columns must be right aligned. Dollar amounts should have two decimal digits,
        right aligned. For long strings you can use a format such as %-13.13s to truncate
        a string to no more than 13 characters, left aligned.

        You might choose an output format style that looks like this:

        -----------------------------------------------------------------------------------------
        ISBN        AUTHOR          TITLE                                       ED  PUB     PRICE
        013478796X  Tony Gaddis     Starting Out with Java: From Control St      4   PE  $ 118.30
        0321409493  John Lewis      Java Software Solutions: Foundations of      5   AW  $  94.05
        0134743350  Harvey Dietel   Java: How to Program, Early Objects         12   PE  $ 134.84
        -----------------------------------------------------------------------------------------

        Changing book1 price from $ 118.30 to $ 145.68
        Changing book2 price from $ 94.05 to $ 117.79
        Changing book3 price from $ 134.84 to $ 59.99

        -----------------------------------------------------------------------------------------
        ISBN        AUTHOR          TITLE                                       ED  PUB     PRICE
        013478796X  Tony Gaddis     Starting Out with Java: From Control St      4   PE  $ 145.68
        0321409493  John Lewis      Java Software Solutions: Foundations of      5   AW  $ 117.79
        0134743350  Harvey Dietel   Java: How to Program, Early Objects         12   PE  $  59.99
        -----------------------------------------------------------------------------------------

    Finishing Up
        When you have finished, there are up to three files to submit for this assignment:
            - if you chose to declare and define your class in one header file then you only
            need to submit two files with the following names...
                - Book.h
                - BookTester.cpp

            - if you chose to declare your class in a header file and define it within a .cpp
            file, then you need to submit three files in total with the following names...
                - Book.h
                - BookDef.cpp
                - BookTester.cpp

*/
#include <iostream>
#include <iomanip>
#include <vector>
#include "book.h"

void printHeader() {
    std::cout << std::string(89, '-') << '\n';
    std::cout << std::left
              << std::setw(13) << "ISBN"
              << std::setw(17) << "AUTHOR"
              << std::setw(43) << "TITLE"
              << std::right
              << std::setw(3) << "ED"
              << std::setw(5) << "PUB"
              << std::setw(9) << "PRICE" << '\n';
}

void printBook(const Book& book) {
    std::cout << std::left
              << std::setw(13) << book.getISBN()
              << std::setw(17) << book.getAuthor()
              << std::setw(43) << book.getTitle().substr(0, 40)
              << std::right
              << std::setw(3) << book.getEdition()
              << std::setw(5) << book.getPubCode()
              << " $" << std::setw(7) << std::fixed << std::setprecision(2) << book.getPrice()
              << '\n';
}

int main() {
    std::vector<Book> books = {
        Book("013478796X", "Tony Gaddis",
             "Starting Out With Java: From Control Structures through Data Structures",
             4, "PE", 118.30),
        Book("0321409493", "John Lewis",
             "Java Software Solutions: Foundations of Program Design",
             5, "AW", 94.05),
        Book("0134743350", "Harvey Deitel",
             "Java How to Program, Early Objects",
             12, "PE", 134.84)
    };

    printHeader();
    for (const auto& book : books) {
        printBook(book);
    }
    std::cout << std::string(89, '-') << '\n';

    std::cout << "Changing book1 price from $ 118.30 to $ 145.68\n";
    std::cout << "Changing book2 price from $ 94.05 to $ 117.79\n";
    std::cout << "Changing book3 price from $ 134.84 to $ 59.99\n";

    books[0].changePrice(145.68);
    books[1].changePrice(117.79);
    books[2].changePrice(59.99);

    printHeader();
    for (const auto& book : books) {
        printBook(book);
    }
    std::cout << std::string(89, '-') << '\n';

    return 0;