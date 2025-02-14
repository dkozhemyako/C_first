#include "Rectangle.h"
#include <cmath>

Rectangle::Rectangle(double x1, double y1, double x2, double y2,
    double x3, double y3, double x4, double y4)
    : x1(x1), y1(y1), x2(x2), y2(y2), x3(x3), y3(y3), x4(x4), y4(y4) {
}

double Rectangle::area() const {
    double width = std::sqrt(std::pow(x2 - x1, 2) + std::pow(y2 - y1, 2));
    double height = std::sqrt(std::pow(x4 - x1, 2) + std::pow(y4 - y1, 2));
    return width * height;
}

double Rectangle::perimeter() const {
    double width = std::sqrt(std::pow(x2 - x1, 2) + std::pow(y2 - y1, 2));
    double height = std::sqrt(std::pow(x4 - x1, 2) + std::pow(y4 - y1, 2));
    return 2 * (width + height);
}
