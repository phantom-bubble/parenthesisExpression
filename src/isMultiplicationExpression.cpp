#include<parenthesisExpression.h>
#include<string>

bool isMultiplicationExpression(std::string expression){
  return expression.find(" * ") != std::string::npos;
}
