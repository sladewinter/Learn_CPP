#include "functions.h"

int main()
{
  int operand1{functions::getOperandInput(1)};
  int operand2{functions::getOperandInput(2)};
  char op{functions::getOperatorInput()};
  arithmeticFcn fcnPtr{ functions::getArithmeticFunction(op) };
  cout<<"The result is : "<<fcnPtr(operand1, operand2)<<'\n';

}
