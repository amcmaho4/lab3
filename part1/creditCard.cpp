//
//  creditCard.cpp
//  
//
//  Created by Anna Jo McMahon on 2/3/15.
//
//

#include "creditCard.h"
#include <string>
using namespace std;


creditCard::creditCard(){
	creditCardNumber= "1234644444444444";
	amountDue=0;

}
void creditCard::print(){
	cout<< "your credit card number is: "<< creditCardNumber <<endl;
	cout<< "your amount due is: "<< amountDue<<endl;

}