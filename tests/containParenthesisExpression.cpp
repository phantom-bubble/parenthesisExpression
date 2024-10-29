#include <parenthesisExpression.h>
#include <string>

#define ASSERT(var) if(!(var)) return -1

int main() {
  ASSERT(containParenthesisExpression("1 + 1") == false);
  ASSERT(containParenthesisExpression("(1 + 1)") == true);
  ASSERT(containParenthesisExpression("1 + (1 + 1)") == true);
  return 0;
}
