#include <parenthesisExpression.h>
#include <string>

#define ASSERT(var) if(!(var)) return -1

int main() {
  ASSERT(evaluateString("1 - (2 + 3)") == "-4");
  ASSERT(evaluateString("(5 - 3)") == "2");
  ASSERT(evaluateString("(4 + 5) - (2 + 3)") == "4");
  return 0;
}
