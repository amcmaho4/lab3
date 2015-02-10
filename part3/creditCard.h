//
//  creditCard.h
//  Interface for the credit card class  
//  Lab 3 Part 3- using composition instead of inheritance
//  Created by Anna Jo McMahon on 2/3/15.
//		& Katie Quinn
//

#ifndef ____creditCard__
#define ____creditCard__

#include <stdio.h>
#include <string> 
#include <iostream> //include headers
using namespace std;


#include "BankAccount.h"

using std::string;
class creditCard {
public:
	creditCard(); //constructor
	void print(); 
	
	
private:
	BankAccount myBank; //instantiate bank account for this credit card
	string creditCardNumber;
	float amountDue; //data members
	
	
};

#endif /* defined(____creditCard__) */
