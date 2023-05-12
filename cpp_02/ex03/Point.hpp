#ifndef POINT_HPP
#define POINT_HPP

#include <iostream>
#include "Fixed.hpp"
#include <cmath>

class Point{
private:
    Fixed const x;
    Fixed const y;
public:
    Point();
    ~Point();
    Point& operator = (Point &point);
    Point(Point const &point);

    Point(const float X,const float Y);
    Fixed get_X() const;
    Fixed get_Y() const;
};

std::ostream& operator << (std::ostream &out,const Point &point);

bool bsp(Point const a, Point const b, Point const c, Point const point);

#endif