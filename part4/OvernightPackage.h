//Katie Quinn
//CSE20212 Lab 3
//2-8-15
//
//Part 2
//Interface for Overnight Package inherits from Package.h
//
#ifndef OVERNIGHTPACKAGE_H //header is only included once
#define OVERNIGHTPACKAGE_H
#include "Package.h" //include the base class
#include <iostream>
using namespace std;

class OvernightPackage: public Package{ 
//OvernightPackage is a derived class from Package
 public:
	OvernightPackage(); //default constructor
	OvernightPackage(double cost, double weight, double extra);
	virtual double calculateCost(); //calculate package cost
	virtual void print();
 private:
	double extraCostPerOunce; //extra cost per ounce 
};

#endif
