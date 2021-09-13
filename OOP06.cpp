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
//	double finance;
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
//	int GetMoney() const { return finance; }
//
//	virtual int GetRate() const = 0;
//
//	double Deposit(double money) {
//		finance += money;
//		return finance;
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
//	virtual void ShowYourAcc() const = 0;
//
//	~Account() {
//		delete[]customer;
//	}
//};
//
//class NormalAccount : public Account { // ���� ���� ����
//private:
//	int interests;
//public:
//	NormalAccount(int myid, char* myname, int mymoney, int myinterests)
//		:Account(myid, myname, mymoney), interests(myinterests) {
//
//	}
//
//	int GetRate() const {
//		return interests;
//	}
//		
//	void ShowYourAcc() const {
//		cout << "[���뿹�ݰ���]" << endl;
//		ShowAccInfo();
//		cout << "������: " << interests << endl;
//	}
//
//
//};
//
//class HighCreditAccount : public NormalAccount { // �ſ� �ŷ� ����
//private:
//	int grade;
//public:
//	HighCreditAccount(int myid, char* myname, int mymoney, int myinterests, int mygrade)
//		:NormalAccount(myid, myname, mymoney, myinterests), grade(mygrade) {
//
//	}
//
//
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
//
//class AccountHandler{
//private:
//	Account* man[100];
//	int accNum;
//	int i;
//	int choice;
//public:
//	AccountHandler() : accNum(0), i(0), choice(0), man{} {}
//
//	void AccMake(void) {
//		int id;
//		char name[NAME_LEN];
//		int finance;
//		int rate;
//		int specialRate;
//
//		cout << "[���� ����]" << endl;
//		cout << "1. ���뿹�ݰ���" << endl;
//		cout << "2. �ſ�ŷڰ���" << endl;
//		cout << endl;
//		cout << "����: "; cin >> choice;
//
//		if (choice == 1) {
//			cout << "[���뿹�ݰ��� ����]" << endl;
//			cout << endl;
//			cout << "����ID: ";
//			cin >> id;
//			cout << "�� ��: ";
//			cin >> name;
//			cout << "�Աݾ�: ";
//			cin >> finance;
//			cout << "������: ";
//			cin >> rate;
//			
//			NormalAccount* person = new NormalAccount(id, name, finance, rate);			
//			man[accNum++] = person;
//		}
//		else if (choice == 2) {
//			cout << "[�ſ�ŷڰ��� ����]" << endl;
//			cout << endl;
//			cout << "����ID: ";
//			cin >> id;
//			cout << "�� ��: ";
//			cin >> name;
//			cout << "�Աݾ�: ";
//			cin >> finance;
//			cout << "������: ";
//			cin >> rate;
//			cout << "���(1���, 2���, 3���): ";
//			cin >> specialRate;
//
//			HighCreditAccount* person = new HighCreditAccount(id, name, finance, rate, specialRate);
//			man[accNum++] = person;
//		}
//		else {
//			cout << "�߸� �����̽��ϴ�." << endl;
//			return;
//		}
//	}
//
//	void AccPut(void) {
//		int id;
//		int myfinance;
//		double result=0;
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
//					cin >> myfinance;
//					cout << "�Ա� �Ϸ�" << endl;
//					result = myfinance + myfinance * (man[i]->GetRate()/100.0);
//					man[i]->Deposit(result);
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
//						if (man[i]->GetMoney() < money) {
//							cout << "�ܾ� ����" << endl;
//							cout << endl;
//						}
//						cout << "��ݾ�: ";
//						cin >> money;
//
//					} while (man[i]->GetMoney() < money);
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
//			man[i]->ShowYourAcc();
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