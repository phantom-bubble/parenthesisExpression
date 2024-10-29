#include <parenthesisExpression.h>
#include <string>

std::string evaluateString(std::string tmpstr) {
  if(!containParenthesisExpression(tmpstr)) {
    std::string sub_expression = findDeepestParenthesis(tmpstr);
    if(isAdditionExpression(sub_expression))
      sub_expression = addition(sub_expression);
    else if(isSubtractionExpression(sub_expression))
      sub_expression = subtraction(sub_expression);
    return replaceDeepestParenthesisByString(tmpstr, sub_expression);
  }
  std::string sub_expression = findDeepestParenthesis(tmpstr);
  if(isAdditionExpression(sub_expression))
    sub_expression = addition(sub_expression);
  else if(isSubtractionExpression(sub_expression))
    sub_expression = subtraction(sub_expression);
  tmpstr = replaceDeepestParenthesisByString(tmpstr, sub_expression);
  return evaluateString(tmpstr);
}
