//
//  creditCard.h
//  
//
//  Created by Anna Jo McMahon on 2/3/15.
//
//

#ifndef ____creditCard__
#define ____creditCard__

#include <stdio.h>
#include <string>
#include <iostream>
using namespace std;


#include "BankAccount.h"

using std::string;class creditCard {
public:
	creditCard();
	void print();
	
	
private:
	BankAccount myBank;
	string creditCardNumber;
	float amountDue;
	
	
};

#endif /* defined(____creditCard__) */
