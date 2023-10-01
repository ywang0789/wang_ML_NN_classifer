#include "KnownDataVector.h"
#include <iostream>
#include <string>
#include <sstream>
KnownDataVector::KnownDataVector()
{
    this->label = ERROR_LABEL;
}

KnownDataVector::KnownDataVector(double x, double y, double z, int label) : DataVector(x, y, z), label(label) {}


KnownDataVector::KnownDataVector(DataVector v, int label): label(label)
{
    this->x = v.getX();
    this->y = v.getY();
    this->z = v.getZ();
}

int KnownDataVector::getLabel()
{
    return this->label;
}

ifstream& operator >>(ifstream& fin, KnownDataVector& v)
{
    char comma;
    fin >> v.x >> comma >> v.y >> comma >> v.z>> comma >> v.label;
    return fin;
}

ofstream& operator <<(ofstream& fout, KnownDataVector& v)
{
    char comma = ',';
    fout << v.x << comma << v.y << comma << v.z << comma << v.label;
    return fout;
}