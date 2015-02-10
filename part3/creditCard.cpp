//
//  creditCard.cpp
//  Implementation of credit card class using composition 
//
//  Created by Anna Jo McMahon on 2/3/15.
// 		& Katie Quinn
//

#include "creditCard.h"
#include <string>
using namespace std;


creditCard::creditCard(){ //constructor
	creditCardNumber= "1234644444444444";
	amountDue=0; //default values for data member

}
void creditCard::print(){ //print data members
	cout<< "your credit card number is: "<< creditCardNumber <<endl;
	cout<< "your amount due is: "<< amountDue<<endl;

}
