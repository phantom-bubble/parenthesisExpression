#include <parenthesisMatch.h>
#include <string>
#include <stdlib.h>

#ASSERT(var) if(!var) exit(-1)

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
