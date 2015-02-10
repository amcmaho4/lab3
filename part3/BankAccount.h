//
//  BankAccount.h
//  Interface for bank account : to be used in composition 
//  Lab 3 Part 3
//  Created by Anna Jo McMahon on 2/3/15.
//	& Katie Quinn
//

#ifndef ____BankAccount__
#define ____BankAccount__

#include <stdio.h>
#include <string> //used for strings
using namespace std;


class BankAccount{
	
public:
	BankAccount(); //constructor
	string getName(); //returns password
private:
	string name;
	string socialSecurity;
	string password; //data members
	
	
};

#endif /* defined(____BankAccount__) */
