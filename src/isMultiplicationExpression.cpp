#include<parenthesisExpression.h>
#include<string>

bool isMultiplicationExpression(std::string multiplication_expression){
  return multiplication_expression.find(" * ") != std::string::npos;
}
