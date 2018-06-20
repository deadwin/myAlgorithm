#include "globalData/globalData.h"

enum {
	MEIHUA = 0x00,
	HONGTAO = 0x10,
	FANGKUAI = 0x20,
	HEITAO = 0x30,
	JOKER = 0x40,
	LAIZI = 0x50
};

enum {
	CARD_A = 0x01,
	CARD_2 = 0x02,
	CARD_3 = 0x03,
	CARD_4 = 0x04,
	CARD_5 = 0x05,
	CARD_6 = 0x06,
	CARD_7 = 0x07,
	CARD_8 = 0x08,
	CARD_9 = 0x09,
	CARD_10 = 0x0a,
	CARD_J = 0x0b,
	CARD_Q = 0x0c,
	CARD_K = 0x0d,
	CARD_SMALL_JOKER = 0x0e,
	CARD_BIG_JOKER = 0x0f,
};



map<int, map<int, map<int, int>>> ttt(const vector<int>&vecCardValue) {
	map<int, vector<int>>mCard;
	for (auto card : vecCardValue) {
		switch (card & 0xf0)
		{
		case MEIHUA:
			cout << "meihua" << endl;
			mCard[MEIHUA].push_back(card);
			break;
		case HONGTAO:
			mCard[HONGTAO].push_back(card);
			break;
		case HEITAO:
			mCard[HEITAO].push_back(card);
			break;
		case FANGKUAI:
			mCard[FANGKUAI].push_back(card);
			break;
		case JOKER:
			mCard[JOKER].push_back(card);
			break;
		case LAIZI:
			mCard[LAIZI].push_back(card);
			break;
		default:
			break;
		}
	}

	//单一花色中
	map<int, map<int, map<int, int>>> singleColor;
	for (auto i = mCard.begin(); i != mCard.end(); ++i) {
		map<int, int> tmpVec;
		sort(i->second.begin(), i->second.end());
		for (auto card : i->second) {
			tmpVec[card & 0x0f] += 1;
		}
		//对某个值的牌
		map<int, map<int, int>>result;
		for (auto it = tmpVec.begin(); it != tmpVec.end(); ++it)
		{
			map<int, int>ivec = {};
			ivec[it->first] += 1;
			auto iter = it;
			for (iter; iter != tmpVec.end(); ++iter)
			{
				if (iter->first > it->first&&iter->first < it->first + 5) {
					ivec[iter->first] += 1;
				}
				//cout << it->first << endl;
			}
			if (it->first > CARD_10&&it->first <= CARD_K) {
				if (tmpVec[CARD_A]) {
					ivec[CARD_A] += 1;
				}
			}
			result[it->first] = ivec;
		}
		singleColor[i->first] = result;
	}

	return singleColor;
}

//求同花顺代码
void g_ths() {
	vector<int>vecCard = { 0x03,0x04,0x05,0x05,0x06,0x05,
		0x07,0x09,0x09,0x0a,0x0b,0x0c,0x01,

		0x14,0x15,0x20,0x35,0x42 };
	map<int, map<int, map<int, int>>> singleColor = ttt(vecCard);
	for (auto i = singleColor.begin(); i != singleColor.end(); ++i) {
		auto mColor = i->second;
		for (auto j = mColor.begin(); j != mColor.end(); ++j) {
			auto card = j->first^i->first;
			cout << card << ":" << j->second.size() << endl;
		}
	}
}