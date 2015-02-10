//Katie Quinn & Anna McMahon
//CSE 20212 Lab 3
//2-8-15
//
//Interface for two day package
// inherits from Package.h
//
#ifndef TWODAYPACKAGE_H
#define TWODAYPACKAGE_H// only include once
#include "Package.h" //include the base class
using namespace std;


class TwoDayPackage: public Package{//inherits from base class
 public:
	TwoDayPackage();//default constructor
	TwoDayPackage(double,double,double); //non default constructor
	double calculateCost(); //adding additional cost
 private:
	double additCost; //additional cost

}; 

#endif
