#include <parenthesisExpression.h>
#include <string>

std::string evaluateString(std::string tmpstr) {
  std::string sub_expression = findDeepestParenthesis(tmpstr);
  if(isAdditionExpression(sub_expression))
    sub_expression = addition(sub_expression);
	return replaceDeepestParenthesisByString(tmpstr, sub_expression);
}
