#include "NNClassifier.h"
#include "DummyClassifier.h"
#include "KNNClassifier.h"
#include "KnownDataVector.h"
#include "DataVector.h"
#include "LabelParser.h"
#include <iostream>
#include <string>

#define TRAINING_FILE "trainingData.txt"

using namespace std;

int main(void)
{
	// select classifier
	cout << "Please select a classifier:" << endl;
	cout << "1. NN classifier" << endl;
	cout << "2. DummyClassifier" << endl;
	cout << "3. KNN classifier" << endl;

	int input;
	cin >> input;
	Classifier* c = { 0 };

	if (input == 1) // NN
	{
		c = new NNClassifier();
	}
	else if (input == 2) // Dummy
	{
		c = new DummyClassifier();
	}
	else if (input == 3) // KNN
	{
		c = new KNNClassifier();
	}
	else 
	{
		cout << "/o\\" << endl;
		exit(1);
	}

	// train classifier
	c->train(TRAINING_FILE);

	// select input method
	cout << "Please select an input option:" << endl;
	cout << "1. Keyboard" << endl;
	cout << "2. File" << endl;
	cin >> input;

	if (input == 1) // KB
	{
		// prompt user for input
		string value;
		cout << "x value:" << endl;
		cin >> value;
		double x = stod(value);
		cout << "x value:" << endl;
		cin >> value;
		double y = stod(value);
		cout << "x value:" << endl;
		cin >> value;
		double z = stod(value);

		// label it
		int label = c->classify(x, y, z);
		cout << "Label: " << getStringFromLabel(label) << endl;
	}
	else if(input == 2) // File
	{
		// prompt user for filenames
		cout << "Please enter input file name:" << endl;
		string iFileName;
		cin >> iFileName;
		cout << "Please enter out file name:" << endl;
		string oFileName;
		cin >> oFileName;

		// classify! and save
		c->classify(iFileName, oFileName);
	}
	else
	{
		cout << "/o\\" << endl;
		exit(2);
	}

	cout << "Goodbye \\o/" << endl;

	delete c; // free()
	return 0;
}