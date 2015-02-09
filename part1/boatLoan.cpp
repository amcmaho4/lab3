//
//  boatLoan.cpp
//  Implementation for boat loan class - derived from BankAccount  
//
//  Created by Anna Jo McMahon on 2/3/15.
//	& Katie Quinn
//

#include "boatLoan.h" //include header for class
#include <iostream> //print function
using namespace std;
#include <string>

boatLoan::boatLoan(){//constructor
	numOfCannons=5; //default values assigned to data members
	numberOfMonths=12;

}

void boatLoan::print(){
//print function is specific for this derived class
	cout<< "you only have "<< numberOfMonths<< " until your galleon is your own!"<<endl;
	cout<< "the ship has "<< numOfCannons<< " cannons"<<endl;
}
