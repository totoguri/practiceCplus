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
//		cout << "계좌ID: " << id << endl;
//		cout << "이름: " << customer << endl;
//		cout << "잔액: " << finance << endl;
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
//		cout << "[계좌 개설]" << endl;
//		cout << endl;
//
//		cout << "계좌ID: ";
//		cin >> id;
//		cout << "이 름: ";
//		cin >> name;
//		cout << "입금액: ";
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
//			cout << "먼저 계좌를 만들어 주세요." << endl;
//			return;
//		}
//		cout << "[입금]" << endl;
//		cout << endl;
//
//		while (true) {
//			cout << "계좌ID: ";
//			cin >> id;
//
//			for (i = 0; i < accNum; i++) {
//				if (man[i]->GetAccID() == id) {
//					cout << "입금액: ";
//					cin >> finance;
//					cout << "입금 완료" << endl;
//
//					man[i]->Deposit(finance);
//					return;
//				}
//			}
//			
//			if(i==accNum)
//				cout << "==잘못된 계좌ID--" << endl;
//			cout << endl;
//		}
//	}
//
//	void AccWith(void) {
//		int id;
//		int money;
//
//		if (accNum == 0) {
//			cout << "먼저 계좌를 만들어 주세요." << endl;
//			return;
//		}
//		cout << "[출금]" << endl;
//		cout << endl;
//
//		while (true) {
//			int money = 0;
//			cout << "계좌ID: ";
//			cin >> id;
//
//			for (i = 0; i < accNum; i++) {
//				if (man[i]->GetAccID() == id) {
//					do {
//						if (man[i]->LeftMoney() < money) {
//							cout << "잔액 부족" << endl;
//							cout << endl;
//						}
//						cout << "출금액: ";
//						cin >> money;
//
//					} while (man[i]->LeftMoney() < money);
//
//					cout << "출금 완료" << endl;
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
//				cout << "--잘못된 계좌ID--" << endl;
//			cout << endl;
//		}
//	}
//
//	void AccShow(void) const {
//		if (accNum == 0) {
//			cout << "먼저 계좌를 만들어 주세요." << endl;
//			return;
//		}
//
//		cout << "[계좌 정보]" << endl;
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
//		cout << "1. 계좌 개설" << endl;
//		cout << "2. 입금" << endl;
//		cout << "3. 출금" << endl;
//		cout << "4. 계좌 정보 전체 출력" << endl;
//		cout << "5. 프로그램 종료" << endl;
//		cout << endl;
//		cout << "선택: ";
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
//			cout << "<<<<업무 종료>>>>" << endl;
//			cout << endl;
//			break;
//		}
//	}
//	return 0;
//}