class Rectangle {

private:
    double x1, y1, x2, y2;

public:

    Rectangle(double x1, double y1, double x2, double y2);

    double width() const;
    double height() const;
    double area() const;
    double perimeter() const;

    
    double getX1() const;
    double getY1() const;
    double getX2() const;
    double getY2() const;
};
