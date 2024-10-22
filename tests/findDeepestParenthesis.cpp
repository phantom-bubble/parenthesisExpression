#include <parenthesisMatch.h>
#include <string>
#include <assert.h>

int main() {
  ASSERT(findDeepestParenthesis("(1)") == "1");
  ASSERT(findDeepestParenthesis("((1))") == "1");
  ASSERT(findDeepestParenthesis("(1)(2)") == "1");
  ASSERT(findDeepestParenthesis("(1)((2))") == "2");
  return 0;
}
