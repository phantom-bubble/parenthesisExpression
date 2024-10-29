#include <parenthesisExpression.h>
#include <string>

bool isDivisionExpression(std::string division_expression) {
  return division_expression.find(" / ") != std::string::npos;
}
