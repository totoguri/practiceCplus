//#include <iostream>
//#include <cstring>
//using std::cout;
//using std::cin;
//using std::endl;
//
//void AccMake(void);
//void AccPut(void);
//void AccWith(void);
//void AccShow(void);
//const int NAME_LEN = 20;
//
//class Account {
//private:
//	int id; // 4 numbers
//	char* customer;
//	int finance;
//public:
//	Account(int id, char* name, int money)
//		:id(id), finance(money) {
//		customer = new char[strlen(name) + 1];
//		strcpy_s(customer, NAME_LEN+20, name);
//	}
//
//	Account(const Account& ref) 
//		:id(ref.id), finance(ref.finance) {
//		customer = new char[strlen(ref.customer) + 1];
//		strcpy_s(customer, NAME_LEN+20, ref.customer);
//	}
//
//	int GetAccID() { return id; }
//
//	int LeftMoney() { return finance; }
//
//	int Deposit(int money) {
//		finance += money;
//		return finance;
//	}
//
//	int Withdraw(int money) {
//		if (finance < money)
//			return 0;
//		finance -= money;
//		return finance;
//	}
//
//	void ShowAccInfo() {
//		cout << "����ID: " << id << endl;
//		cout << "�̸�: " << customer << endl;
//		cout << "�ܾ�: " << finance << endl;
//	}
//
//	~Account() {
//		delete[]customer;
//	}
//};
//
//Account * man[100];
//
//int accNum = 0;
//
//int main(void) {
//	int num = 0;
//
//	while (num != 5) {
//		cout << "-----Menu-----" << endl;
//		cout << "1. ���� ����" << endl;
//		cout << "2. �Ա�" << endl;
//		cout << "3. ���" << endl;
//		cout << "4. ���� ���� ��ü ���" << endl;
//		cout << "5. ���α׷� ����" << endl;
//		cout << endl;
//		cout << "����: ";
//		cin >> num;
//		cout << endl;
//
//		switch (num) {
//		case 1:
//			cout << "[���� ����]" << endl;
//			cout << endl;
//			AccMake();
//			cout << endl;
//			break;
//		case 2:
//			if (accNum == 0) {
//				cout << "���� ���¸� ����� �ּ���." << endl;
//				break;
//			}
//			cout << "[�Ա�]" << endl;
//			cout << endl;
//			AccPut();
//			cout << endl;
//			break;
//		case 3:
//			if (accNum == 0) {
//				cout << "���� ���¸� ����� �ּ���." << endl;
//				break;
//			}
//			cout << "[���]" << endl;
//			cout << endl;
//			AccWith();
//			cout << endl;
//			break;
//		case 4:
//			if (accNum == 0) {
//				cout << "���� ���¸� ����� �ּ���." << endl;
//				break;
//			}
//			cout << "[���� ����]" << endl;
//			cout << endl;
//			AccShow();
//			cout << endl;
//			break;
//		case 5:
//			cout << "<<<<���� ����>>>>" << endl;
//			cout << endl;
//			break;
//		}
//	}
//}
//
//void AccMake(void) {
//	int id;
//	char name[NAME_LEN];
//	int finance;
//
//	cout << "����ID: ";
//	cin >> id;
//	cout << "�� ��: ";
//	cin >> name;
//	cout << "�Աݾ�: ";
//	cin >> finance;
//
//	man[accNum] = new Account(id, name, finance);
//
//	accNum++;
//}
//
//void AccPut(void) {
//	int id;
//	int finance;
//
//	while (true) {
//		int i;
//		cout << "����ID: ";
//		cin >> id;
//
//		for (i = 0; i < accNum; i++) {
//			if (man[i]->GetAccID() == id) {
//				cout << "�Աݾ�: ";
//				cin >> finance;
//				cout << "�Ա� �Ϸ�" << endl;
//
//				man[i]->Deposit(finance);
//				break;
//			}
//		}
//		if (man[i]->GetAccID() == id)
//			return;
//		else
//			cout << "==�߸��� ����ID--" << endl;
//		cout << endl;
//	}
//}
//
//void AccWith(void) {
//	int id;
//	int finance;
//
//	while (true) {
//		int i;
//		int finance = 0;
//		cout << "����ID: ";
//		cin >> id;
//
//		for (i = 0; i < accNum; i++) {
//			if (man[i]->GetAccID() == id) {
//				do {
//					if (man[i]->LeftMoney() < finance) {
//						cout << "�ܾ� ����" << endl;
//						cout << endl;
//					}
//					cout << "��ݾ�: ";
//					cin >> finance;
//
//				} while (man[i]->LeftMoney() < finance);
//
//				cout << "��� �Ϸ�" << endl;
//
//				man[i]->Withdraw(finance);
//				return;
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
//void AccShow(void) {
//	for (int i = 0; i < accNum; i++) {
//		cout << "----[" << i + 1 << "]----" << endl;
//		man[i]->ShowAccInfo();
//		cout << endl;
//	}
//}