//
//  boatLoan.cpp
//  
//
//  Created by Anna Jo McMahon on 2/3/15.
//
//

#include "boatLoan.h"
#include <iostream>
using namespace std;
#include <string>

boatLoan::boatLoan(){
	numOfCannons=5;
	numberOfMonths=12;

}

void boatLoan::print(){
	cout<< "you only have "<< numberOfMonths<< " until your galleon is your own!"<<endl;
	cout<< "the ship has "<< numOfCannons<< " cannons"<<endl;

}