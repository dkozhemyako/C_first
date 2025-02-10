#include "Rectangle.h"
#include <algorithm> 


Rectangle::Rectangle(double x1, double y1, double x2, double y2) {
    this->x1 = std::min(x1, x2);
    this->y1 = std::min(y1, y2);
    this->x2 = std::max(x1, x2);
    this->y2 = std::max(y1, y2);
}


double Rectangle::width() const {
    return x2 - x1;
}


double Rectangle::height() const {
    return y2 - y1;
}


double Rectangle::area() const {
    return width() * height();
}


double Rectangle::perimeter() const {
    return 2 * (width() + height());
}

double Rectangle::getX1() const { return x1; }
double Rectangle::getY1() const { return y1; }
double Rectangle::getX2() const { return x2; }
double Rectangle::getY2() const { return y2; }
