/**
 * @file KnownDataVector.h
 * @brief This file contains the definition of the KnownDataVector class.
 *
 * A KnownDataVector represents a DataVector with an additional label to indicate the correct phone orientation
 * @author Yao Wang
 * @date 14 April 2023
 */
#pragma once
#include "DataVector.h"
#include <string>

 /**
  * @brief The default label value for a KnownDataVector object when an error occurs.
  *
  * This label value is used when a KnownDataVector object cannot be initialized correctly due to an error.
  */
#define ERROR_LABEL 0

 /**
  * @brief A class that represents a vector in 3D space with a known label.
  * 
  * A KnownDataVector represents a DataVector with an additional label to indicate the correct phone orientation
  * 
  */
class KnownDataVector : public DataVector
{
private:

	int label; /**< The label associated with the orientation of the phone based on its DataVector. */

public:
	/**
	* @brief Default constructor for the KnownDataVector class.
	* 
	* This constructor sets the @code label @endcode to @code ERROR_LABEL @endcode
	*/
	KnownDataVector();

	 /**
	 * @brief Constructor for the KnownDataVector class.
	 *
	 * This constructor sets member values to the respective arguements passed
	 * 
	 * @param x The x component of the vector.
	 * @param y The y component of the vector.
	 * @param z The z component of the vector.
	 * @param label The label associated with this vector.
	 */
	KnownDataVector(double x, double y, double z, int label);

	 /**
     * @brief Constructor for the KnownDataVector class.
     *
	 * This constructor sets the x,y,z member values to the values of the DataVector object passed and the label with the additional label arguement
	 * 
     * @param v The DataVector to use as the basis for this KnownDataVector.
     * @param label The label associated with this vector.
     */
	KnownDataVector(DataVector v, int label);

	/**
	* @brief Gets the label associated with this vector.
	*
	* @return The label associated with this vector.
	*/
	int getLabel();

	 /**
	 * @brief Overloads the input stream operator to read a KnownDataVector object from a file.
	 *
	 * Uses the @code friend @endcode keyword to get access to members
	 * 
	 * @param fin The input file stream to read from.
	 * @param v The KnownDataVector object to read into.
	 * @return The input file stream.
	 */
	friend ifstream& operator >>(ifstream& fin, KnownDataVector& v);

	 /**
	 * @brief Overloads the output stream operator to write a KnownDataVector object to a file.
	 *
	 * Uses the @code friend @endcode keyword to get access to members
	 * 
	 * @param fout The output file stream to write to.
	 * @param v The KnownDataVector object to write.
	 * @return The output file stream.
	 */
	friend ofstream& operator <<(ofstream& fout, KnownDataVector& v);
};
/**
 * @brief Overloads the input stream operator to read a KnownDataVector object from a file.
 *
 * @param fin The input file stream to read from.
 * @param v The KnownDataVector object to read into.
 * @return The input file stream.
 */
ifstream& operator >>(ifstream& fin, KnownDataVector& v);

/**
 * @brief Overloads the output stream operator to write a KnownDataVector object to a file.
 *
 * @param fout The output file stream to write to.
 * @param v The KnownDataVector object to write.
 * @return The output file stream.
 */
ofstream& operator <<(ofstream& fout, KnownDataVector& v);