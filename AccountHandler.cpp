
/*
		Version 0.7
*/

//#include "BankingCommonDecl.h"
//#include "AccountHandler.h"
//#include "Account.h"
//#include "NormalAccount.h"
//#include "HighCreditAccount.h"
//#include "String.h"
//
//using std::cout;
//using std::endl;
//using std::cin;
//
//AccountHandler::AccountHandler() : accNum(0), i(0), choice(0), man{} {}
//
//void AccountHandler::AccMake(void) {
//	int id;
//	//char name[NAME_LEN];
//	String name;
//	int finance;
//	int rate;
//	int specialRate;
//
//	cout << "[계좌 개설]" << endl;
//	cout << "1. 보통예금계좌" << endl;
//	cout << "2. 신용신뢰계좌" << endl;
//	cout << endl;
//	cout << "선택: "; cin >> choice;
//
//	if (choice == 1) {
//		cout << "[보통예금계좌 개설]" << endl;
//		cout << endl;
//		cout << "계좌ID: ";
//		cin >> id;
//		cout << "이 름: ";
//		cin >> name;
//		cout << "입금액: ";
//		cin >> finance;
//		cout << "이자율: ";
//		cin >> rate;
//
//		NormalAccount* person = new NormalAccount(id, name, finance, rate);
//		man[accNum++] = person;
//	}
//	else if (choice == 2) {
//		cout << "[신용신뢰계좌 개설]" << endl;
//		cout << endl;
//		cout << "계좌ID: ";
//		cin >> id;
//		cout << "이 름: ";
//		cin >> name;
//		cout << "입금액: ";
//		cin >> finance;
//		cout << "이자율: ";
//		cin >> rate;
//		cout << "등급(1등급, 2등급, 3등급): ";
//		cin >> specialRate;
//
//		HighCreditAccount* person = new HighCreditAccount(id, name, finance, rate, specialRate);
//		man[accNum++] = person;
//	}
//	else {
//		cout << "잘못 누르셨습니다." << endl;
//		return;
//	}
//}
//
//void AccountHandler::AccPut(void) {
//	int id;
//	int myfinance;
//	double result = 0;
//
//	if (accNum == 0) {
//		cout << "먼저 계좌를 만들어 주세요." << endl;
//		return;
//	}
//	cout << "[입금]" << endl;
//	cout << endl;
//
//	while (true) {
//		cout << "계좌ID: ";
//		cin >> id;
//
//		for (i = 0; i < accNum; i++) {
//			if (man[i]->GetAccID() == id) {
//				cout << "입금액: ";
//				cin >> myfinance;
//				cout << "입금 완료" << endl;
//				result = myfinance + myfinance * (man[i]->GetRate() / 100.0);
//				man[i]->Deposit(result);
//				return;
//			}
//		}
//
//		if (i == accNum)
//			cout << "==잘못된 계좌ID--" << endl;
//		cout << endl;
//	}
//}
//
//void AccountHandler::AccWith(void) {
//	int id;
//	int money;
//
//	if (accNum == 0) {
//		cout << "먼저 계좌를 만들어 주세요." << endl;
//		return;
//	}
//	cout << "[출금]" << endl;
//	cout << endl;
//
//	while (true) {
//		int money = 0;
//		cout << "계좌ID: ";
//		cin >> id;
//
//		for (i = 0; i < accNum; i++) {
//			if (man[i]->GetAccID() == id) {
//				do {
//					if (man[i]->GetMoney() < money) {
//						cout << "잔액 부족" << endl;
//						cout << endl;
//					}
//					cout << "출금액: ";
//					cin >> money;
//
//				} while (man[i]->GetMoney() < money);
//
//				cout << "출금 완료" << endl;
//
//				man[i]->Withdraw(money);
//				return;
//			}
//			else {
//				break;
//			}
//		}
//		if (man[i]->GetAccID() == id)
//			return;
//		else
//			cout << "--잘못된 계좌ID--" << endl;
//		cout << endl;
//	}
//}
//
//void AccountHandler::AccShow(void) const {
//	if (accNum == 0) {
//		cout << "먼저 계좌를 만들어 주세요." << endl;
//		return;
//	}
//
//	cout << "[계좌 정보]" << endl;
//	cout << endl;
//	for (int i = 0; i < accNum; i++) {
//		cout << "----[" << i + 1 << "]----" << endl;
//		man[i]->ShowYourAcc();
//		cout << endl;
//	}
//}
//
//AccountHandler::~AccountHandler() {
//	for (int i = 0; i < accNum; i++)
//		delete man[i];
//}