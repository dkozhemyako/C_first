#include <iostream>
#include "Rectangle.h"

using namespace std;

int main() {
    double x1, y1, x2, y2;

    cout << "Введіть координати двох протилежних вершин прямокутника:\n";
    cout << "x1: "; cin >> x1;
    cout << "y1: "; cin >> y1;
    cout << "x2: "; cin >> x2;
    cout << "y2: "; cin >> y2;

    Rectangle rect(x1, y1, x2, y2);

    cout << "\nПрямокутник: Вершини ("
        << rect.getX1() << ", " << rect.getY1() << ") і ("
        << rect.getX2() << ", " << rect.getY2() << ")\n";

    cout << "Ширина: " << rect.width() << ", Висота: " << rect.height() << "\n";
    cout << "Площа: " << rect.area() << ", Периметр: " << rect.perimeter() << "\n";

    return 0;
}
