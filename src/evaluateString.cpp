#include <parenthesisExpression.h>
#include <string>

std::string evaluateString(std::string expression) {
  if(!containParenthesisExpression(expression)) {
    if(isAdditionExpression(expression))
      expression = addition(expression);
    else if(isSubtractionExpression(expression))
      expression = subtraction(expression);
    else if (isMultiplicationExpression(expression))
        expression = multiplication(expression);
    else if (isDivisionExpression(expression))
        expression = division(expression);
    return expression;
  }
  std::string sub_expression = findDeepestParenthesis(expression);
  if(isAdditionExpression(sub_expression))
    sub_expression = addition(sub_expression);
  else if(isSubtractionExpression(sub_expression))
    sub_expression = subtraction(sub_expression);
  else if (isMultiplicationExpression(sub_expression))
      sub_expression = multiplication(sub_expression);
  else if (isDivisionExpression(sub_expression))
      sub_expression = division(sub_expression);
  expression = replaceDeepestParenthesisByString(expression, sub_expression);
  return evaluateString(expression);
}
