#include "DataVector.h"
#include <cmath>
#include <sstream>

DataVector::DataVector()
{
    this->x = NULL;
    this->y = NULL;
    this->z = NULL;
}

DataVector::DataVector(double x, double y, double z) : x(x), y(y), z(z){}


double DataVector::getX() 
{
    return this->x;
}

double DataVector::getY() 
{
    return this->y;
}

double DataVector::getZ()
{
    return this->z;
}



double DataVector::calculateDistance(DataVector& v)
{
    double dx = this->x - v.x;
    double dy = this->y - v.y;
    double dz = this->z - v.z;
    return sqrt(pow(dx,2) + pow(dy, 2) + pow(dz, 2));
}


ifstream& operator >>(ifstream& fin, DataVector& v)
{
    char comma;
    fin >> v.x >> comma >> v.y >> comma >> v.z;
    return fin;
}
