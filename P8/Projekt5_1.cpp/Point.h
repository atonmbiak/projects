#include <iostream>
#include <math.h>

using namespace std;

class Point {
	int x; int y;

public:
	Point(int xp=0, int yp=0){x=xp; y=yp;}
	Point&operator+=(Point p1);
	bool operator==(Point p1);
};


class Line {
	Point start;
	Point ende;
public:
	Line();
	Line(Point a, Point b);
	Line&operator+=(Point l1);
	bool operator==(Line l1);
};

inline Line::Line(){
	start = 0;
	ende = 1;
}

inline Line::Line (Point a, Point b){
	start = a;
	ende = b;
}
