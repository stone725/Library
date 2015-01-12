//三角形の中に(xp, yp)の点が存在するかを判定する関数
#include <cmath>
using namespace std;

bool collision_detection( double x1, double y1, double x2, double y2, double x3, double y3, double xp, double yp ) {
	x2 -= x1;
	x3 -= x1;
	xp -= x1;
	y2 -= y1;
	y3 -= y1;
	yp -= y1;
	double t_size = fabs( ( x2 * y3 - y2 * x3 ) / 2 );
	t_size -= fabs( ( x2 * yp -  y2 * xp ) / 2 );
	t_size -= fabs( ( x3 * yp -  y3 * xp ) / 2 );
	x2 -= xp;
	x3 -= xp;
	y2 -= yp;
	y3 -= yp;
	yp = xp = 0;
	t_size -= fabs( ( x2 * y3 - y2 * x3 ) / 2 );
	return fabs( t_size ) < 1e-10;
}
