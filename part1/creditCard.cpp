//
//  creditCard.cpp
// 	Implementation for credit card class - derived from bank account 
//
//  Created by Anna Jo McMahon on 2/3/15.
//	& Katie Quinn
//

#include "creditCard.h" //include header file
#include <string>
using namespace std;


creditCard::creditCard(){ //construcotr
	creditCardNumber= "1234644444444444";
	amountDue=0;//set data members to default values

}
void creditCard::print(){
//print function specific for this derived class
	cout<< "your credit card number is: "<< creditCardNumber <<endl;
	cout<< "your amount due is: "<< amountDue<<endl;

}
