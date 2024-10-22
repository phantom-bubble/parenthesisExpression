#include <parenthesisMatch.h>
#include <string>

#define ASSERT(var) if(!(var)) return -1

int main() {
  ASSERT(replaceDeepestParenthesisByString("()", "a") == "a");
  ASSERT(replaceDeepestParenthesisByString("1+(1+1)-1", "2") == "1+2-1");
  ASSERT(replaceDeepestParenthesisByString("1+((1+1)-1)", "2") == "1+(2-1)");
  return 0;
}
