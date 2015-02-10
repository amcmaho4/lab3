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
 TwoDayPackage twoDay, twoDay2, twoDay3; //instantiate a two day package
 OvernightPackage overNight, overNight2, overNight3; //instantiate an overnight package

	
	// add three values to the end of the vector
	packageVector.push_back(&twoDay);
	packageVector.push_back(&twoDay2);
	packageVector.push_back(&twoDay3);

	packageVector.push_back(&overNight);
	packageVector.push_back(&overNight2);
	packageVector.push_back(&overNight3);
	
	
	vector<Package*>::const_iterator i;
	double totalPackageCost=0;
	for (i=packageVector.begin(); i != packageVector.end(); ++i){
		(*i)->print();
		totalPackageCost+=(*i)->calculateCost();
	}
	
	cout <<"the cost of your" <<packageVector.size()<< " packages is: "<<totalPackageCost<<" "<< endl;
	

 return 0; //function worked correctly
}
