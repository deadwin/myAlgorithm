#pragma once
#include "globalData/globalData.h"
/*
Author:Ran Jin

Date:2018/08/14

Description:
709. ת����Сд��ĸ

ʵ�ֺ��� ToLowerCase()���ú�������һ���ַ������� str���������ַ����еĴ�д��ĸת����Сд��ĸ��֮�󷵻��µ��ַ�����

*/

class Solution {
public:

	/* ���⣺
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