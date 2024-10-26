#pragma once

#include<string>
#include<sstream>

#ifdef WIN32
#define __EXPORT __declspec(dllexport) 
#else
#define __EXPORT 
#endif

/**
 * @brief  匹配括号
 * @param  tmpstr 待匹配的字符串
 * @return bool   匹配成功返回true，否则返回false
 */
__EXPORT bool parenthesisMatch(std::string tmpstr);

/**
 * @brief 寻找最深层括号
 * @param  tmpstr 待匹配的字符串
 * @param  option 0表示保留括号 1表示删除括号
 * @return std::string 最深层括号内的字符串
 */
__EXPORT std::string findDeepestParenthesis(std::string tmpstr, bool option=1);

/**
 * @brief 把字符串的加法表达式计算成结果
 * @param  addition_expression 待计算的字符串
 * @return string 计算结果（字符串）
 */
__EXPORT std::string addition(std::string addition_expression);

/**
 * @brief 把字符串的减法表达式计算成结果
 * @param subtraction_expression 待计算的字符串
 * @return string 计算结果（字符串）
 */
__EXPORT std::string subtraction(std::string subtraction_expression);

/**
 * @brief 把字符串的乘法表达式计算成结果
 * @param multiplication_expression 待计算的字符串	
 * @return string 计算结果（字符串）
 */
__EXPORT std::string multiplication(std::string multiplication_expression);

/**
 * @brief 把字符串的除法表达式计算成结果
 * @param division_expression 待计算的字符串
 * @return string 计算结果（字符串）
 */
__EXPORT std::string division(std::string division_expression);

//删除空格
__EXPORT std::string removeSpace(std::string tmpstr);

//找到最深层括号的索引
__EXPORT int findDeepestParenthesisIndex(std::string tmpstr);

__EXPORT std::string replaceDeepestParenthesisByString(std::string tmpstr1, std::string tmpstr2);

__EXPORT std::string evaluateString(std::string tmpstr);
