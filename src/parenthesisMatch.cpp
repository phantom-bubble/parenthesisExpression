#include<iostream>
#include<string>
#include <parenthesisMatch.h>
/**
 * @brief  匹配括号
 * @param  tmpstr 待匹配的字符串
 * @return bool   匹配成功返回true，否则返回false
 */
bool parenthesisMatch(std::string tmpstr) {
	int firstparenthesis = 0;
	for (int i = 0; i < tmpstr.size(); i++) {
		if (tmpstr[i] == '(')
			firstparenthesis++;
		else if (tmpstr[i] == ')')
			firstparenthesis--;
		if (firstparenthesis < 0)
			return false;
	}
	if (firstparenthesis == 0)
		return true;
	else return false;
};

std::string findDeepestParenthesis(std::string tmpstr, bool option) {
	if (!parenthesisMatch(tmpstr))
	{
		return "error!";
	}
	int firstparenthesis = 0;
	int deepparenthesis = 0;
	std::string outputstring="";
	for (int i = 0; i < tmpstr.size(); i++) {
		if (tmpstr[i] == '(')
			firstparenthesis++;
		else if (tmpstr[i] == ')')
			firstparenthesis--;
		if (firstparenthesis >= deepparenthesis)
			deepparenthesis = firstparenthesis;
	}
	for (int i = 0; i < tmpstr.size(); i++) {
		if (tmpstr[i] == '(')
			firstparenthesis++;
		if (firstparenthesis == deepparenthesis) {
			if (tmpstr[i] != ')')
				outputstring += tmpstr[i];
			else {
				outputstring += tmpstr[i];
				if (option == 1)
				{
					outputstring.erase(outputstring.begin());
					outputstring.erase(outputstring.end()-1);
				}
				return outputstring;
			}
		}
		if (tmpstr[i] == ')')
			firstparenthesis--;
	}
	throw "error!";
}

//删除空格
std::string removeSpace(std::string tmpstr) {
	std::string outputstring = "";
	for (int i = 0; i < tmpstr.size(); i++) {
		if (tmpstr[i] != ' ') {
			outputstring += tmpstr[i];
		}
	}
	return outputstring;
}

//找到最深层括号的索引
int findDeepestParenthesisIndex(std::string tmpstr) {
	int firstparenthesis = 0;
	int deepparenthesis = 0;
	int index = 0;
	for (int i = 0; i < tmpstr.size(); i++) {
		if (tmpstr[i] == '(')
			firstparenthesis++;
		else if (tmpstr[i] == ')')
			firstparenthesis--;
		if (firstparenthesis > deepparenthesis) {
			deepparenthesis = firstparenthesis;
			index = i;
		}
	}
	return index;
}

std::string replaceDeepestParenthesisByString(std::string tmpstr1, std::string tmpstr2) {
	int BeginIndex = findDeepestParenthesisIndex(tmpstr1);
	int EndIndex = -1;
	for (int i = BeginIndex; i < tmpstr1.size(); i++) {
		if (tmpstr1[i] == ')') {
			EndIndex = i;
			break;
		}
	}
	std::string tempstring = tmpstr1.substr(0, BeginIndex) + tmpstr2 + tmpstr1.substr(EndIndex + 1);
	return tempstring;
}

std::string evaluateString(std::string tmpstr) {
	return replaceDeepestParenthesisByString(tmpstr, addition(findDeepestParenthesis(tmpstr)));

}
