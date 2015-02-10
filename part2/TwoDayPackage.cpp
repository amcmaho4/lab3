//Katie Quinn & Anna McMahon
//CSE 20212 Lab 3
//2-8-15
//
//Implementation for two day package
// inherits from Package.h (base class)
//
#include "TwoDayPackage.h" //include both header files
#include "Package.h"

TwoDayPackage:: TwoDayPackage(double weight, double cost, double addit) : Package(weight,cost) { // calling the constructor for Package
	additCost = addit; //non default value

}

TwoDayPackage::TwoDayPackage(){
	additCost = 5; //default cost
}

double TwoDayPackage:: calculateCost() {
	// Package::CalculateCost calls base class calc cost function
	return ( (Package::calculateCost()) + additCost); //adding set value
} //specific calculate cost function
