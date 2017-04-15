#include<iostream>
#include"Prime.h"
using namespace std;

int main(){


	Prime primes;

	primes.primesUpTo(100); //Test prime numbers up to 100
	primes.printPrimes(); //print the prime numbers




	system("pause"); //Stops screen from closing to fast.
	return 0;
}