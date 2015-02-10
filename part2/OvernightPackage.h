//Katie Quinn & Anna McMahon
//CSE20212 Lab 3
//2-8-15
//
//Part 2
//Interface for Overnight Package inherits from Package.h
//
#ifndef OVERNIGHTPACKAGE_H //header is only included once
#define OVERNIGHTPACKAGE_H
#include "Package.h" //include the base class

class OvernightPackage: public Package{ 
//OvernightPackage is a derived class from Package
 public:
	OvernightPackage(double,double,double);//nondefault constructor
	OvernightPackage(); //default constructor 
	double calculateCost(); //calculate package cost
 private:
	double extraCostPerOunce; //extra cost per ounce 
};

#endif
