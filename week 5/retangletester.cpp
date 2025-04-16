#include <iostream>
#include <iomanip> // For setprecision
#include "Rectangle.h" // Include the Rectangle class

using namespace std;

int main() {
    double length, width;

    // Create instances for rooms
    Rectangle kitchen, bedroom, livingRoom;

    // Input details for the kitchen
    cout << "Please enter the dimensions of the kitchen:\n";
    cout << "Length (in meters): ";
    cin >> length;
    kitchen.setLength(length);

    cout << "Width (in meters): ";
    cin >> width;
    kitchen.setWidth(width);

    // Input details for the bedroom
    cout << "\nPlease enter the dimensions of the bedroom:\n";
    cout << "Length (in meters): ";
    cin >> length;
    bedroom.setLength(length);

    cout << "Width (in meters): ";
    cin >> width;
    bedroom.setWidth(width);

    // Input details for the living room
    cout << "\nPlease enter the dimensions of the living room:\n";
    cout << "Length (in meters): ";
    cin >> length;
    livingRoom.setLength(length);

    cout << "Width (in meters): ";
    cin >> width;
    livingRoom.setWidth(width);

    // Output the details for each room with improved readability
    cout << "\n---------- Room Details ----------\n";

    cout << "\nKitchen:\n";
    cout << "Length: " << kitchen.getLength() << " meters, "
         << "Width: " << kitchen.getWidth() << " meters, "
         << "Area: " << fixed << setprecision(2) << kitchen.getArea() << " square meters\n";

    cout << "\nBedroom:\n";
    cout << "Length: " << bedroom.getLength() << " meters, "
         << "Width: " << bedroom.getWidth() << " meters, "
         << "Area: " << fixed << setprecision(2) << bedroom.getArea() << " square meters\n";

    cout << "\nLiving Room:\n";
    cout << "Length: " << livingRoom.getLength() << " meters, "
         << "Width: " << livingRoom.getWidth() << " meters, "
         << "Area: " << fixed << setprecision(2) << livingRoom.getArea() << " square meters\n";

    // Calculate and output the total area of the apartment
    double totalArea = kitchen.getArea() + bedroom.getArea() + livingRoom.getArea();
    cout << "\n---------- Total Apartment Area ----------\n";
    cout << "Total area of the apartment: " << fixed << setprecision(2) << totalArea << " square meters\n";

    return 0;
}