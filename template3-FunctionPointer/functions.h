/* Instead of including header files and using statements everywhere
   we just include them here and include this header in all .cpp files instead */

#include "definitions.h"

using std::cin;
using std::cout;
using arithmeticFcn = std::function<int(int, int)>;

namespace functions
{
    int getOperandInput(int op_id = 0);
    char getOperatorInput();
    int add(int num1, int num2);
    int subtract(int num1, int num2);
    int multiply(int num1, int num2);
    int divide(int num1, int num2);
    arithmeticFcn getArithmeticFunction(char op);
}
