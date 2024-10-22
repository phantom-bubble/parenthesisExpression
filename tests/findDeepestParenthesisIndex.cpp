#include <parenthesisMatch.h>
#include <string>

#define assert(var) if(!(var)) exit(-1)

int main() {
  assert(findDeepestParenthesisIndex("()") == 0);
  assert(findDeepestParenthesisIndex("(())") == 1);
  assert(findDeepestParenthesisIndex("()()") == 0);
  assert(findDeepestParenthesisIndex("()(())") == 3);
  assert(findDeepestParenthesisIndex("(1-(2+3))") == 3);
  assert(findDeepestParenthesisIndex("(1-((2*(14-2))-(14/2)))") == 7);
  assert(findDeepestParenthesisIndex(" ()") == 0);
  return 0;
}
