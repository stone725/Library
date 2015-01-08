//circumscribed_circleは三角形の外接円の中心座標をpair<double, double>型でかえす関数
#include <utility>

pair<double, double> circumscribed_circle( double ax, double ay, double bx, double by, double cx, double cy ) {
	double a1 = 2 * ( bx - ax );
	double b1 = 2 * ( by - ay );
	double c1 = ax * ax - bx * bx + ay * ay - by * by;
	double a2 = 2 * ( cx - ax );
	double b2 = 2 * ( cy - ay );
	double c2 = ax * ax - cx * cx + ay * ay - cy * cy;
	double x = ( b1 * c2 - b2 * c1 ) / ( a1 * b2 - a2 * b1 );
	double y = ( c1 * a2 - c2 * a1 ) / ( a1 * b2 - a2 * b1 );
	return make_pair( x, y );
}
