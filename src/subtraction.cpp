#include <string>

std::string subtraction(std::string subtraction_expression) {
	std::string outputstring1 = "";
	std::string outputstring2 = "";
  auto subtraction_operator_index = subtraction_expression.find('-');
  std::string first_num = subtraction_expression.substr(0, subtraction_operator_index);
  std::string second_num = subtraction_expression.substr(subtraction_operator_index + 1);
  auto result = std::to_string(std::stoi(first_num) - std::stoi(second_num));
  return result;
}
