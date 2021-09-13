#pragma once
/*
		Version 0.7
*/

//#ifndef __NORMAL_ACCOUNT_H__
//#define __NORMAL_ACCOUNT_H__
//
//#include <iostream>
//#include "Account.h"
//#include "String.h"
//
//using std::cout;
//using std::endl;
//
//class NormalAccount : public Account { // 보통 예금 계좌
//private:
//	int interests;
//public:
//	NormalAccount(int myid, String myname, int mymoney, int myinterests)
//		:Account(myid, myname, mymoney), interests(myinterests) {
//
//	}
//
//	int GetRate() const {
//		return interests;
//	}
//
//	void ShowYourAcc() const {
//		cout << "[보통예금계좌]" << endl;
//		ShowAccInfo();
//		cout << "이자율: " << interests << endl;
//	}
//};
//#endif