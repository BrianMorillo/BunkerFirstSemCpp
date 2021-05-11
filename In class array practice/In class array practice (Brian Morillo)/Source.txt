// Description: This program prints number arrays
// Title: In Class Array Practice Lab
// Programmer: Brian Morillo
// Last date Modified: ------------

#include <iostream>
using namespace std;

void printBanner();
void printArray(const int arr[], int size, int perLine = 5); 
void loadEvenArray(int arr[], int size);
void loadOddArray(int arr[], int size);
bool isPrime(int num);
void loadPrimeArray(int arr[], int size);
void loadPSA(int arr[], int size);

int main() {

	system("color E1");

	const int 
		EVEN_SIZE = 97,
		ODDS_SIZE = 58,
		PRIMES_SIZE = 64,
		PSA_SIZE = 37;

	int evenNumbers[EVEN_SIZE];
	int oddNumbers[ODDS_SIZE]; 
	int primeNumbers[PRIMES_SIZE];
	int psaNumbers[PSA_SIZE];

	printBanner();

	// evenArray - DONE
	cout << "\n\nI am about call loadEvenArray ...\n";
	loadEvenArray(evenNumbers, EVEN_SIZE);
	cout << "Finished loading loadEvenArray ...\n";

	cout << "I am about to call printArray(with the default value for the perLine)...\n";
	printArray(evenNumbers, EVEN_SIZE);

	system("pause");

	// oddArray - DONE
	cout << "\nI am about call loadOddArray ...\n";
	loadOddArray(oddNumbers, ODDS_SIZE);
	cout << "Finished loading loadOddArray ...\n";

	cout << "I am about to call printArray(with 4 perLine)...\n";
	printArray(oddNumbers, ODDS_SIZE, 4);

	system("pause");

	// primeArray - DONE
	cout << "\nI am about call loadPrimeArray ...\n";
	loadPrimeArray(primeNumbers, PRIMES_SIZE);
	cout << "Finished loading loadPrimeArray ...\n";

	cout << "I am about to call printArray(with 3 perLine)...\n";
	printArray(primeNumbers, PRIMES_SIZE, 3);

	system("pause");

	cout << "\nI am about call loadPSA ...\n";
	loadPSA(psaNumbers, PSA_SIZE);
	cout << "Finished loading loadPSA ...\n";

	cout << "I am about to call printArray(with 2 perLine)...\n";
	printArray(psaNumbers, PSA_SIZE, 2);

	return 0;
}

void printBanner() // DONE
{
	cout << "\n"
		<< "\tThis is a lab on completely filled arrays\n"
		<< "\t             by B.Morillo                \n";
}

void printArray(const int arr[], int size, int perLine)  // perLine
{
	for (int index = 0; index < size; index++)
		cout << arr[index] << ((index+1) % perLine != 0 ? "\t": "\n");
	cout << "\n\n";
}

void loadEvenArray(int arr[], int size)  // DONE
{
	for (int index = 0; index < size; index++)
		arr[index] = (index + 1) * 2;
}

void loadOddArray(int arr[], int size)  // DONE
{
	for (int index = 0; index < size; index++)
		arr[index] = index + (index + 1);
}

bool isPrime(int number) // DONE
{
	for (int index = 2; index < number; index++)
		if (number % index == 0)
			return false;
	return true;
}

void loadPrimeArray(int arr[], int size) 
{
	for (int index = 0, counter = 2; index < size; index++) {
		while (!isPrime(counter)) counter++; // when I exit this loop counter is prime
		arr[index] = counter++;

		//while (!isPrime(index + counter)) {  
		//	counter++;
		//}
		//arr[index] = index + counter;   
	}
}

void loadPSA(int arr[], int size)  // DONE
{
	for (int index = 0; index < size; index++) {
		arr[index] = (index + 1) * (index + 1);
	}
}


