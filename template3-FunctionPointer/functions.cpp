#include "functions.h"

#ifndef FUNCTIONS
namespace functions
{
    int getOperandInput(int op_id)
    {
      int operand{0};
      while(true)
      {
        cout<<"Enter operand ";
        if(op_id)
          cout<<op_id;
        cout<<" : ";
        cin>>operand;
        if(cin.fail())
        {
          cin.clear();
          cin.ignore(32767,'\n');
        }
        else
        {
          cin.ignore(32767,'\n');
          return operand;
        }
      }
    }

    char getOperatorInput()
    {
      char op{' '};
      while(true)
      {
        cout<<"Enter an operator(+,-,*,/) : ";
        cin>>op;
        if((op == '+')||(op == '-')||(op == '*')||(op == '/'))
        {
          cin.ignore(32767,'\n');
          return op;
        }
        else
        {
          cin.clear();
          cin.ignore(32767,'\n');
        }
      }
    }
    inline int add(int num1, int num2)
    {
      return num1 + num2;
    }
    inline int subtract(int num1, int num2)
    {
      return num1 - num2;
    }
    inline int multiply(int num1, int num2)
    {
      return num1 * num2;
    }
    inline int divide(int num1, int num2)
    {
      return num1 / num2;
    }
    arithmeticFcn getArithmeticFunction(char op)
    {
      switch (op)
      {
        case '+':
          return add;
          break;
        case '-':
          return subtract;
          break;
        case '*':
          return multiply;
          break;
        case '/':
          return divide;
          break;
      }
    }
}
#define functions
#endif
