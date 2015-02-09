//
//  boatLoan.h
//  
//
//  Created by Anna Jo McMahon on 2/3/15.
//
//

#ifndef ____boatLoan__
#define ____boatLoan__

#include <stdio.h>
#include <string>
using namespace std;
#include "BankAccount.h"
class boatLoan : public BankAccount{
	
public:
	boatLoan();
	void print();
private:
	int numberOfMonths;
	int numOfCannons;
	
};


#endif /* defined(____boatLoan__) */
