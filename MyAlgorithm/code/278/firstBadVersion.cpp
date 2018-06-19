#include "firstBadVersion.h"
bool firstBadVersion::isBadVersion(int version)
{
	if (version >= badVersion) {
		return true;
	}
	return false;
}
int firstBadVersion::isFirstBadVersion(int n)
{
		int iMin = 1;
		int iMax = n;
		int result = iMax;
		while (iMin < iMax)
		{
			int iMid = iMin + (iMax - iMin) / 2;
			if (isBadVersion(iMid)) {
				iMax = iMid;
				result = iMid;
			}
			else {
				iMin = iMid + 1;
			}
		}
		return result;
}
