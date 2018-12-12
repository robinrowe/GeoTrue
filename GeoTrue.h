struct Point
{	Distance x;
	Distance y; 
	Distance z;
	Point(Distance x,Distance y,Distance z)
	:	x(x)
	,	y(y)
	,	z(z)
	{}
	Point()
	:	x(0)
	,	y(0)
	,	z(0)
	{}
};

struct Polygon
{	unsigned sides;
	Point* p;
	static Point invalid;
	Polygon(unsigned sides,Point* p)
	:	sides(sides)
	,	p(p)
	{}
	Point& operator[](unsigned side)
	{	if(side>=sides)
		{	return invalid;
		}
		return p[side];
	}
	const Point& operator[](unsigned side) const
	{	if(side>=sides)
		{	return invalid;
		}
		return p[side];
	}
};

typedef int Distance;
typedef int Tristate;

Distance GeoDistance(const Point& p,const Point& p2);
Distance GeoDistance(const Point& p,const Polygon& g);
Distance GeoDistance(const Polygon& g,const Polygon& g);
Distance NetDistance(const Point& p,const Point& p2);
Distance NetDistance(const Point& p,const Polygon& g);
Distance NetDistance(const Polygon& g,const Polygon& g);
Tristate PointAtPolygon(const Point& p,const Polygon& g);

 What is the geodesic distance between two features?


Between a point and the closest edge of a polygon
Between a point and another point
Between the closest edge of a polygon to the closest edge of another polygon

2) What is the network distance between two features?


Between a point and the closest edge of a polygon
Between a point and another point
Between the closest edge of a polygon to the closest edge of another polygon

3) Is a point inside or outside a polygon?


Is the point completely within the polygon (not including features on the boundary) -- “completely contain within”
Is the point within the polygon (including features on the boundary) -- “contain within”
Is the point only touching the boundary (so neither in or out) -- Clementini