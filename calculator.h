#ifndef CALCULATOR_H

#define CALCULATOR_H

// Headers for the functions\

// Print the menu
void printMenu();

// Get the operation from the user
int getOperationFromUser();

// Get a positive number from the user
int getPositiveNumber();

// Add two numbers
int add(int num1, int num2);

// Multiply two numbers
int multiply(int num1, int num2);

// Raise a number to a power
int power(int base, int exponent);

// Calculate the factorial of a number
int factorial(int num);

// Check if a number is prime
bool isPrime(int num);

// Print all the prime numbers up to a number
void printPrimes(int num);

// Perform the operation
void performOperation(int operation, int number);

#endif