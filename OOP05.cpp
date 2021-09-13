//#include <iostream>
//#include <cstring>
//using std::cout;
//using std::cin;
//using std::endl;
//
//const int NAME_LEN = 20;
//
//class Account {
//private:
//	int id; // 4 numbers
//	char* customer;
//	int finance;
//public:
//	Account(int myid, char* myname, int mymoney)
//		:id(myid), finance(mymoney) {
//		customer = new char[strlen(myname) + 1];
//		strcpy(customer, myname);
//	}
//
//	Account(const Account& ref) 
//		:id(ref.id), finance(ref.finance) {
//		customer = new char[strlen(ref.customer) + 1];
//		strcpy(customer, ref.customer);
//	}
//
//	int GetAccID() const { return id; }
//
//	int LeftMoney() const { return finance; }
//
//	void Deposit(int money) {
//		finance += money;
//	}
//
//	int Withdraw(int money) {
//		if (finance < money)
//			return 0;
//		finance -= money;
//		return money;
//	}
//
//	void ShowAccInfo() const {
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
//class AccountHandler{
//private:
//	Account* man[100];
//	int accNum;
//	int i;
//public:
//	AccountHandler() : accNum(0), i(0), man{} {}
//
//	void AccMake(void) {
//		int id;
//		char name[NAME_LEN];
//		int finance;
//		cout << "[���� ����]" << endl;
//		cout << endl;
//
//		cout << "����ID: ";
//		cin >> id;
//		cout << "�� ��: ";
//		cin >> name;
//		cout << "�Աݾ�: ";
//		cin >> finance;
//
//		man[accNum] = new Account(id, name, finance);
//
//		accNum++;
//	}
//
//	void AccPut(void) {
//		int id;
//		int finance;
//
//		if (accNum == 0) {
//			cout << "���� ���¸� ����� �ּ���." << endl;
//			return;
//		}
//		cout << "[�Ա�]" << endl;
//		cout << endl;
//
//		while (true) {
//			cout << "����ID: ";
//			cin >> id;
//
//			for (i = 0; i < accNum; i++) {
//				if (man[i]->GetAccID() == id) {
//					cout << "�Աݾ�: ";
//					cin >> finance;
//					cout << "�Ա� �Ϸ�" << endl;
//
//					man[i]->Deposit(finance);
//					return;
//				}
//			}
//			
//			if(i==accNum)
//				cout << "==�߸��� ����ID--" << endl;
//			cout << endl;
//		}
//	}
//
//	void AccWith(void) {
//		int id;
//		int money;
//
//		if (accNum == 0) {
//			cout << "���� ���¸� ����� �ּ���." << endl;
//			return;
//		}
//		cout << "[���]" << endl;
//		cout << endl;
//
//		while (true) {
//			int money = 0;
//			cout << "����ID: ";
//			cin >> id;
//
//			for (i = 0; i < accNum; i++) {
//				if (man[i]->GetAccID() == id) {
//					do {
//						if (man[i]->LeftMoney() < money) {
//							cout << "�ܾ� ����" << endl;
//							cout << endl;
//						}
//						cout << "��ݾ�: ";
//						cin >> money;
//
//					} while (man[i]->LeftMoney() < money);
//
//					cout << "��� �Ϸ�" << endl;
//
//					man[i]->Withdraw(money);
//					return;
//				}
//				else {
//					break;
//				}
//			}
//			if (man[i]->GetAccID() == id)
//				return;
//			else
//				cout << "--�߸��� ����ID--" << endl;
//			cout << endl;
//		}
//	}
//
//	void AccShow(void) const {
//		if (accNum == 0) {
//			cout << "���� ���¸� ����� �ּ���." << endl;
//			return;
//		}
//
//		cout << "[���� ����]" << endl;
//		cout << endl;
//		for (int i = 0; i < accNum; i++) {
//			cout << "----[" << i + 1 << "]----" << endl;
//			man[i]->ShowAccInfo();
//			cout << endl;
//		}
//	}
//
//	~AccountHandler() {
//		for (int i = 0; i < accNum; i++)
//			delete man[i];
//	}
//};
//
//int main(void) {
//	int num=0;
//	AccountHandler manager;
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
//			manager.AccMake();
//			cout << endl;
//			break;
//		case 2:
//			manager.AccPut();
//			cout << endl;
//			break;
//		case 3:
//			manager.AccWith();
//			cout << endl;
//			break;
//		case 4:
//			manager.AccShow();
//			cout << endl;
//			break;
//		case 5:
//			cout << "<<<<���� ����>>>>" << endl;
//			cout << endl;
//			break;
//		}
//	}
//	return 0;
//}