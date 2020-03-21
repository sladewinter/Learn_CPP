// Header file that defines the Vector3d class

#ifndef VECTOR3D

/* In order to make a member function a friend, the compiler has to have seen the 
   full definition for the class of the friend member function (not just a forward declaration)
   So we cannot just forward declare "class Point3d" here */
#include "Point3d.h"  // for declaring Point3d::moveByVector() as a friend

class Vector3d
{
private:
	double m_x;
	double m_y;
	double m_z;
 
public:
	Vector3d(double x = 0.0, double y = 0.0, double z = 0.0)
		: m_x(x), m_y(y), m_z(z)
	{
 
	}
 
	void print();
	
	friend void Point3d::moveByVector(const Vector3d &v);
};

#define VECTOR3D
#endif