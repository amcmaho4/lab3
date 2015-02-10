//Katie Quinn & Anna McMahon
//CSE 20212 Lab 3
//2-8-15
//
//Implementation for two day package
// inherits from Package.h (base class)
//
#include "TwoDayPackage.h" //include both header files
#include "Package.h"
#include <iostream>
using namespace std;

TwoDayPackage:: TwoDayPackage(){ //default constructor
	additCost = 5; //additional cost of 5 dollars

}
TwoDayPackage:: TwoDayPackage(double cost, double weight, double addit) : Package(weight,cost) { // calling the constructor for Package
	additCost = addit; //non default value
	
}
double TwoDayPackage:: calculateCost() {
	// Package::CalculateCost calls base class calc cost function
	return ( (Package::calculateCost()) + additCost); //adding set value
} //specific calculate cost function


void TwoDayPackage::print(){
	cout << "Type: 2 day"<<endl<<"weight: "<< Package::getWeight()<<endl<<"cost: "<<calculateCost() <<endl;
	cout<<endl;
}
