#include <parenthesisMatch.h>
#include <string>

#define ASSERT(var) if(!(var)) return -1

int main() {
  ASSERT(evaluateString("1-(2+3)") == "1-5");
//  ASSERT(evaluateString("(4+5)-(2+3)") == "9-5");
  return 0;
}
