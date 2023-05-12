#include <iostream>
#include <iostream>
#include "Fixed.hpp"
#include "Point.hpp"

float calc_area(Point const A, Point const B, Point const C) {

    float Ax = A.get_X().toFloat();
    float Ay = A.get_Y().toFloat();
    
    float Bx = B.get_X().toFloat();
    float By = B.get_Y().toFloat();
    
    float Cx = C.get_X().toFloat();
    float Cy = C.get_Y().toFloat();
    
    float res = Ax * (By - Cy) + Bx * (Cy - Ay) + Cx * (Ay - By);
    if (res < 0)
        res = -res;
    return res / 2.0;
}

bool bsp(Point const a, Point const b, Point const c, Point const point)
{

    float ABC = calc_area(a,b ,c);

    float ABP = calc_area(a,b ,point);
    float ACP = calc_area(a,c ,point);
    float BCP = calc_area(b ,c, point);

    if((ABP + ACP + BCP) == ABC)
        return true;
    return false;
}