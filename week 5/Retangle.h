#ifndef RECTANGLE_H
#define RECTANGLE_H

#include <iostream>
#include <iomanip>  // For controlling output formatting

class Rectangle
{
private:
    double length;  // Length of the rectangle
    double width;   // Width of the rectangle

public:
    // Constructor to initialize length and width
    Rectangle(double len = 0.0, double wid = 0.0) : length(len), width(wid) {}

    // Getter for length
    double getLength() const
    {
        return length;
    }

    // Getter for width
    double getWidth() const
    {
        return width;
    }