#include <parenthesisExpression.h>
#include <string>

bool isAdditionExpression(std::string addition_expression) {
  return addition_expression.find(" + ") != std::string::npos;
}
