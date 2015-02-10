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

/*******************************/
/****Structure Declaration*****/
/*****************************/
struct Vectors{
double x,y,z;
string vectorName;
};
/*******************************/
/****Prototype Declaration*****/
/*****************************/
void addVectors(Vectors, Vectors, Vectors);
void subtractVectors(Vectors, Vectors, Vectors);
void multiplyVectors(Vectors,Vectors, double);
void scalarFunc(Vectors , Vectors , Vectors);
void magnitudeFunc(Vectors, Vectors);
void outputFunc();

int main() 
{
	char mathOperation, done;
	Vectors vectorA,vectorB, outputVect;
	vectorA.x = 4.0;
	vectorA.y = 9.0;
	vectorA.vectorName = "Vector 1";
	vectorB.x = 3.0;
	vectorB.y = -1.0;
	vectorB.vectorName = "Vector 2";
	double scalar = 10.0;
	do
	{
		cout<<"Please select a math operation"<<endl<<"1 - Addition"<<endl<<"2 - Subtraction"<<endl<<"3 - Multiplication"<<endl<<"4 - Scalar"<<endl<<"5 - Magnitude"<<endl<<"Input > ";
		cin >> mathOperation;
		switch(mathOperation)
		{
			case '1':
			addVectors(vectorA,vectorB,outputVect);
			break;
			case '2':
			subtractVectors(vectorA,vectorB,outputVect);
			break;
			case '3':
			multiplyVectors(vectorA, outputVect, scalar);
			break;
			case '4':
			scalarFunc(vectorA,vectorB,outputVect);
			break;
			case '5':
			magnitudeFunc(vectorA, outputVect);
			break;
			default:
			addVectors(vectorA,vectorB,outputVect);
		}
		cout << "Do another operation: ";
		cin >> done;
		cin.ignore();
	}
	while(done == 'y' || done == 'Y');
	system("pause");
	return 0;
}

/**********************************************/
/*******Function to add vectors***************/
/*vectouput = (vect1a+vect2a)(vect1b+vect2b)*/
/*******************************************/
void addVectors(Vectors addVectA, Vectors addVectB, Vectors outputVect)
{
	outputVect.x = addVectA.x + addVectB.x;
	outputVect.y = addVectA.y + addVectB.y;
	outputVect.vectorName = "Output Vector";
	cout<<"The value for " << outputVect.vectorName <<" is equal to ("<<outputVect.x<<" , "<<outputVect.y<<")"<<endl;	
}

/***************************************************/
/*******Function to subtract vectors***************/
/*vectouput = (vect1a-vect2a)(vect1b-vect2b)******/
/************************************************/
void subtractVectors(Vectors subVectA, Vectors subVectB, Vectors outputVect)
{
	outputVect.x = subVectA.x - subVectB.x;
	outputVect.y = subVectA.y - subVectB.y;
	outputVect.vectorName = "Output Vector";
	cout<<"The value for " << outputVect.vectorName <<" is equal to ("<<outputVect.x<<" , "<<outputVect.y<<")"<<endl;
}

/***************************************************/
/*******Function to multiply vectors***************/
/*vectouput = (scalar*vect1a)(scalar-vect1b)******/
/************************************************/
void multiplyVectors(Vectors multVectA,Vectors outputVect, double scalar)
{
	outputVect.x = scalar * multVectA.x;
	outputVect.y = scalar * multVectA.y;
	outputVect.vectorName = "Output Vector";
	cout<<"The value for " << outputVect.vectorName <<" is equal to ("<<outputVect.x<<" , "<<outputVect.y<<")"<<endl;
}

/***************************************************/
/*******Function to scalar vectors*****************/
/*vectouput = (vect1a*vect2a)+(vect1b*vect2b)*****/
/************************************************/
void scalarFunc(Vectors scalarVectA, Vectors scalarVectB, Vectors outputVect)
{
	Vectors  scalarVect;
	outputVect.x = scalarVectA.x * scalarVectB.x;
	outputVect.y = scalarVectA.y * scalarVectB.y;
	scalarVect.x = outputVect.x + outputVect.y;
	outputVect.vectorName = "Output Vector";
	cout<<"The value for " << outputVect.vectorName <<" is equal to ("<<scalarVect.x<<")"<<endl;
}

/***************************************************/
/*******Function to calculate magnatude************/
/*vectouput = (vect1a^2)+(vect1b^2)^0.5***********/
/************************************************/
void magnitudeFunc(Vectors addVectA, Vectors outputVect)
{
	
	addVectA.vectorName = "Vector 1";
	outputVect.x = pow(pow(addVectA.x,2.0) + pow(addVectA.y,2.0),0.5);
	outputVect.vectorName = "Output Vector";
	outputVect.x = abs(outputVect.x);
	cout<<"The value for " << outputVect.vectorName <<" is equal to ("<<scalarVect.x<<")"<<endl;
}

