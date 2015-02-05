//****************************************************************************************
//Name: Jose Ortiz
//Due Date:2/5/2015
//CIS277
//Prof. Aljamal
//Description: Vectors
//*****************************************************************************************

#include <fstream>
#include <iostream>
#include <ios>
#include <stdlib.h>
#include <stdio.h>
#include <cstring>
#include <iomanip>
#include <cmath>
#include <string>
using namespace std;

const int SIZE = 10;
int i = 0;
struct Vectors{
double x,y,z;
string vectorName;
};
void addVectors()
{
	Vectors addVectA, addVectB, outputVect;
	addVectA.x = 4.0;
	addVectA.y = 9.0;
	addVectA.vectorName = "Vector 1";
	addVectB.x = 3.0;
	addVectB.y = -1.0;
	addVectA.vectorName = "Vector 2";
	outputVect.x = addVectA.x + addVectB.x;
	outputVect.y = addVectA.y + addVectB.y;
	outputVect.vectorName = "Output Vector";
	cout<<"The value for " << outputVect.vectorName <<" is equal to ("<<outputVect.x<<" , "<<outputVect.y<<")"<<endl;
	
}
void subtractVectors()
{
	Vectors subVectA, subVectB, outputVect;
	subVectA.x = 4.0;
	subVectA.y = 9.0;
	subVectA.vectorName = "Vector 1";
	subVectB.x = 3.0;
	subVectB.y = -1.0;
	subVectA.vectorName = "Vector 2";
	outputVect.x = subVectA.x - subVectB.x;
	outputVect.y = subVectA.y - subVectB.y;
	outputVect.vectorName = "Output Vector";
	cout<<"The value for " << outputVect.vectorName <<" is equal to ("<<outputVect.x<<" , "<<outputVect.y<<")"<<endl;
}
void multiplyVectors()
{
	Vectors multVectA,outputVect;
	double scalar = 10.0;
	multVectA.x = 4.0;
	multVectA.y = 9.0;
	multVectA.vectorName = "Vector 1";
	outputVect.x = scalar * multVectA.x;
	outputVect.y = scalar * multVectA.y;
	outputVect.vectorName = "Output Vector";
	cout<<"The value for " << outputVect.vectorName <<" is equal to ("<<outputVect.x<<" , "<<outputVect.y<<")"<<endl;
}
void scalarFunc()
{
	Vectors subVectA, subVectB, outputVect, scalarVect;
	subVectA.x = 4.0;
	subVectA.y = 9.0;
	subVectA.vectorName = "Vector 1";
	subVectB.x = 3.0;
	subVectB.y = -1.0;
	subVectA.vectorName = "Vector 2";
	outputVect.x = subVectA.x * subVectB.x;
	outputVect.y = subVectA.y * subVectB.y;
	scalarVect.x = outputVect.x + outputVect.y;
	outputVect.vectorName = "Output Vector";
	cout<<"The value for " << outputVect.vectorName <<" is equal to ("<<scalarVect.x<<")"<<endl;
}
void magnitudeFunc()
{
		Vectors addVectA, outputVect;
	addVectA.x = 4.0;
	addVectA.y = 9.0;
	addVectA.vectorName = "Vector 1";
	outputVect.x = pow(pow(addVectA.x,2.0) + pow(addVectA.y,2.0),0.5);
	outputVect.vectorName = "Output Vector";
	cout<<"The value for " << outputVect.vectorName <<" is equal to ("<<abs(outputVect.x)<<")"<<endl;
}
void outputFunc()
{
	cout<<"output"<<endl;
}
int main() 
{
	char mathOperation, done;
	do
	{
		cout<<"Please select a math operation"<<endl<<"1 - Addition"<<endl<<"2 - Subtraction"<<endl<<"3 - Multiplication"<<endl<<"4 - Scalar"<<endl<<"5 - Magnitude"<<endl<<"Input > ";
		cin >> mathOperation;
		switch(mathOperation)
		{
			case '1':
			addVectors();
			outputFunc();
			break;
			case '2':
			subtractVectors();
			outputFunc();
			break;
			case '3':
			multiplyVectors();
			outputFunc();
			break;
			case '4':
			scalarFunc();
			outputFunc();
			break;
			case '5':
			magnitudeFunc();
			outputFunc();
			break;
			default:
			addVectors();
			outputFunc();
		}
		cout << "Do another operation: ";
		cin >> done;
		cin.ignore();
	}
	while(done == 'y' || done == 'Y');
	system("pause");
	return 0;
}

