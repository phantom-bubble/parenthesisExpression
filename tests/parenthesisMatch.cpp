#include <parenthesisMatch.h>
#include <string>

#define ASSERT(var) if(!(var)) return -1

int main() {
  ASSERT(parenthesisMatch("()") == true);
  ASSERT(parenthesisMatch("(())") == true);
  ASSERT(parenthesisMatch("()()") == true);
  ASSERT(parenthesisMatch("(()())") == true);
  ASSERT(parenthesisMatch("()(())") == true);
  ASSERT(parenthesisMatch("(") == false);
  ASSERT(parenthesisMatch(")") == false);
  ASSERT(parenthesisMatch("(()") == false);
  ASSERT(parenthesisMatch("()(") == false);
  ASSERT(parenthesisMatch("()(()") == false);
  ASSERT(parenthesisMatch("(())(") == false);
  ASSERT(parenthesisMatch("(()()") == false);
  ASSERT(parenthesisMatch("((())") == false);
  return 0;
}
