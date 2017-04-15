#ifndef PRIME_H
#define PRIME_H

#include<iostream>//Use for output
using namespace std;
class Prime
{
public:
	Prime(); //default initializer
	void primesUpTo(int); //creates the primes up to the N
	void printPrimes() const; // prints the primes to console
	~Prime();//deallocate memory
private:
	void genPrimes();//generates the prime numbers
	int maxNum; //The max number to generate the primes to.
	bool* prime; //Marks the prime numbers. True = prime, False = not prime
};

#endif
