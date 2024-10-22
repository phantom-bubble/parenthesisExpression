#include <parenthesisMatch.h>
#include <string>

#define ASSERT(var) if(!(var)) exit(-1)

int main() {
  ASSERT(findDeepestParenthesisIndex("()") == 0);
  ASSERT(findDeepestParenthesisIndex("(())") == 1);
  ASSERT(findDeepestParenthesisIndex("()()") == 0);
  ASSERT(findDeepestParenthesisIndex("()(())") == 3);
  ASSERT(findDeepestParenthesisIndex("(1-(2+3))") == 3);
  ASSERT(findDeepestParenthesisIndex("(1-((2*(14-2))-(14/2)))") == 7);
  ASSERT(findDeepestParenthesisIndex(" ()") == 1);
  return 0;
}
