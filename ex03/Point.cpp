#include "Point.h"


Point::Point(void): x(0), y(0){};

Point::Point(float x, float y): x(x), y(y){};

Point::Point(Point& point){};

Point& Point::operato=(const Point& other){};
