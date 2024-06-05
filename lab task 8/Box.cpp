#pragma once

class Box {
private:
    double length;
    double breadth;
    double height;

public:
    // Default constructor
    Box() {
        length = 0.0;
        breadth = 0.0;
        height = 0.0;
    }

    // Parameterized constructor
    Box(const double newLength, const double newBreadth, const double newHeight) {
        length = newLength;
        breadth = newBreadth;
        height = newHeight;
    }

    // Getter for volume
    double GetVolume() {
        return length * breadth * height;
    }

    // Setter for length
    void SetLength(double len) {
        length = len;
    }

    // Setter for breadth
    void SetBreadth(double bre) {
        breadth = bre;
    }

    // Setter for height
    void SetHeight(double hei) {
        height = hei;
    }

    // Overload + operator to add two Box objects.
    Box operator+(const Box& b) {
        Box box;
        box.length = this->length + b.length;
        box.breadth = this->breadth + b.breadth;
        box.height = this->height + b.height;
        return 0;
    }
}