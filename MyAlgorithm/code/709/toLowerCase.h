#pragma once
#include "globalData/globalData.h"
/*
Author:Ran Jin

Date:2018/08/14

Description:
709. 转换成小写字母

实现函数 ToLowerCase()，该函数接收一个字符串参数 str，并将该字符串中的大写字母转换成小写字母，之后返回新的字符串。

*/

class Solution {
public:

	/* 最快解：
		string toLowerCase(string str) {
		for (int i=0; i<str.length(); i++)
		{
			if (isupper(str[i]))
				str[i]=tolower(str[i]);
		}
		return str;
	}
	
	
	*/

	string toLowerCase(string str) {
		//string result = "";
		//for (const auto c:str) {
		//	//cout << c;
		//	result.push_back((c >= 'A'&&c <= 'Z' ? (c - 'A' + 'a') : (c)));
		//}
		for (int i = 0; i != str.length(); ++i) {
			str[i] = (str[i] >= 'A'&&str[i] <= 'Z' ? (str[i] - 'A' + 'a') : (str[i]));
		}
		return str;
	}
};