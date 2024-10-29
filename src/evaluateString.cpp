#include <parenthesisExpression.h>
#include <string>

std::string evaluateString(std::string expression) {
  if(!containParenthesisExpression(expression)) {
    if(isAdditionExpression(expression))
      expression = addition(expression);
    else if(isSubtractionExpression(expression))
      expression = subtraction(expression);
    return expression;
  }
  std::string sub_expression = findDeepestParenthesis(expression);
  if(isAdditionExpression(sub_expression))
    sub_expression = addition(sub_expression);
  else if(isSubtractionExpression(sub_expression))
    sub_expression = subtraction(sub_expression);
  expression = replaceDeepestParenthesisByString(expression, sub_expression);
  return evaluateString(expression);
}
