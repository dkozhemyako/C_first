#include <iostream>
#include "Rectangle.h"

using namespace std;

int main() {
    double x1, y1, x2, y2, x3, y3, x4, y4;

    cout << "Введіть координати чотирьох вершин прямокутника:\n";
    cout << "Вершина 1 (x1, y1): "; cin >> x1 >> y1;
    cout << "Вершина 2 (x2, y2): "; cin >> x2 >> y2;
    cout << "Вершина 3 (x3, y3): "; cin >> x3 >> y3;
    cout << "Вершина 4 (x4, y4): "; cin >> x4 >> y4;

    Rectangle rect(x1, y1, x2, y2, x3, y3, x4, y4);

    cout << "\nПлоща: " << rect.area() << "\n";
    cout << "Периметр: " << rect.perimeter() << "\n";

    return 0;
}
