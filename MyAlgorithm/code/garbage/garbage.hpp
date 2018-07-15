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

	//��һ��ɫ��
	map<int, map<int, map<int, int>>> singleColor;
	for (auto i = mCard.begin(); i != mCard.end(); ++i) {
		map<int, int> tmpVec;
		sort(i->second.begin(), i->second.end());
		for (auto card : i->second) {
			tmpVec[card & 0x0f] += 1;
		}
		//��ĳ��ֵ����
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

//��ͬ��˳����
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




//******************************
//  ������ ֱ�Ӳ�������
//  ��ϸ�� 
//�������� sort_test
//  ������ vector<int>&
//����ֵ�� void
//  ʱ�䣺 2018/06/21
//  ���ߣ� Ran Jin  
//******************************
void sort_test(vector<int>&vec) {
	for (int i = 1; i != vec.size(); ++i) {
		int temp = vec[i];
		int j = i - 1;
		for (; j >= 0 && vec[j] > temp; j--) {
			vec[j + 1] = vec[j];
		}
		vec[j+1] = temp;
	}
}
//******************************
//  ������ ϣ������(��С��������)
//  ��ϸ�� 
//�������� shell_sort
//  ������ vector<int>&
//����ֵ�� void
//  ʱ�䣺 2018/06/21
//  ���ߣ� Ran Jin  
//******************************
void shell_sort(vector<int>&vec) {
	//for (int div = vec.size() / 2; div >= 1; div /= 2) {
	//	cout << endl;
	//	for (int i = 0; i <= div; ++i) {
	//		for (int j = i; j < vec.size() - div; j += div) {
	//			for (int k = j+div; k < vec.size(); k += div) {
	//				if (vec[k] < vec[j]) {
	//					vec[j] = vec[k] ^ vec[j];
	//					vec[k] = vec[j] ^ vec[k];
	//					vec[j] = vec[j] ^ vec[k];
	//				}
	//				else if (vec[k] == vec[j]) {
	//					cout << "��ͬ" << k <<","<< j << endl;
	//				}
	//			}
	//		}
	//	}
	//}

	for (int div = vec.size() / 2; div >= 1; div /= 2) {
		for (int i = 0; i <= div; ++i) {
			for (int j = i; j < vec.size() - div; j += div) {
				for (int k = j + div; k < vec.size(); k += div) {

				}
			}
		}
	}


}

//******************************
//  ������ ð������
//  ��ϸ�� 
//�������� bubble_sort
//  ������ vector<int>&
//����ֵ�� void
//  ʱ�䣺 2018/06/22
//    By�� Ran Jin  
//******************************
void bubble_sort(vector<int>&vec) {
	for (int i = 0; i < vec.size() - 1; ++i) {
		int bChange = false;
		for (int j = 0; j < vec.size() - 1 - i; ++j) {
			if (vec[j] > vec[j + 1]) {
				int temp = vec[j];
				vec[j] = vec[j + 1];
				vec[j + 1] = temp;
				bChange = true;
			}
		}
		if (bChange == false) {
			break;
		}
	}
	return;
}

//******************************
//  ������ ��������
//  ��ϸ�� 
//�������� qsort_test
//  ������ vector<int>
//����ֵ�� void
//  ʱ�䣺 2018/06/23
//    By�� Ran Jin  
//******************************
void qsort_test(vector<int>&vec,int low,int high) {
	if (low >= high)return;
	int first = low;
	int last = high;
	int key = vec[first];
	while (first < last) {
		while (first < last && vec[last] >= key)
		{
			--last;
		}
		vec[first] = vec[last];
		while (first < last && vec[first] <= key)
		{
			++first;
		}
		vec[last] = vec[first];
	}
	vec[first] = key;
	qsort_test(vec, low, first - 1);
	qsort_test(vec, first + 1, high);
}

//******************************
//  ������ ѡ������
//  ��ϸ�� 
//�������� select_sort
//  ������ 
//����ֵ�� void
//  ʱ�䣺 2018/07/09
//    By�� Ran Jin  
//******************************
void select_sort(vector<int>&vec) {
	for (int i = 0; i != vec.size()-1; ++i) {
		int num = i;
		for (int j = i + 1; j != vec.size(); ++j) {
			if (vec[num]> vec[j]) {
				num = j;
			}
		}
		if (num != i){
			int temp = vec[i];
			vec[i] = vec[num];
			vec[num] = temp;
		}
	}

}