#pragma once
/*
		Version 0.7
*/

//#ifndef __HIGHCREDIT_ACCOUNT_H__
//#define __HIGHCREDIT_ACCOUNT_H__
//
//#include "NormalAccount.h"
//#include "String.h"
//
//class HighCreditAccount : public NormalAccount { // �ſ� �ŷ� ����
//private:
//	int grade;
//public:
//	HighCreditAccount(int myid, String myname, int mymoney, int myinterests, int mygrade)
//		:NormalAccount(myid, myname, mymoney, myinterests), grade(mygrade) {}
//
//	int GetRate() const {
//		if (grade == 1)
//			return 7 + NormalAccount::GetRate();
//		else if (grade == 2)
//			return 4 + NormalAccount::GetRate();
//		else if (grade == 3)
//			return 2 + NormalAccount::GetRate();
//	}
//	void ShowYourAcc() const {
//		cout << "[�ſ�ŷڰ���]" << endl;
//		ShowAccInfo();
//		cout << "������(%): " << NormalAccount::GetRate() << endl;
//		cout << "���(1,2,3): " << grade << "���" << endl;
//	}
//};
//#endif