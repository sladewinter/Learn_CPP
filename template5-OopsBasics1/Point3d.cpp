// Member functions of the Point3d class defined here

#include <iostream>    // for std::cout
#include "Vector3d.h" // for the parameter of the function moveByVector()
#include "Point3d.h" // Point3d class declared in this
	
void Point3d::print()
{
	std::cout << "Point(" << m_x << " , " << m_y << " , " << m_z << ")\n";
}
	
void Point3d::moveByVector(const Vector3d &v)
{
	m_x += v.m_x;
	m_y += v.m_y;
	m_z += v.m_z;
}