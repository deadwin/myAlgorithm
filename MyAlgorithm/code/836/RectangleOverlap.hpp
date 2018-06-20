/*
Author:Ran Jin

Date:2018/06/19

Description:
*/

#pragma once
#include "globalData/globalData.h"
class RectangleOverlap
{
public:
	bool isRectangleOverlap(vector<int>& rec1, vector<int>& rec2) {
		return max(rec1[0], rec2[0]) < min(rec1[2], rec2[2]) && max(rec1[1], rec2[1]) < min(rec1[3], rec2[3]);
	}
};
