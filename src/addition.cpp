#include <string>

std::string addition(std::string addition_expression) {
	std::string outputstring1 = "";
	std::string outputstring2 = "";
	auto addition_operator_index = addition_expression.find(" + ");
	std::string first_num = addition_expression.substr(0, addition_operator_index);
	std::string second_num = addition_expression.substr(addition_operator_index + 3);
	auto result = std::to_string(std::stoi(first_num) + std::stoi(second_num));
	return result;
}
