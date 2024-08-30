#include <iostream>
using namespace std;

class Rectangle {
private:
    double length;
    double width;

public:
    Rectangle(double l, double w) {
        length = l;
        width = w;
    }

    double calculateArea() {
        return length * width;
    }

    double calculatePerimeter() {
        return 2 * (length + width);
    }

    // Getters and setters
    double getLength() const {
        return length;
    }

    void setLength(double l) {
        if (l > 0) {
            length = l;
        }
    }

    double getWidth() const {
        return width;
    }

    void setWidth(double w) {
        if (w > 0) {
            width = w;
        }
    }
};

int main() {
    double l, w;

    std::cout << "Enter length: ";
    std::cin >> l;

    std::cout << "Enter width: ";
    std::cin >> w;

    Rectangle rect(l, w);

    std::cout << "Rectangle Area: " << rect.calculateArea() << std::endl;
    std::cout << "Rectangle Perimeter: " << rect.calculatePerimeter() << std::endl;

    return 0;
}


