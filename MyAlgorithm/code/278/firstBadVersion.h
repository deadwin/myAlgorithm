/*
Author:Ran Jin

Date:2018/06/19

Description:
*/
#pragma once
static int badVersion = 1702766719;
	class firstBadVersion {
	public:
		//传入bad版本号
		int isFirstBadVersion(int n);
	private:
		//错误的版本号
		bool isBadVersion(int version);
	};