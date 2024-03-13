#include <iostream>
#include "calculator.h"

using std::cout;
using std::cin;
using std::endl;

int main()
{
  int operation = 0;
  int number = 0;

  do
  {
    printMenu();
    operation = getOperationFromUser();
    if (operation != 0)
    {
      number = getPositiveNumber();
      performOperation(operation, number);
    }
  }
  while (operation != 0);
  
  return 0;
}