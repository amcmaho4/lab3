//Katie Quinn
//CSE 20212 Lab 3
//2-8-15
//
//Interface for two day package
// inherits from Package.h
//
#ifndef TWODAYPACKAGE_H
#define TWODAYPACKAGE_H// only include once

#include <iostream>
using namespace std;
#include "Package.h" //include the base class

class TwoDayPackage: public Package{//inherits from base class
 public:
	TwoDayPackage();//non default constructor
	virtual double calculateCost(); //adding additional cost
	virtual void print();
	TwoDayPackage(double cost, double weight, double addit);
 private:
	double additCost; //additional cost

}; 

#endif
