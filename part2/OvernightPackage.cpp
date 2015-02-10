//Katie Quinn & Anna McMahon
//CSE20212 Lab 3
//2-8-15
//
//Part 2
//Implementation for Overnight Package inherits from Package.h 
//
#include "OvernightPackage.h"
#include "Package.h" //include the base class

OvernightPackage::OvernightPackage(){ //initialized with specific values
	extraCostPerOunce = 0.05; //extra fee for overnight package
}

//non default constructor
OvernightPackage::OvernightPackage(double cost, double weight, double extra) : Package(cost,weight){
	extraCostPerOunce = extra;
}

double OvernightPackage:: calculateCost(){
//calculate cost function adds additional cost to cost per ounce to calculate 
//total shipping cost, passes extra cost to the base class function

	return( Package::calculateCost()+ extraCostPerOunce*(Package::getWeight()) );
}
