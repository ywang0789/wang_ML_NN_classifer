/**
 * @file Classifier.h
 * @brief This file contains the definition of the abstract Classifier class.
 * 
 * A Classifier can train from a set of KnownDataVectors to classify any orientation from its DataVector
 * @author Yao Wang
 * @date 14 April 2023
 */
#pragma once
#include "KnownDataVector.h"
#include <iostream>
#include <vector>
#include <string>
using namespace std;

/**
 * @brief An abstract base class for classifiers that can classify DataVector objects.
 * 
 * A Classifier can train from a set of KnownDataVectors to classify any orientation from its DataVector
 * 
 */
class Classifier 
{
protected:

   vector<KnownDataVector> data; /**< A vector of KnownDataVector objects to use for classification. */

public:
     /**
     * @brief Trains the classifier using the data in the given file.
     * 
     * This is is a virtual function
     *
     * @param fileName The name of the file containing the training data.
     */
    virtual void train(const string& fileName) = 0;

     /**
     * @brief Classifies the DataVector with the given components using the classifier.
     *
     * This is is a virtual function
     * 
     * @param x The x component of the DataVector.
     * @param y The y component of the DataVector.
     * @param z The z component of the DataVector.
     * @return The label assigned to the DataVector by the classifier.
     */
    virtual int classify(double x, double y, double z) = 0;

     /**
     * @brief Classifies the DataVector objects in the input file using the classifier and writes the results to the output file.
     *
     * This is is a virtual function
     * 
     * @param iFileName The name of the input file.
     * @param oFileName The name of the output file.
     */
    virtual void classify(const string& iFileName, const string& oFileName) = 0;
};