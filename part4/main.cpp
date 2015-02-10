//Katie Quinn & Anna McMahon
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
	double costPerOunce=.5, additionalTwoDayFee=5, oneDayExtraCostPerOunce=.10;
	
 TwoDayPackage twoDay(10,costPerOunce,additionalTwoDayFee), twoDay2(50,costPerOunce,additionalTwoDayFee), twoDay3(25,costPerOunce,additionalTwoDayFee); //instantiate 3 two day packages
 OvernightPackage overNight(10,costPerOunce,oneDayExtraCostPerOunce), overNight2(50,costPerOunce,oneDayExtraCostPerOunce), overNight3(25,costPerOunce,oneDayExtraCostPerOunce); //instantiate 3 overnight packages

	
	// add three values to the end of the vector
	packageVector.push_back(&twoDay);
	packageVector.push_back(&twoDay2);
	packageVector.push_back(&twoDay3);

	packageVector.push_back(&overNight);
	packageVector.push_back(&overNight2);
	packageVector.push_back(&overNight3);
	
	
	vector<Package*>::const_iterator i;
	double totalPackageCost=0;
	int packnum=1;
	for (i=packageVector.begin(); i != packageVector.end(); ++i){
		cout<< "Package "<< packnum<<": "<<endl;
		packnum++;
		(*i)->print();
		totalPackageCost+=(*i)->calculateCost();
	}
	
	cout <<"the cost of your " <<packageVector.size()<< " packages is: "<<totalPackageCost<<" "<< endl;
	

 return 0; //function worked correctly
}
