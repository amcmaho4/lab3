//Katie Quinn & Anna McMahon
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

Package::Package(double w, double cost){//non default constructor
//only need a weight and costPerOunce for this program's functionality
	if(w>=0){
		weight = w;
	} else{
		cout << "Error! Changing weight to default 100 ounces." <<endl;
		weight = 100;//default value of ounces
	}
	if(cost>=0){
	   costPerOunce=cost;
	} else{
		cout << "Error! Changing cost to default 0.05 per ounce."<<endl;
		costPerOunce = 0.05; //default cost per ounce
	}
} 
Package::Package(){
	weight = 100;
	costPerOunce= 0.05; //default values
}
double Package:: calculateCost(){ //calculating cost
	return ( (weight) * (costPerOunce) ); //if extra cost per ounce
//"extra" will be needed for Overnight Package class
}// Calculate cost function

double Package:: getWeight(){
	return weight; //returns weight
}
