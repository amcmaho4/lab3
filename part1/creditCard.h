//
//  creditCard.h
//  	Interface for credit card class - derived from bank account 
//
//  Created by Anna Jo McMahon on 2/3/15.
//		& Katie Quinn
//

#ifndef ____creditCard__
#define ____creditCard__

#include <stdio.h> //include headers
#include <string>
#include <iostream>
using namespace std; 
#include "BankAccount.h" //includes base class
using std::string;

class creditCard : public BankAccount{
//denotes that creditCard is a derived class from BankAccount
 public:
	creditCard(); //constructor
	void print(); //class specific
	
private:
	string creditCardNumber;
	float amountDue; //data members
	
};

#endif /* defined(____creditCard__) */
