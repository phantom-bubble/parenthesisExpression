#include<iostream>
#include<string>
#include<sstream>
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

std::string FindDeepestParenthesis(std::string tmpstr, bool option=1) {
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

std::string addtionCut(std::string tmpstr) {
	std::string outputstring1 = "";
	std::string outputstring2 = "";
	bool addFind = false;
	for (int i = 0; i < tmpstr.size(); i++) {
		if (tmpstr[i] != '+' && addFind == false) {
			outputstring1 += tmpstr[i];
		}
		if (tmpstr[i] == '+') {
			addFind = true;
		}
		if (tmpstr[i] != '+' && addFind == true) {
			outputstring2 += tmpstr[i];
		}
	}
	int outputint1;
	std::istringstream abc(outputstring1);
	abc >> outputint1;
	int outputint2;
	std::istringstream abb(outputstring2);
	abb >> outputint2;
	int outputFinal = outputint1 + outputint2;
	std::string outputstring;
	std::ostringstream aaa =std::ostringstream{outputstring};
	aaa << outputFinal;	
	outputstring = aaa.str();
	return outputstring;
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

std::string ReplaceDeepestParenthesisByString(std::string tmpstr1, std::string tmpstr2) {
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

std::string EvaulateString(std::string tmpstr) {
	return ReplaceDeepestParenthesisByString(tmpstr, addtionCut(FindDeepestParenthesis(tmpstr)));

}
