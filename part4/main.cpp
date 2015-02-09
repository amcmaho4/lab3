//Katie Quinn
//CSE 20212 Lab 3
//2-8-15
//Part 2
//
//small driver program to display the contents of a derived TwoDayPackage 
//and a Overnight Package
//
#include <iostream>
using namespace std;
#include "Package.h" //include header files
#include "TwoDayPackage.h"
#include "OvernightPackage.h"
#include <vector>
#include <iterator>


int main(){
	vector <Package*> packageVector;
 TwoDayPackage twoDay; //instantiate a two day package
 OvernightPackage overNight; //instantiate an overnight package

	
	// add three values to the end of the vector
	packageVector.push_back(&twoDay);
	packageVector.push_back(&overNight);
	
	// display current size and capacity of vector
	cout << "Current size of vector: " << packageVector.size() << endl;
	cout << "Current capacity of vector: " << packageVector.capacity() << endl;
	
	vector<Package*>::const_iterator i;
	
	for (i=packageVector.begin(); i != packageVector.end(); ++i)
		cout << "  ";
	cout << endl;

	
	
	
	
	
	
	
	
	
	
 cout << "The cost of shipping a two day package is: "<< twoDay.calculateCost() <<endl;
 
 cout << "The cost of shipping an overnight package is: "<< overNight.calculateCost()<< endl;

 return 0; //function worked correctly
}
