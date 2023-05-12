#include "Point.hpp"
#include "Fixed.hpp"

Point::Point(): x(Fixed()), y(Fixed())
{
    
}

Point::Point(float X, float Y): x(Fixed(X)),y(Fixed(Y))
{
    
}

Point::~Point()
{
    
}

Point& Point::operator=(Point& point)
{
    Point::~Point();
    new (this) Point(point.x.toFloat(), point.y.toFloat()); 
    return *this;
}


Point::Point(Point const &point):x(point.x), y(point.y)
{

}

std::ostream& operator << (std::ostream &out,const Point &point)
{
    out << "X: " << point.get_X() << " Y: "  << point.get_Y();
    return out;
}

Fixed Point::get_X() const
{
    return this->x;
}

Fixed Point::get_Y() const
{
    return this->y;
}