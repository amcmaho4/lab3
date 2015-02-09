//Katie Quinn
//CSE20212 Lab 3
//Prof Scott Emrich
//2-7-15
//Part 2: Package hierarchy
//Interface for Package.h base class
//
#ifndef PACKAGE_H //include header class once
#define PACKAGE_H
#include <string> //include the string class
#include <iostream>
using namespace std;

class Package{
 public:
	Package(); //defualt constructor
        double calculateCost(double); //returns cost : cost per ounce * weight
 private:
	string sender_Name; //name of sender
	string sender_Address;//address of sender
        int sender_Zip; //sender zip code
	string recipient_Name;//Name of recipient
	string recipient_Address;//address of recipient
	int recipient_Zip;//recip zip code
	double weight; //weight of package
	double costPerOunce;//cost per ounce of package
};

#endif
