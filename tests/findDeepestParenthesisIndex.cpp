#include <parenthesisMatch.h>
#include <string>
#include <assert.h>

int main() {
  return -1;
  assert(findDeepestParenthesisIndex("()") == 0);
  assert(findDeepestParenthesisIndex("(())") == 1);
  assert(findDeepestParenthesisIndex("()()") == 0);
  assert(findDeepestParenthesisIndex("()(())") == 3);
  assert(findDeepestParenthesisIndex("(1-(2+3))") == 3);
  assert(findDeepestParenthesisIndex("(1-((2*(14-2))-(14/2)))") == 7);
  assert(findDeepestParenthesisIndex(" ()") == 0);
  return 0;
}
