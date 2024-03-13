#include <iostream>
#include "calculator.h"

using std::cout;
using std::cin;
using std::endl;
// Here we define the functions that were declared in the calculator.h file.

void printMenu()
{
  cout << endl
     << "********************" << endl
     << "*   AWESOME CALC   *" << endl
     << "********************" << endl
     << "* 1) Add two nums  *" << endl
     << "* 2) Mul two nums  *" << endl
     << "* 3) Power (a^b)   *" << endl
     << "* 4) Factorial     *" << endl
     << "* 5) Check prime   *" << endl
     << "* 6) Print primes  *" << endl
     << "* 0) EXIT          *" << endl
     << "********************" << endl << endl;
}

// PURPOSE: Ask the user which of the operations they want to perform
// and return it (will ensure that the operation is valid).
int getOperationFromUser()
{
  int choice = 0;
  
  do
  {
    cout << "Make a selection: ";
    cin >> choice;
  }
  while (choice < 0 || choice > 6);
  
  return choice;
}

// PURPOSE: 
int getPositiveNumber()
{
  int number = 0;

  do
  {
    cout << "Enter a positive integer: ";
    cin >> number;
  }
  while (number < 0);

  return number;
}

int add(int num1, int num2)
{
  return num1 + num2;
}

int multiply(int num1, int num2)
{
  return num1 * num2;
}

int power(int base, int exponent)
{
  int result = 1;
  for (int i = 0; i < exponent; i++)
  {
    result *= base;
  }
  return result;
}

int factorial(int num)
{
  int result = 1;
  for (int i = 1; i <= num; i++)
  {
    result *= i;
  }
  return result;
}

bool isPrime(int num)
{
  if (num <= 1){
    return false;
  }

  for (int i = 2; i * i <= num; i++)
  {
    if (num % i == 0)
    {
      return false;
    }
  }
    return true;
}

void printPrimes(int num)
{
  for (int i = 2; i <= num; i++)
  {
    if (isPrime(i))
    {
      cout << i << " ";
    }
  }
  cout << endl;
}

// PURPOSE: Depending on the operation, do the work.
void performOperation(int operation, int number)
{
  int num1, num2, answer;
  
  switch (operation)
  {
    case 1: // Addition
      num1 = getPositiveNumber();
      num2 = getPositiveNumber();
      cout << num1 << " + " << num2 << " = " << add(num1, num2) << endl;
      break;
    case 2: // Multiplication
      num1 = getPositiveNumber();
      num2 = getPositiveNumber();
      cout << num1 << " * " << num2 << " = " << multiply(num1, num2) << endl;
      break;
    case 3: // Power
      num1 = getPositiveNumber();
      num2 = getPositiveNumber();
      cout << num1 << " ^ " << num2 << " = " << power(num1, num2) << endl;
      break;
    case 4: // Factorial
      num1 = getPositiveNumber();
      cout << num1 << "! = " << factorial(num1) << endl;
      break;
    case 5: // Check Prime
      num1 = getPositiveNumber();
      cout << num1 << " is " << (isPrime(num1) ? "" : "not ") << "prime" << endl;
      break;
    case 6: // Print Primes
      num1 = getPositiveNumber();
      cout << "Primes up to " << num1 << ": ";
      printPrimes(num1);
      break;
    default:
      cout << "Invalid operation!" << endl;
  }
}


int main()
{
  int operation = 0;
  
  do
  {
    // STEP 1: display the list of options
    printMenu();
  
    // STEP 2: determine what the user wants to do
    operation = getOperationFromUser();
  
    // STEP 3: do the work and print answer to the screen
    if (operation != 0)
    {
      performOperation(operation);
    }
  }
  while (operation != 0);

  cout << endl << endl << "THANK YOU FOR USING THE AWESOME CALCULATOR!" << endl;
  
  return 0;
}

