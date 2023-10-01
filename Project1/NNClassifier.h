/**
 * @file NNClassifier.h
 * @brief This file contains the definition of the NNClassifier class.
 * 
 * The NNClassifier uses the nearest neighbor classification algorithm
 * @author Yao Wang
 * @date 14 April 2023
 */
#pragma once
#include "Classifier.h"
#include <vector>
#include <string>

using namespace std;

/**
 * @brief A class that implements the nearest neighbor classification algorithm.
 * 
 * This class is fully functional. You can train() and classify()!
 */
class NNClassifier : public Classifier 
{
private:
    /**
    * @brief Classifies the given DataVector using the nearest neighbor classification algorithm.
    *
    * Literates through the entire DataVector vector to the fins shortest distance between the vectors
    * @param v The DataVector to classify.
    * @return The label assigned to the DataVector by the classifier.
    */
    int classify(DataVector  v);

public:
     /**
     * @brief Trains the classifier using the data in the given file.
     * 
     * This function read the training file given and stores all the vectors into the KnowDataVector vector
     * @warning file format must be in (x,y,z,label) format
     * @param fileName The name of the file containing the training data.
     */
	void train(const string& fileName);

     /**
     * @brief Classifies the DataVector with the given components using the nearest neighbor classification algorithm.
     * 
     * This function is a essentially a shell for  int classify(DataVector  v) to find the label from x, y, z values
     * @param x The x component of the DataVector.
     * @param y The y component of the DataVector.
     * @param z The z component of the DataVector.
     * @return The label assigned to the DataVector by the classifier.
     */
	int classify(double x, double y, double z);

     /**
     * @brief Classifies the DataVector objects in the input file using the nearest neighbor classification algorithm and writes the results to the output file.
     *
     * This function reads the input file and classifies each DataVector and stores the result in a KnownDataVector vector. 
     * Then, each KnownDataVector is printed into the output file with the parsed label string
     * @param iFileName The name of the input file.
     * @param oFileName The name of the output file.
     */
	void classify(const string& iFileName, const string& oFileName);


};