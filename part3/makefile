main: main.o BankAccount.o boatLoan.o creditCard.o
	g++ -o main main.o BankAccount.o boatLoan.o creditCard.o 
main.o: main.cpp
	g++ -c main.cpp
BankAccount.o: BankAccount.cpp
	g++ -c BankAccount.cpp
boatLoan.o: boatLoan.cpp
	g++ -c boatLoan.cpp
creditCard.o: creditCard.cpp
	g++ -c creditCard.cpp
clean:
	rm -f *.o main 
