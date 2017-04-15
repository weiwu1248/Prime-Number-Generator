#include "Prime.h"


Prime::Prime() :maxNum(0) //default initializer
{
	prime = NULL;
}
void Prime::primesUpTo(int num){
	maxNum = num; //Max number of primes to generate
	genPrimes(); //generates the prime numbers
}
void Prime::printPrimes() const {

	cout << "The prime numbers up to " << maxNum << ":\n\n";

	for (int i = 2; i <= maxNum; i++){
		if (prime[i] == true){
		
			cout << i << " ";

		}
	}
	cout << endl;
}
void Prime::genPrimes(){
	//Makes a array of bools from 0 to n
	//A true value will mean it is a prime
	//A false value will mean it is not a prime
	try{
		prime = new bool[maxNum + 1];
	}
	catch (bad_alloc&){
		cout << "\nAllocation Failed!!\n";
	}

	//initialize bool array to true
	for (int i = 0; i <= maxNum; i++){
		prime[i] = true;
	}


	//Loop will mark all non prime numbers starting from 2
	for (int i = 2; i*i <= maxNum; i++){
	
		//If the number is not false than it is a prime
		if (prime[i] == true){
			//Marks all multiples of the prime to false
			for (int j = i * 2; j <= maxNum; j = j + i){
				prime[j] = false;
			}
		}
	}
}
Prime::~Prime()
{
	delete [] prime;
	//deallocate memory
}
