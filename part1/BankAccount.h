//
//  BankAccount.h
//  	Interface for bank account class: base class in hierarchy 
// 
//  Created by Anna Jo McMahon on 2/3/15.
//	 & Katie Quinn
//

#ifndef ____BankAccount__
#define ____BankAccount__

#include <stdio.h> 
#include <string> //include for private data members
using namespace std; 


class BankAccount{ //base class for boatLoan and creditCard
	
public:
	BankAccount(); //constructor 
private:
	string name; 
	string socialSecurity;
	string password; //all data members are strings
	
	
};

#endif /* defined(____BankAccount__) */
