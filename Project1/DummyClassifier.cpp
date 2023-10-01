#include "DummyClassifier.h"
#include <iostream>

void DummyClassifier::train(const string& fileName)
{
	cout << "DummyClassifier: train(const string& fileName)" << endl;
}


int DummyClassifier::classify(double x, double y, double z)
{
	cout << "DummyClassifier: classify(double x, double y, double z)" << endl;

	return 0;
}


void DummyClassifier::classify(const string& iFileName, const string& oFileName)
{
	cout << "DummyClassifier: classify(const string& iFileName, const string& oFileName)" << endl;
}