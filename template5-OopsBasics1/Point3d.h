// Header file that defines the Point3d class

#ifndef POINT3D

// We can't do "#include Vector3d.h" since we have included this file in Vector.h, deep nesting error
class Vector3d;  // forward declaration for class Vector3d for function moveByVector()

class Point3d
{
private:
	double m_x;
	double m_y; 
	double m_z;
 
public:
	Point3d(double x = 0.0, double y = 0.0, double z = 0.0)
		: m_x(x), m_y(y), m_z(z)
	{
 
	}
 
	void print();
 
	void moveByVector(const Vector3d &v);
};

#define POINT3D
#endif