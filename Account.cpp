
/*
		Version 0.8
*/

//#include <iostream>
//#include <cstring>
//using namespace std;
//#include "BankingCommonDecl.h"
//#include "Account.h"
//
//Account::Account(int myid, String myname, int mymoney)
//	:id(myid), finance(mymoney) {
//	//customer = new char[strlen(myname) + 1];
//	//strcpy(customer, myname);
//	customer = myname;
//}
//
////Account::Account(const Account& ref)
////	: id(ref.id), finance(ref.finance) {
////	customer = new char[strlen(ref.customer) + 1];
////	strcpy(customer, ref.customer);
////}
////
////Account& Account::operator=(const Account& ref) {
////	id = ref.id;
////	finance = ref.finance;
////
////	delete[]customer;
////	customer = new char[strlen(ref.customer) + 1];
////	strcpy(customer, ref.customer);
////	return *this;
////}
//
//int Account::GetAccID() const { return id; }
//
//int Account::GetMoney() const { return finance; }
//
//double Account::Deposit(double money) {
//	finance += money;
//	return finance;
//}
//
//int Account::Withdraw(int money) {
//	if (finance < money)
//		return 0;
//	finance -= money;
//	return money;
//}
//
//void Account::ShowAccInfo() const {
//	cout << "°èÁÂID: " << id << endl;
//	cout << "ÀÌ¸§: " << customer << endl;
//	cout << "ÀÜ¾×: " << finance << endl;
//}
//
////Account::~Account() {
////	delete[]customer;
////}