#include <parenthesisExpression.h>
#include <string>

bool isSubtractionExpression(std::string subtraction_expression) {
  return subtraction_expression.find(" - ") != std::string::npos;
}
