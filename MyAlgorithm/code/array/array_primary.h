#pragma once
#include "globalData/globalData.h"
class Solution {
public:

	/*
		������������ɾ���ظ��
		����һ���������飬����Ҫ��ԭ��ɾ���ظ����ֵ�Ԫ�أ�ʹ��ÿ��Ԫ��ֻ����һ�Σ������Ƴ���������³��ȡ�

		��Ҫʹ�ö��������ռ䣬�������ԭ���޸��������鲢��ʹ�� O(1) ����ռ����������ɡ�
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
	������Ʊ�����ʱ�� II
	����һ�����飬���ĵ� i ��Ԫ����һ֧������Ʊ�� i ��ļ۸�

	���һ���㷨�����������ܻ�ȡ�������������Ծ����ܵ���ɸ���Ľ��ף��������һ֧��Ʊ����

	ע�⣺�㲻��ͬʱ�����ʽ��ף���������ٴι���ǰ���۵�֮ǰ�Ĺ�Ʊ����
	*/

};