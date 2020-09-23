#ifndef __CARTESIAN_POINT_H__
#define __CARTESIAN_POINT_H__

#include <string>

class CartesianPoint
{
public:

	CartesianPoint(const int x = 1, const int y = 1);

	
	~CartesianPoint();

	/* Copy Constructor */
	CartesianPoint(const CartesianPoint& point2);
	
	// Operator Overloads

	double operator-(const CartesianPoint& point_to) const;
	bool operator==(const CartesianPoint& other_point) const;
	CartesianPoint operator+(const CartesianPoint& other_point) const;
	
	// --------------------------------------------------------------------------------
	/* Accessors: Used to query the state of the object
	*/

	// get x
	int GetX() const;

	// get y
	int GetY() const;

	// -------------------------------------------------------------------------------
	/* Mutator(s): Used to change the state of the object
	*/

	// set x
	void SetX(int x);

	// set y,
	void SetY(int y);

	// set point (both x and y)
	void SetPoint(int x, int y);


	// get the distance between this point and a second point
	double GetDistanceTo(const CartesianPoint& point_to) const;

	// convert the obj to a string
	std::string ToString() const;



private:
	// private data members for the dimensions of the point
	int myX; // x-axis (horizontal) value
	int myY;  // y-axis (vertical) value

};

#endif  // defined __CARTESIAN_POINT__
