//
//  main.cpp
// 	Driver program for BankAccount and derived classes 
//
//  Created by Anna Jo McMahon on 2/3/15.
//	& Katie Quinn
//

#include <stdio.h>
#include "boatLoan.h" //include the header files for derived/base class
#include "creditCard.h"
#include "BankAccount.h"


int main(){

	boatLoan bloan; //instantiate a boat loan
	creditCard card; //instantiate a credit card
	
	card.print(); //prints using derived class specific function
	bloan.print();
	
	return 0; //program finished successfully

}
