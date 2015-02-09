//
//  boatLoan.h
//  Interface for boat loan class - derived class from BankAccount
//
//  Created by Anna Jo McMahon on 2/3/15.
//		& Katie Quinn
//

#ifndef ____boatLoan__
#define ____boatLoan__

#include <stdio.h>
#include <string>
using namespace std;
#include "BankAccount.h" //include the base class


class boatLoan : public BankAccount{
//notation denotes boatLoan as a derived class	
public:
	boatLoan(); //constructor
	void print();//print function
private:
	int numberOfMonths;
	int numOfCannons; 
	
};


#endif /* defined(____boatLoan__) */
