#pragma once
#include "globalData/globalData.h"
class Solution {
public:

	/*
		从排序数组中删除重复项：
		给定一个排序数组，你需要在原地删除重复出现的元素，使得每个元素只出现一次，返回移除后数组的新长度。

		不要使用额外的数组空间，你必须在原地修改输入数组并在使用 O(1) 额外空间的条件下完成。
	*/
	int removeDuplicates(vector<int>& nums) {
		for (vector<int>::iterator it = nums.begin(); it != nums.end(); ++it) {
			for (vector<int>::iterator flag = it+1; flag != nums.end();) {
				if (*flag != *it)break;
				flag = nums.erase(flag);
			}
		}
		return nums.size();
	}

	/*
	买卖股票的最佳时机 II
	给定一个数组，它的第 i 个元素是一支给定股票第 i 天的价格。

	设计一个算法来计算你所能获取的最大利润。你可以尽可能地完成更多的交易（多次买卖一支股票）。

	注意：你不能同时参与多笔交易（你必须在再次购买前出售掉之前的股票）。
	*/

};