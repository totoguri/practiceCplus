
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
//	cout << "[���� ����]" << endl;
//	cout << "1. ���뿹�ݰ���" << endl;
//	cout << "2. �ſ�ŷڰ���" << endl;
//	cout << endl;
//	cout << "����: "; cin >> choice;
//
//	if (choice == 1) {
//		cout << "[���뿹�ݰ��� ����]" << endl;
//		cout << endl;
//		cout << "����ID: ";
//		cin >> id;
//		cout << "�� ��: ";
//		cin >> name;
//		cout << "�Աݾ�: ";
//		cin >> finance;
//		cout << "������: ";
//		cin >> rate;
//
//		NormalAccount* person = new NormalAccount(id, name, finance, rate);
//		man[accNum++] = person;
//	}
//	else if (choice == 2) {
//		cout << "[�ſ�ŷڰ��� ����]" << endl;
//		cout << endl;
//		cout << "����ID: ";
//		cin >> id;
//		cout << "�� ��: ";
//		cin >> name;
//		cout << "�Աݾ�: ";
//		cin >> finance;
//		cout << "������: ";
//		cin >> rate;
//		cout << "���(1���, 2���, 3���): ";
//		cin >> specialRate;
//
//		HighCreditAccount* person = new HighCreditAccount(id, name, finance, rate, specialRate);
//		man[accNum++] = person;
//	}
//	else {
//		cout << "�߸� �����̽��ϴ�." << endl;
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
//		cout << "���� ���¸� ����� �ּ���." << endl;
//		return;
//	}
//	cout << "[�Ա�]" << endl;
//	cout << endl;
//
//	while (true) {
//		cout << "����ID: ";
//		cin >> id;
//
//		for (i = 0; i < accNum; i++) {
//			if (man[i]->GetAccID() == id) {
//				cout << "�Աݾ�: ";
//				cin >> myfinance;
//				cout << "�Ա� �Ϸ�" << endl;
//				result = myfinance + myfinance * (man[i]->GetRate() / 100.0);
//				man[i]->Deposit(result);
//				return;
//			}
//		}
//
//		if (i == accNum)
//			cout << "==�߸��� ����ID--" << endl;
//		cout << endl;
//	}
//}
//
//void AccountHandler::AccWith(void) {
//	int id;
//	int money;
//
//	if (accNum == 0) {
//		cout << "���� ���¸� ����� �ּ���." << endl;
//		return;
//	}
//	cout << "[���]" << endl;
//	cout << endl;
//
//	while (true) {
//		int money = 0;
//		cout << "����ID: ";
//		cin >> id;
//
//		for (i = 0; i < accNum; i++) {
//			if (man[i]->GetAccID() == id) {
//				do {
//					if (man[i]->GetMoney() < money) {
//						cout << "�ܾ� ����" << endl;
//						cout << endl;
//					}
//					cout << "��ݾ�: ";
//					cin >> money;
//
//				} while (man[i]->GetMoney() < money);
//
//				cout << "��� �Ϸ�" << endl;
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
//			cout << "--�߸��� ����ID--" << endl;
//		cout << endl;
//	}
//}
//
//void AccountHandler::AccShow(void) const {
//	if (accNum == 0) {
//		cout << "���� ���¸� ����� �ּ���." << endl;
//		return;
//	}
//
//	cout << "[���� ����]" << endl;
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