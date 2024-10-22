#include <parenthesisMatch.h>
#include <string>

#define ASSERT(var) if(!(var)) return -1

int main() {
  ASSERT(findDeepestParenthesis("(1)") == "1");
  ASSERT(findDeepestParenthesis("((1))") == "1");
  ASSERT(findDeepestParenthesis("(1)(2)") == "1");
  ASSERT(findDeepestParenthesis("(1)((2))") == "2");
  ASSERT(findDeepestParenthesis("(1+(2-4)+5)") == "2-4");
  ASSERT(findDeepestParenthesis("(1+((1/2)*2-(2*4))+5)") == "1/2");

  //ASSERT(findDeepestParenthesis("(1+((1/2)*2-(2*4))+5)", 1) == "2*4");
  for (int i = 0; i < 10; i++) {
	  std::string a = "zzzzzzzZz";
	  std::string b = a;
	  for (int j = 0; j < i; j++) {
		  b = "(" + b + ")");
		  ASSERT(findDeepestParenthesis(b) ==a);
	  }
  }

  ASSERT(findDeepestParenthesis("(1)", 0) == "(1)");
  ASSERT(findDeepestParenthesis("((1))", 0) == "(1)");
  ASSERT(findDeepestParenthesis("(1)(2)", 0) == "(1)");
  ASSERT(findDeepestParenthesis("(1)((2))", 0) == "(2)");
  ASSERT(findDeepestParenthesis("(1+(2-4)+5)", 0) == "(2-4)");
  ASSERT(findDeepestParenthesis("(1+((1/2)*2-(2*4))+5)", 0) == "(1/2)");
  return 0;
}
