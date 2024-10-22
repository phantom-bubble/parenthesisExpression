#include <parenthesisMatch.h>
#include <string>
#include <assert.h>

int main() {
  assert(findDeepestParenthesis("(1)") == "1");
  assert(findDeepestParenthesis("((1))") == "1");
  assert(findDeepestParenthesis("(1)(2)") == "1");
  assert(findDeepestParenthesis("(1)((2))") == "2");
  assert(findDeepestParenthesis("(1+(2-4)+5)") == "2-4");
  assert(findDeepestParenthesis("(1+((1/2)*2-(2*4))+5)") == "1/2");

  assert(findDeepestParenthesis("(1)", 0) == "(1)");
  assert(findDeepestParenthesis("((1))", 0) == "(1)");
  assert(findDeepestParenthesis("(1)(2)", 0) == "(1)");
  assert(findDeepestParenthesis("(1)((2)), 0") == "(2)");
  assert(findDeepestParenthesis("(1+(2-4)+5)", 0) == "(2-4)");
  assert(findDeepestParenthesis("(1+((1/2)*2-(2*4))+5)", 0) == "(1/2)");
  return 0;
}
