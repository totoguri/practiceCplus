//#include <iostream>
//using std::cout;
//using std::cin;
//using std::endl;
//
//typedef struct person {
//	int id; // 4 numbers
//	char customer[20];
//	int finance;
//} Person;
//
//void AccMake(void);
//void AccPut(void);
//void AccWith(void);
//void AccShow(void);
//
//Person man[100];
//int accNum = 0;
//
//int main(void) {
//	int num=0;
//	
//	while (num!=5) {
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
//			cout << "[계좌 개설]" << endl;
//			cout << endl;
//			AccMake();
//			cout << endl;
//			break;
//		case 2:
//			if (accNum == 0) {
//				cout << "먼저 계좌를 만들어 주세요." << endl;
//				break;
//			}
//			cout << "[입금]" << endl;
//			cout << endl;
//			AccPut();
//			cout << endl;
//			break;
//		case 3:
//			if (accNum == 0) {
//				cout << "먼저 계좌를 만들어 주세요." << endl;
//				break;
//			}
//			cout << "[출금]" << endl;
//			cout << endl;
//			AccWith();
//			cout << endl;
//			break;
//		case 4:
//			if (accNum == 0) {
//				cout << "먼저 계좌를 만들어 주세요." << endl;
//				break;
//			}
//			cout << "[계좌 정보]" << endl;
//			cout << endl;
//			AccShow();
//			cout << endl;
//			break;
//		case 5:
//			cout << "<<<<업무 종료>>>>" << endl;
//			cout << endl;
//			break;
//		}
//	}
//}
//
//void AccMake(void) {
//	int id;
//	char name[20];
//	int finance;
//
//	cout << "계좌ID: ";
//	cin >> id;
//	cout << "이 름: ";
//	cin >> name;
//	cout << "입금액: ";
//	cin >> finance;
//
//	man[accNum].id = id;
//	strcpy_s(man[accNum].customer, name);
//	man[accNum].finance = finance;
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
//		cout << "계좌ID: ";
//		cin >> id;
//
//		for (i = 0; i < accNum; i++) {
//			if (man[i].id == id) {
//				cout << "입금액: ";
//				cin >> finance;
//				cout << "입금 완료" << endl;
//
//				man[i].finance += finance;
//				break;
//			}
//		}
//		if (man[i].id == id)
//			return;
//		else
//			cout << "==잘못된 계좌ID--" << endl;
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
//		cout << "계좌ID: ";
//		cin >> id;
//	
//		for (i = 0; i < accNum; i++) {
//			if (man[i].id == id) {
//				do {
//					if (man[i].finance < finance) {
//						cout << "잔액 부족" << endl;
//						cout << endl;
//					}
//					cout << "출금액: ";
//					cin >> finance;
//
//				} while (man[i].finance < finance);
//				
//				cout << "출금 완료" << endl;
//
//				man[i].finance -= finance;
//				return;
//			}
//		}
//		if (man[i].id == id)
//			return;
//		else
//			cout << "--잘못된 계좌ID--" << endl;
//		cout << endl;
//	}
//}
//
//void AccShow(void) {
//	for (int i = 0; i < accNum; i++) {
//		cout << "----[" << i+1 << "]----" << endl;
//		cout << "계좌ID: " << man[i].id << endl;
//		cout << "이름: " << man[i].customer << endl;
//		cout << "잔액: " << man[i].finance << endl;
//		cout << endl;
//	}
//}