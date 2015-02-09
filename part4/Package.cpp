//Katie Quinn
//CSE20212 Lab 3
//Prof Scott Emrich
//2-7-15
//Part 2: packages
//Implementation of Package class
//

#include "Package.h" //include interface
#include <iostream>
using namespace std;
#include <string> //include string class

Package::Package(){//non default constructor
//only need a weight and costPerOunce for this program's functionality
	weight = 120.0;//default value of ounces
	costPerOunce = 0.05; //default cost per ounce
} 
//rubric says to ensure weight and cost are not negative?

double Package:: calculateCost(double extra){ //calculating cost
	return ( (weight) * (costPerOunce+extra) ); //if extra cost per ounce
//"extra" will be needed for Overnight Package class
}// Calculate cost function
