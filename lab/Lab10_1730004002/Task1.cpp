/*Lab9Task1*/
#include <stdio.h>
#include <math.h>
int main()
{
	float length,l1,l2,l3,circumference;

	struct point{
		float x;
		float y;
	};
	struct point p;
	
	struct line{
		struct point p1,p2;
	};
	struct line l;

	struct triangle{
		struct point p1,p2,p3;
	};
	struct triangle t;

	p.x=4;
	p.y=11;
	//assign the point
	l.p1.x=2;
	l.p1.y=7;
	l.p2.x=10;
	l.p2.y=9;
	//assign the point on the line
	t.p1.x=2;
	t.p1.y=0;
	t.p2.x=6;
	t.p2.y=5;
	t.p3.x=8;
	t.p3.y=3;
	//assign the point on the triangle

	length=sqrt((l.p2.y-l.p1.y)*(l.p2.y-l.p1.y)+(l.p2.x-l.p1.x)*(l.p2.x-l.p1.x));
	l1=sqrt((t.p2.y-t.p1.y)*(t.p2.y-t.p1.y)+(t.p2.x-t.p1.x)*(t.p2.x-t.p1.x));
	l2=sqrt((t.p2.y-t.p3.y)*(t.p2.y-t.p3.y)+(t.p3.x-t.p2.x)*(t.p3.x-t.p2.x));
	l3=sqrt((t.p3.x-t.p1.x)*(t.p3.x-t.p1.x)+(t.p3.y-t.p1.y)*(t.p3.y-t.p1.y));
	circumference=l1+l2+l3;
	printf("the length of the line is %f,the circumference of triangle is %f\n",length,circumference);

	return 0;
}



