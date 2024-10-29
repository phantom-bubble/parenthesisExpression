#include <parenthesisExpression.h>
#include <string>

bool containParenthesisExpression(std::string expression) {
  if(!parenthesisMatch(expression))  
    return false;
  for(auto it : expression) 
    if(it == '(')
      return true;
  return false;
}
