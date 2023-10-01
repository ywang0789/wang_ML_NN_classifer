#include "NNClassifier.h"
#include <iostream>
#include <cmath>
#include <vector>
#include <fstream>
#include "LabelParser.h"



void NNClassifier::train(const string& fileName)
{
	ifstream fin;
	fin.open(fileName);
	if (fin.is_open())
	{
		while (!fin.eof())
		{
			KnownDataVector v;
			fin >> v;
			this->data.push_back(v);
		}
	}
	else
	{
		cout << "Could not open file:" << fileName << endl;
		return;
	}
	cout << "Classifier was trained from " << fileName << endl;
}

int NNClassifier::classify(DataVector v)
{
	double closestDistance = INFINITY;
	int label = ERROR_LABEL;

	for (int i = 0; i < data.size(); i++)
	{
		double d = v.calculateDistance(data[i]);

		if (d < closestDistance)
		{
			closestDistance = d;
			label = data[i].getLabel();
		}
	}

	return label;
}

int NNClassifier::classify(double x, double y, double z)
{
	return this->classify(DataVector(x, y, z));
}

void NNClassifier::classify(const string& iFileName, const string& oFileName)
{
	vector<KnownDataVector> labeledData; 

	// read file
	ifstream fin;
	fin.open(iFileName);
	if (fin.is_open())
	{
		while (!fin.eof())
		{
			// create a KnownDataVector and push into vector
			DataVector temp;
			fin >> temp;
			int label = this->classify(temp);
			labeledData.push_back(KnownDataVector(temp, label));
		}
	}
	else
	{
		cout << "Could not open file:" << iFileName << endl;
		return;
	}

	cout << "Finished reading:" << iFileName << endl;


	// write into file
	ofstream fout;
	fout.open(oFileName);
	if (fout.is_open())
	{
		// write ALL KnownDataVectors into file
		for (int i = 0; i < labeledData.size(); i++)
		{
			// format: x,y,z,label,text
			fout << labeledData[i] << ',' << getStringFromLabel(labeledData[i].getLabel()) << endl;
		}
	}
	else
	{
		cout << "Could not open file:" << iFileName << endl;
		return;
	}
	cout << "Finished writing:" << oFileName << endl;
	
}