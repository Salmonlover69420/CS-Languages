/* Consider the structure point containing the coordinates of a point x and y.
	Write a function sum that inputs two variables of type point and that returns a variable of type point that is the sum of the two points.Write the program that tests this function
*/
#include <iostream>

using namespace std;

struct point {
	int x, y;
};

point sum(point, point);

int main() {
	point X, Y, Z;
	cout << "enter the coordinates of X: ";
	cin >> X.x >> X.y;
	cout << "enter the coordinates of Y: ";
	cin >> Y.x >> Y.y;
	Z = sum(X, Y);
	cout << "The X coordinates of Z:" << Z.x << endl;
	cout << "The y coordinates of  Z:" << Z.y << endl;

	return 0;
}

point sum(point A, point B) {
	point C;
	C.x = A.x + B.x;
	C.y = A.y + B.y;

	return C;
}
