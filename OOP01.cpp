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
//	char name[20];
//	int finance;
//
//	cout << "����ID: ";
//	cin >> id;
//	cout << "�� ��: ";
//	cin >> name;
//	cout << "�Աݾ�: ";
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
//		cout << "����ID: ";
//		cin >> id;
//
//		for (i = 0; i < accNum; i++) {
//			if (man[i].id == id) {
//				cout << "�Աݾ�: ";
//				cin >> finance;
//				cout << "�Ա� �Ϸ�" << endl;
//
//				man[i].finance += finance;
//				break;
//			}
//		}
//		if (man[i].id == id)
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
//			if (man[i].id == id) {
//				do {
//					if (man[i].finance < finance) {
//						cout << "�ܾ� ����" << endl;
//						cout << endl;
//					}
//					cout << "��ݾ�: ";
//					cin >> finance;
//
//				} while (man[i].finance < finance);
//				
//				cout << "��� �Ϸ�" << endl;
//
//				man[i].finance -= finance;
//				return;
//			}
//		}
//		if (man[i].id == id)
//			return;
//		else
//			cout << "--�߸��� ����ID--" << endl;
//		cout << endl;
//	}
//}
//
//void AccShow(void) {
//	for (int i = 0; i < accNum; i++) {
//		cout << "----[" << i+1 << "]----" << endl;
//		cout << "����ID: " << man[i].id << endl;
//		cout << "�̸�: " << man[i].customer << endl;
//		cout << "�ܾ�: " << man[i].finance << endl;
//		cout << endl;
//	}
//}