/**
 * @file DummyClassifier.h
 * @brief This file contains the definition of the DummyClassifier class.
 *
 * @warning This class has not yet been fully implemented
 * @author Yao Wang
 * @date 14 April 2023
 */
#pragma once
#include "Classifier.h"

using namespace std;

/**
 * @brief A class that implements the dummy classification algorithm /0\.
 * 
 * @warning This class has not yet been fully implemented
 * 
 */
class DummyClassifier : public Classifier
{
public:
    /**
    * @brief Trains the classifier using the data in the given file.
    *
    * @warning This function has not yet been implemented
    * 
    *
    * @param fileName The name of the file containing the training data.
    */
    void train(const string& fileName);

    /**
    * @brief Classifies the DataVector with the given components using the classifier.
    *
    * @warning This function has not yet been implemented
    *
    * @param x The x component of the DataVector.
    * @param y The y component of the DataVector.
    * @param z The z component of the DataVector.
    * @return The label assigned to the DataVector by the classifier.
    */
    int classify(double x, double y, double z);

    /**
    * @brief Classifies the DataVector objects in the input file using the classifier and writes the results to the output file.
    *
    * @warning This function has not yet been implemented
    *
    * @param iFileName The name of the input file.
    * @param oFileName The name of the output file.
    */
    void classify(const string& iFileName, const string& oFileName);
};