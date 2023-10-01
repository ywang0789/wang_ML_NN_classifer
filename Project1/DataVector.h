/**
 * @file DataVector.h
 * @brief This file contains the definition of the DataVector class.
 * 
 * A DataVector represents the x, z, and z, coordinates collected from the phone sensors in order to determine the orientation of the phone
 * @author Yao Wang
 * @date 14 April 2023
 */
#pragma once
#include <iostream>
#include <string>
#include <fstream>
using namespace std;

/**
 * @brief A class that represents a 3D space gravity vector.
 * 
 * A DataVector represents the x, z, and z, coordinates collected from the phone sensors in order to determine the orientation of the phone
 * 
 */
class DataVector
{
protected:

    double x; /**< The x component of the vector. */
    double y; /**< The y component of the vector. */
    double z; /**< The z component of the vector. */

public:
    /**
    * @brief Default constructor for the DataVector class.
    * 
    * This constructor sets all member values to NULL
    */
    DataVector();

    /**
     * @brief Constructor for the DataVector class.
     * 
     * This constructor sets member values to the respective arguements passed
     *
     * @param x The x component of the vector.
     * @param y The y component of the vector.
     * @param z The z component of the vector.
     */
    DataVector(double x, double y, double z);

    /**
    * @brief Gets the x component of the vector.
    * 
    * @return The x component of the vector.
    */
    double getX();

    /**
     * @brief Gets the y component of the vector.
     *
     * @return The y component of the vector.
     */
    double getY();

     /**
     * @brief Gets the z component of the vector.
     *
     * @return The z component of the vector.
     */
    double getZ();

     /**
     * @brief Calculates the Euclidean distance between the object and another DataVector object.
     * 
     * Uses the formula  d = sqrt(dx^2 + dy^2 + dz^2);
     * 
     * @see https://en.wikipedia.org/wiki/Euclidean_distance
     *
     * @param v The DataVector object to calculate the distance to.
     * @return The Euclidean distance between this DataVector object and v.
     */
    double calculateDistance(DataVector & v);


     /**
     * @brief Overloads the input stream operator to read a DataVector object from a file.
     * 
     * Uses the @code friend @endcode keyword to get access to members
     *
     * @param fin The input file stream to read from.
     * @param v The DataVector object to read into.
     * @return The input file stream.
     */
    friend ifstream& operator >>(ifstream& fin, DataVector& v);
};
/**
 * @brief Overloads the input stream operator to read a DataVector object from a file.
 *
 * @param fin The input file stream to read from.
 * @param v The DataVector object to read into.
 * @return The input file stream.
 */
ifstream& operator >>(ifstream& fin, DataVector& v);
