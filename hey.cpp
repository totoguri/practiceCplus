#include <iostream>

//int main(void) {
//	
//	int val1;
//	std::cout << "First Number: ";
//	std::cin >> val1;
//
//	int val2;
//	std::cout << "Second Number: ";
//	std::cin >> val2;
//
//	int result = val1 + val2;
//	std::cout << "Result: " << result << std::endl;
//	return 0;
//
//}

/*int main(void) {
	int val1, val2;
	int result = 0;
	std::cout << "Two numbers: ";
	std::cin >> val1 >> val2;

	std::cout << "Arrays of numbers: ";
	if (val1 < val2) {
		for (int i = val1 + 1; i < val2; i++) {
			std::cout << i << " ";
			result += i;
		}
		std::cout << std::endl;
	}
	else {
		for (int i = val2 + 1; i < val1; i++) {
			std::cout << i << " ";
			result += i;
		}
		std::cout << std::endl;
	}
	
	std::cout << "Numbers between these two numbers: " << result << std::endl;
	return 0;
}*/

//int main(void) {
//
//	char name[100];
//	char lang[200];
//
//	std::cout << "What is your name? ";
//	std::cin >> name;
//
//	std::cout << "What is your favourite programming language? ";
//	std::cin >> lang;
//
//	std::cout << "My name is " << name << ".\n";
//	std::cout << "My favourite language is " << lang << "." << std::endl;
//	return 0;
//
//} 

//int main(void) { // 01-1
//	int val;
//	int result = 0;
//
//	for (int i = 0; i < 5; i++) {
//		std::cout << i+1 << "번째 정수 입력: ";
//		std::cin >> val;
//		result += val;
//	}
//
//	std::cout << "합계: " << result << std::endl;
//	return 0;
//}

// 01-1-02
//int main(void) {
//	char name[100];
//	char num[100];
//
//	std::cout << "Your name: ";
//	std::cin >> name;
//
//	std::cout << "Your phone number: ";
//	std::cin >> num;
//
//	std::cout << std::endl;
//
//	std::cout << "Your name : " << name << std::endl;
//	std::cout << "Your number: " << num << std::endl;
//	
//	return 0;
//}

// 01-1-3
//int main(void) {
//	int num;
//	int result = 0;
//
//	std::cin >> num;
//	for (int i = 1; i < 10; i++) {
//		std::cout << num << " x " << i << " = " << num * i << std::endl;
//	}
//	
//	return 0;
//}

// 01-1-4

//int main(void) {
//	int num;
//	double result = 0;
//	while (true) {
//		std::cout << "Type money you earned this month: ";
//		std::cin >> num;
//
//		if (num < 0) {
//			std::cout << "It can't be!!" << std::endl;
//			continue;
//		}
//		else if(num == 0) {
//			std::cout << "You're fired!" << std::endl;
//			break;
//		}
//		else if (num > 0) {
//			result = num*0.12;
//			std::cout << "Your salary of this month: " << 50 + result << std::endl;
//		}
//	}
//
//	return 0;
//}

//void MyFunc(void) {
//	std::cout << "MyFunc(void) called" << std::endl;
//}
//
//void MyFunc(char c) {
//	std::cout << "MyFunc(char c) called" << std::endl;
//}
//
//void MyFunc(int a, int b) {
//	std::cout << "MyFunc(int a, int b) called" << std::endl;
//}
//
//int main(void) {
//	MyFunc();
//	MyFunc('A');
//	MyFunc(12, 13);
//	return 0;
//}

// 01-2
//void swap(int * a, int * b) {
//	int temp= *a;
//	*a = *b;
//	*b = temp;
//}
//
//void swap(char *a, char *b) {
//	char temp= *a;
//	*a = *b;
//	*b = temp;
//}
//
//void swap(double* a, double* b) {
//	double temp= *a;
//	*a = *b;
//	*b = temp;
//}
//
//
//int main(void) {
//	int num1 = 20, num2 = 30;
//	swap(&num1, &num2);
//	std::cout << num1 << ' ' << num2 << std::endl;
//
//	char ch1 = 'A', ch2 = 'Z';
//	swap(&ch1, &ch2);
//	std::cout << ch1 << ' ' << ch2 << std::endl;
//
//	double db11 = 1.111, db12 = 5.555;
//	swap(&db11, &db12);
//	std::cout << db11 << ' ' << db12 << std::endl;
//	return 0;
//}

//int Adder(int num1 = 1, int num2 = 2) {
//	return num1 + num2;
//}
//
//int main(void) {
//	std::cout << Adder() << std::endl;
//	std::cout << Adder(5) << std::endl;
//	std::cout << Adder(3, 5) << std::endl;
//	return 0;
//}

// 01-3-1
//int BoxVolume(int length, int width, int height) {
//	return length * width * height;
//}
//
//int BoxVolume(int length, int width) {
//	return length * width;
//}
//
//int BoxVolume(int length) {
//	return length;
//}
//
//int main(void) {
//	std::cout << "[3, 3, 3] : " << BoxVolume(3, 3, 3) << std::endl;
//	std::cout << "[5, 5, D] : " << BoxVolume(5, 5) << std::endl;
//	std::cout << "[7, D, D] : " << BoxVolume(7) << std::endl;
//	// std::cout << "[D, D, D] : " << BoxVolume() << std::endl;
//	return 0;
//}

//inline int SQUARE(int x) {
//	return x * x;
//}
//
//int main(void) {
//	std::cout << SQUARE(5) << std::endl;
//	std::cout << SQUARE(12) << std::endl;
//	return 0;
//}

//template <typename T>
//inline T SQUARE(T x) {
//	return x * x;
//}
//
//int main(void) {
//	std::cout << SQUARE(5.5) << std::endl;
//	std::cout << SQUARE(12) << std::endl;
//	return 0;
//}

//namespace BestCom {
//	void SimpleFunc(void) {
//		std::cout << "BestCom" << std::endl;
//	}
//}
//
//namespace ProgCom {
//	void SimpleFunc(void) {
//		std::cout << "ProgCom" << std::endl;
//	}
//}
//
//int main(void) {
//	BestCom::SimpleFunc();
//	ProgCom::SimpleFunc();
//	return 0;
//}

//namespace BestCom {
//	void SimpleFunc(void);
//}
//
//namespace ProgCom {
//	void SimpleFunc(void);
//}
//
//int main(void) {
//	BestCom::SimpleFunc();
//	ProgCom::SimpleFunc();
//	return 0;
//}
//
//void BestCom::SimpleFunc(void) {
//	std::cout << "BestCom" << std::endl;
//}
//
//void ProgCom::SimpleFunc(void) {
//	std::cout << "ProgCom" << std::endl;
//}

//namespace BestCom {
//	void SimpleFunc(void);
//}
//
//namespace BestCom {
//	void PrettyFunc(void);
//}
//
//namespace ProgCom {
//	void SimpleFunc(void);
//}
//
//int main(void) {
//	BestCom::SimpleFunc();
//	return 0;
//}
//
//void BestCom::SimpleFunc(void) {
//	std::cout << "BestCom Function" << std::endl;
//	PrettyFunc();
//	ProgCom::SimpleFunc();
//}
//
//void BestCom::PrettyFunc(void) {
//	std::cout << "So Pretty" << std::endl;
//}
//
//void ProgCom::SimpleFunc(void) {
//	std::cout << "ProgCom Function" << std::endl;
//}

//namespace Hybrid {
//	void HybFunc(void) {
//		std::cout << "So simple function!" << std::endl;
//		std::cout<<"In namespace Hybrid!"<<std::endl;
//	}
//}
//
//int main(void) {
//	using Hybrid::HybFunc;
//	HybFunc();
//	return 0;
//}

//using namespace std;
//
//int main(void) {
//	int num = 20;
//	cout << "Hello World" << endl;
//	cout << "Hello " << "World" << endl;
//	cout << num << ' ' << 'A';
//	cout << ' ' << 3.14 << endl;
//	return 0;
//}

//using namespace std;
//
//namespace AAA {
//	namespace BBB {
//		namespace CCC {
//			int num1;
//			int num2;
//		}
//	}
//}
//
//int main(void) {
//	AAA::BBB::CCC::num1 = 20;
//	AAA::BBB::CCC::num2 = 30;
//
//	namespace ABC = AAA::BBB::CCC;
//	cout << ABC::num1 << endl;
//	cout << ABC::num2 << endl;
//	return 0;
//}

//using std::cout;
//using std::cin;
//using std::endl;
//
//int main(void) {
//	int num = 10;
//	int i = 0;
//
//	cout << "true: " << true << endl;
//	cout << "false: " << false << endl;
//
//	while (true) {
//		cout << i++ << ' ';
//		if (i > num)
//			break;
//	}
//	cout << endl;
//
//	cout << "sizeof 1: " << sizeof(1) << endl;
//	cout << "sizeof 0: " << sizeof(0) << endl;
//	cout << "sizeof true: " << sizeof(true) << endl;
//	cout << "sizeof false: " << sizeof(false) << endl;
//	return 0;
//}

//bool IsPositive(int num) {
//	if (num <= 0)
//		return false;
//	else
//		return true;
//}
//
//int main(void) {
//	bool isPos;
//	int num;
//	std::cout << "Input number: ";
//	std::cin >> num;
//
//	isPos = IsPositive(num);
//	if (isPos)
//		std::cout << "Positive number" << std::endl;
//	else
//		std::cout << "Negative number" << std::endl;
//
//	return 0;
//}

//using std::cout;
//using std::endl;
//
//int main(void) {
//	int num1 = 1020;
//	int &num2 = num1;
//
//	num2 = 3047;
//	cout << "VAL: " << num1 << endl;
//	cout << "REF: " << num2 << endl;
//
//	cout << "VAL: " << &num1 << endl;
//	cout << "REF: " << &num2 << endl;
//	return 0;
//}

//using std::cout;
//using std::endl;
//
//int main(void) {
//	int arr[3] = { 1, 3, 5 };
//	int& ref1 = arr[0];
//	int& ref2 = arr[1];
//	int& ref3 = arr[2];
//
//	cout << ref1 << endl;
//	cout << ref2 << endl;
//	cout << ref3 << endl;
//	return 0;
//}

//using std::cout;
//using std::endl;
//
//int main(void) {
//	int num = 12;
//	int* ptr = &num;
//	int** dptr = &ptr;
//
//	int& ref = num;
//	int* (&pref) = ptr;
//	int** (&dpref) = dptr;
//
//	cout << ref << endl;
//	cout << *pref << endl;
//	cout << **dpref << endl;
//	return 0;
//}

//using std::cout;
//using std::endl;
//
//void SwapByRef2(int& ref1, int& ref2) {
//	int temp = ref1;
//	ref1 = ref2;
//	ref2 = temp;
//}
//
//int main(void) {
//	int val1 = 10;
//	int val2 = 20;
//
//	SwapByRef2(val1, val2);
//	cout << "val1: " << val1 << endl;
//	cout << "val2: " << val2 << endl;
//	return 0;
//}

// 02-1-1
//
//using std::cout;
//using std::endl;
//
//int Plus(int& a) {
//	return a+1;
//}
//
//int Rev(int& a) {
//	return -a;
//}
//
//int main(void) {
//	int num = 10;
//	cout << Plus(num) << endl;
//	cout << Rev(num) << endl;
//	return 0;
//}

// 02-1-3
//void SwapPointer(int *(&ref1), int *(&ref2)) {
//	int* temp = ref1;
//	ref1 = ref2;
//	ref2 = temp;
//}
//
//int main(void) {
//	int num1 = 5;
//	int* ptr1 = &num1;
//	int num2 = 10;
//	int* ptr2 = &num2;
//
//	SwapPointer(ptr1, ptr2);
//
//	std::cout << *ptr1 << std::endl;
//	std::cout << *ptr2 << std::endl;
//
//	return 0;
//}

//using std::cout;
//using std::endl;
//
//int& RefRetFuncOne(int& ref) {
//	ref++;
//	return ref;
//}
//
//int main(void) {
//	int num1 = 1;
//	int &num2 = RefRetFuncOne(num1);
//
//	num1++;
//	num2++;
//	cout << "num: " << num1 << endl;
//	cout << "num2: " << num2 << endl;
//	return 0;
//}

//int& RefRetFuncOne(int& ref) {
//	ref++;
//	return ref;
//}
//
//int main(void) {
//	int num1 = 1;
//	int num2 = RefRetFuncOne(num1);
//
//	num1 += 1;
//	num2 += 100;
//	std::cout << "num1: " << num1 << std::endl;
//	std::cout << "num2: " << num2 << std::endl;
//
//	return 0;
//}

//int RefRetFuncTwo(int& ref) {
//	ref++;
//	return ref;
//}
//
//int main(void) {
//	int num1 = 1;
//	int num2 = RefRetFuncTwo(num1);
//
//	num1 += 1;
//	num2 += 100;
//	std::cout << "num1: " << num1 << std::endl;
//	std::cout << "num2: " << num2 << std::endl;
//
//	return 0;
//}

// 02-2
//int main(void) {
//	const int num = 12;
//	const int* ptr = &num;
//	const int* (&ref) = ptr;
//
//	std::cout << *ptr << std::endl;
//	std::cout << *ref << std::endl;
//	
//	return 0;
//}

//#include <cstring>
//#include <cstdlib>
//using std::cout;
//using std::endl;
//
//char* MakeStrAdr(int len) {
//	char* str = (char*)malloc(sizeof(char) * len);
//	return str;
//}
//
//int main(void) {
//	char * str = MakeStrAdr(20);
//	strcpy_s(str, "I am so happy~");					// 해결책 필요
//	cout << str << endl;
//	free(str);
//	return 0;
//}

//#include <stdio.h>
//#include <string.h>
//
//char * MakeStrAdr(int len) {
//	char * str = new char[len];
//	return str;
//}
//
//int main(void) {
//	char* str = MakeStrAdr(20);
//	strcpy_s(str, 20, "happy");
//	std::cout << str << std::endl;
//	//free(str);
//	delete[]str;
//	return 0;
//}

// 02-3
//typedef struct __Point {
//	int xpos;
//	int ypos;
//} Point;
//
//Point& PntAdder(const Point& p1, const Point& p2) {
//	Point* pptr = new Point;
//	pptr->xpos = p1.xpos + p2.xpos;
//	pptr->ypos = p1.ypos + p2.ypos;
//	return *pptr;
//}
//
//
//int main(void) {
//	Point* pptr1 = new Point;
//	pptr1->xpos = 3;
//	pptr1->ypos = 30;
//
//	Point* pptr2 = new Point;
//	pptr2->xpos = 70;
//	pptr2->ypos = 7;
//
//	Point& pref = PntAdder(*pptr1, *pptr2);
//	std::cout << "[" << pref.xpos << ", " << pref.ypos << "]" << std::endl;
//
//	delete pptr1;
//	delete pptr2;
//	delete& pref;
//	return 0;
//
//}

//typedef struct __point {
//	int xpos;
//	int ypos;
//} Point;
//
//Point& PntAdder(const Point& p1, const Point& p2) {
//	Point* pptr = new Point;
//	pptr->xpos = p1.xpos + p2.xpos;
//	pptr->ypos = p1.ypos + p2.ypos;
//	return *pptr;
//}
//
//int main(void) {
//	Point* ptr1 = new Point;
//	Point* ptr2 = new Point;
//
//	ptr1->xpos = 3;
//	ptr1->ypos = 30;
//
//	ptr2->xpos = 70;
//	ptr2->ypos = 7;
//
//	Point &ref = PntAdder(*ptr1, *ptr2);
//	
//	std::cout << ref.xpos << std::endl;
//	std::cout << ref.ypos << std::endl;
//	
//	return 0;
//}

//#include <cmath>
//#include <cstdio>
//#include <cstring>
//using namespace std;
//
//int main(void) {
//	char str1[] = "Result";
//	char str2[30];
//
//	strcpy_s(str2, str1);
//	printf("%s: %f \n", str1, sin(0.14));
//	printf("%s: %f \n", str2, abs(-1.25));
//	return 0;
//}

//#include <cstring>
//#include <ctime>
//#include <cstdlib>
//
//int main(void) {
//	char str1[20] = "Happy ";
//	char str2[20];
//	char str3[20] = "Time";
//
//	strcpy_s(str2, str1);
//	std::cout << str2 << std::endl;
//
//	strcat_s(str1, str3);
//	std::cout << str1 << std::endl;
//
//	std::cout << strlen(str1) << std::endl;
//	std::cout << strcmp(str1, str2) << std::endl;;
//	
//	srand(time(NULL));
//	std::cout << rand()%100 << std::endl;
//	return 0;
//}

//using std::cout;
//using std::endl;
//
//#define ID_LEN 20
//#define MAX_SPD 200
//#define FUEL_STEP 2
//#define ACC_STEP 10
//#define BRK_STEP 10
//
//struct Car {
//	char gamerID[ID_LEN]; // ID
//	int fuelGauge;
//	int curSpeed;
//};
//
//void ShowCarState(const Car& car) {
//	cout << "소유자ID: " << car.gamerID << endl;
//	cout << "연료량: " << car.fuelGauge << "%" << endl;
//	cout << "현재속도: " << car.curSpeed << "km/s" << endl << endl;
//}
//
//void Accel(Car& car) {
//	if (car.fuelGauge <= 0)
//		return;
//	else
//		car.fuelGauge -= FUEL_STEP;
//
//	if (car.curSpeed + ACC_STEP >= MAX_SPD) {
//		car.curSpeed = MAX_SPD;
//		return;
//	}
//
//	car.curSpeed += ACC_STEP;
//}
//
//void Break(Car& car) {
//	if (car.curSpeed < BRK_STEP) {
//		car.curSpeed = 0;
//		return;
//	}
//
//	car.curSpeed -= BRK_STEP;
//}
//
//int main(void) {
//	Car run99 = { "run99", 100, 0 };
//	Accel(run99);
//	Accel(run99);
//	ShowCarState(run99);
//	Break(run99);
//	ShowCarState(run99);
//
//	Car sped77 = { "sped77", 100, 0 };
//	Accel(sped77);
//	Break(sped77);
//	ShowCarState(sped77);
//	return 0;
//}

//using std::cout;
//using std::endl;
//
//struct Point {
//	int xpos;
//	int ypos;
//
//	void MovePos(int x, int y) {
//		xpos += x;
//		ypos += y;
//	}
//
//	void AddPoint(const Point& pos) {
//		xpos += pos.xpos;
//		ypos += pos.ypos;
//	}
//
//	void ShowPosition() {
//		cout << "[" << xpos << ", " << ypos << "]" << endl;
//	}
//};
//
//int main(void) {
//	Point pos1 = { 12, 4 };
//	Point pos2 = { 20, 30 };
//
//	pos1.MovePos(-7, 10);
//	pos1.ShowPosition();
//
//	pos1.AddPoint(pos2);
//	pos1.ShowPosition();
//	return 0;
//}

//using std::cout;
//using std::endl;
//
//namespace CAR_CONST {
//	enum {
//		ID_LEN = 20,
//		MAX_SPD = 200,
//		FUEL_STEP = 2,
//		ACC_STEP = 10,
//		BRK_STEP = 10
//	};
//}
//
//struct Car {
//	char gamerID[CAR_CONST::ID_LEN];
//	int fuelGauge;
//	int curSpeed;
//
//	void ShowCarState() {
//		cout << "소유자ID: " << gamerID << endl;
//		cout << "연료량: " << fuelGauge << "%" << endl;
//		cout << "현재속도: " << curSpeed << "km/s" << endl << endl;
//	}
//
//	void Accel() {
//		if (fuelGauge <= 0)
//			return;
//		else
//			fuelGauge -= CAR_CONST::FUEL_STEP;
//
//		if ((curSpeed + CAR_CONST::ACC_STEP) >= CAR_CONST::MAX_SPD) {
//			curSpeed = CAR_CONST::MAX_SPD;
//			return;
//		}
//
//		curSpeed = +CAR_CONST::ACC_STEP;
//	}
//	
//	void Break() {
//		if (curSpeed < CAR_CONST::BRK_STEP) {
//			curSpeed = 0;
//			return;
//		}
//
//		curSpeed -= CAR_CONST::BRK_STEP;
//	}
//};
//
//int main(void) {
//	Car run99 = { "run99", 100, 0 };
//	run99.Accel();
//	run99.Accel();
//	run99.ShowCarState();
//	run99.Break();
//	run99.ShowCarState();
//
//	Car sped77 = { "sped77", 100, 0 };
//	sped77.Accel();
//	sped77.Break();
//	sped77.ShowCarState();
//	return 0;
//}

//#include <cstring>
//using std::cout;
//using std::endl;
//
//namespace CAR_CONST {
//	enum {
//		ID_LEN=20, MAX_SPD=200, FUEL_STEP=2,
//		ACC_STEP=10, BRK_STEP=10
//	};
//}
//
//class Car {
//private:
//	char gamerID[CAR_CONST::ID_LEN];
//	int fuelGauge;
//	int curSpeed;
//public:
//	void InitMembers(const char* ID, int fuel);
//	void ShowCarState();
//	void Accel();
//	void Break();
//};
//
//void Car::InitMembers(const char* ID, int fuel) {
//	strcpy_s(gamerID, ID);
//	fuelGauge = fuel;
//	curSpeed = 0;
//}
//
//void Car::ShowCarState() {
//	cout << "UserID: " << gamerID << endl;
//	cout << "FuelGauge: " << fuelGauge << "%" << endl;
//	cout << "CurrentSpeed: " << curSpeed << "km/s" << endl << endl;
//}
//
//void Car::Accel() {
//	if (fuelGauge <= 0)
//		return;
//	else
//		fuelGauge -= CAR_CONST::FUEL_STEP;
//
//	if ((curSpeed + CAR_CONST::ACC_STEP) >= CAR_CONST::MAX_SPD) {
//		curSpeed = CAR_CONST::ACC_STEP;
//		return;
//	}
//	curSpeed += CAR_CONST::ACC_STEP;
//}
//
//void Car::Break() {
//	if (curSpeed < CAR_CONST::BRK_STEP) {
//		curSpeed = 0;
//		return;
//	}
//	curSpeed -= CAR_CONST::BRK_STEP;
//}
//
//int main(void) {
//	Car run99;
//	run99.InitMembers("run99", 100);
//	run99.Accel();
//	run99.Accel();
//	run99.Accel();
//	run99.ShowCarState();
//	run99.Break();
//	run99.ShowCarState();
//	return 0;
//}

// 03-2-1

//using std::cout;
//using std::endl;
//
//class Calculator {
//private:
//	double num1, num2;
//	double result;
//	int countA;
//	int countM;
//	int countL;
//	int countD;
//
//public:
//	void Init();
//	double Add(double num1, double num2);
//	double Min(double num1, double num2);
//	double Mul(double num1, double num2);
//	double Div(double num1, double num2);
//	void ShowOpCount();
//};
//
//void Calculator::Init() {
//	countA = 0;
//	countM = 0;
//	countL = 0;
//	countD = 0;
//}
//
//double Calculator::Add(double num1, double num2) {
//	result = num1 + num2;
//	countA++;
//	return result;
//}
//
//double Calculator::Min(double num1, double num2) {
//	result = num1 - num2;
//	countM++;
//	return result;
//}
//
//double Calculator::Mul(double num1, double num2) {
//	result = num1 * num2;
//	countL++;
//	return result;
//}
//
//double Calculator::Div(double num1, double num2) {
//	result = num1 / num2;
//	countD++;
//	return result;
//}
//
//void Calculator::ShowOpCount() {
//	cout << "<Count>" << endl;
//	cout << "ADD: " << countA << endl;
//	cout << "Min: " << countM << endl;
//	cout << "Mul: " << countL << endl;
//	cout << "Div: " << countD << endl;
//}
//
//int main(void) {
//	Calculator cal;
//	cal.Init();
//	cout << "3.2 + 2.4 = " << cal.Add(3.2, 2.4) << endl;
//	cout << "3.5 / 1.7 = " << cal.Div(3.5, 1.7) << endl;
//	cout << "2.2 - 1.5 = " << cal.Min(2.2, 1.5) << endl;
//	cout << "4.9 / 1.2 = " << cal.Div(4.9, 1.2) << endl;
//	cal.ShowOpCount();
//	return 0;
//}

// 03-2-2
//#include <cstring>
//
//class Printer {
//private:
//	char str1[20];
//public:
//	void SetString(const char* str);
//	void ShowString();
//};
//
//void Printer::SetString(const char* str) {
//	strcpy_s(str1, str);
//}
//
//void Printer::ShowString() {
//	std::cout << str1 << std::endl;
//}
//
//int main(void) {
//	Printer pnt;
//	pnt.SetString("Hello World");
//	pnt.ShowString();
//
//	pnt.SetString("I love C++");
//	pnt.ShowString();
//	return 0;
//}

//using std::cout;
//using std::endl;
//
//class FruitSeller {
//private:
//	int APPLE_PRICE;
//	int numOfApples;
//	int myMoney;
//
//public:
//	bool InitMembers(int price, int num, int money) {
//		if (price < 0 || num < 0 || money < 0) {
//			cout << "불가능한 값 전달" << endl;
//			return false;
//		}
//
//		APPLE_PRICE = price;
//		numOfApples = num;
//		myMoney = money;
//
//		return true;
//	}
//
//	int SaleApples(int money) {
//		if (money < 0) {
//			cout << "불가능한 값 전달" << endl;
//			return 0;
//		}
//		int num = money / APPLE_PRICE;
//		numOfApples -= num;
//		myMoney += money;
//		return num;
//	}
//
//	void ShowSalesResult() const {
//		cout << "남은 사과: " << numOfApples << endl;
//		cout << "판매 수익: " << myMoney << endl << endl;
//	}
//};
//
//class FruitBuyer {
//private:
//	int myMoney;
//	int numOfApples;
//
//public:
//	bool InitMembers(int money) {
//		if (money < 0) {
//			cout << "불가능한 값 전달" << endl;
//			return false;
//		}
//
//		myMoney = money;
//		numOfApples = 0;
//
//		return true;
//	}
//
//	void BuyApples(FruitSeller& seller, int money) {
//		if (money < 0) {
//			cout << "불가능한 값 전달" << endl;
//			return;
//		}
//		numOfApples += seller.SaleApples(money);
//		myMoney -= money;
//	}
//
//	void ShowBuyResult() const {
//		cout << "현재 잔액: " << myMoney << endl;
//		cout << "사과 개수: " << numOfApples << endl << endl;
//	}
//};
//
//int main(void) {
//	FruitSeller seller;
//	seller.InitMembers(1000, 20, 0);
//	FruitBuyer buyer;
//	buyer.InitMembers(5000);
//	buyer.BuyApples(seller, 2000);
//
//	cout << "과일 판매자의 현황" << endl;
//	seller.ShowSalesResult();
//	cout << "과일 구매자의 현황" << endl;
//	buyer.ShowBuyResult();
//	return 0;
//}

//using std::cout;
//using std::endl;
//
//class Point {
//public:
//	int x;
//	int y;
//};
//
//class Rectangle {
//public:
//	Point upLeft;
//	Point lowRight;
//
//public:
//	void ShowRecInfo() {
//		cout << "좌 상단: " << '[' << upLeft.x << ", ";
//		cout << upLeft.y << ']' << endl;
//		cout << "우 하단: " << '[' << lowRight.x << ", ";
//		cout << lowRight.y << ']' << endl << endl;
//	}
//};
//
//int main(void) {
//	Point pos1 = { -2, 4 };
//	Point pos2 = { 5, 9 };
//	Rectangle rec = { pos2, pos1 };
//	rec.ShowRecInfo();
//	return 0;
//}

//using std::cout;
//using std::endl;
//
//class SinivelCap {
//public:
//	void Take() const { cout << "콧물이 싹~ 납니다." << endl; }
//};
//
//class SneezeCap {
//public:
//	void Take() const { cout << "재채기가 멎습니다." << endl; }
//};
//
//class SnuffleCap {
//public:
//	void Take() const { cout << "코가 뻥 뚫립니다." << endl; }
//};
//
//class ColdPatient {
//public:
//	void TakeSinivelCap(const SinivelCap& cap) const { cap.Take(); }
//	void TakeSneezeCap(const SneezeCap& cap) const { cap.Take(); }
//	void TakeSnuffleCap(const SnuffleCap& cap) const { cap.Take(); }
//};
//
//int main(void) {
//	SinivelCap scap;
//	SneezeCap zcap;
//	SnuffleCap ncap;
//
//	ColdPatient sufferer;
//	sufferer.TakeSinivelCap(scap);
//	sufferer.TakeSneezeCap(zcap);
//	sufferer.TakeSnuffleCap(ncap);
//	return 0;
//}

//using std::cout;
//using std::endl;
//
//class SinivelCap {
//public:
//	void Take() const { cout << "콧물이 싹~ 납니다." << endl; }
//};
//
//class SneezeCap {
//public:
//	void Take() const { cout << "재채기가 멎습니다." << endl; }
//};
//
//class SnuffleCap {
//public:
//	void Take() const { cout << "코가 뻥 뚫립니다." << endl; }
//};
//
//class CONTAC600 {
//private:
//	SinivelCap sin;
//	SneezeCap sne;
//	SnuffleCap snu;
//
//public:
//	void Take() const {
//		sin.Take();
//		sne.Take();
//		snu.Take();
//	}
//};
//
//class ColdPatient {
//public:
//	void TakeCONTAC600(const CONTAC600& cap) const { cap.Take(); }
//};
//
//int main(void) {
//	CONTAC600 cap;
//	ColdPatient sufferer;
//	sufferer.TakeCONTAC600(cap);
//	return 0;
//}

//using std::cout;
//using std::endl;
//
//class Point {
//private:
//	int xpos, ypos;
//public:
//	Point(int x, int y): xpos(x), ypos(y) {}
//
//	void ShowPointInfo() const {
//		cout << "[" << xpos << ", " << ypos << "]" << endl;
//	}
//};
//
//class Circle {
//private:
//	int rad;
//	Point point;
//public:
//	Circle(int x, int y, int r): point(x, y) {
//		rad = r;
//	}
//	void ShowCircleInfo() {
//		point.ShowPointInfo();
//		cout << "Radius: " << rad << endl;
//	}
//};
//
//class Ring {
//private:
//	Circle circle1;
//	Circle circle2;
//public:
//	Ring(int x1, int y1, int r1, int x2, int y2, int r2): circle1(x1, y1, r1), circle2(x2, y2, r2) {}
//	void ShowRingInfo() {
//		cout << "Inner Circle Info..." << endl;
//		circle1.ShowCircleInfo();
//		cout << "Outter Circle Info..." << endl;
//		circle2.ShowCircleInfo();
//	}
//};
//
//int main(void) {
//	Ring ring(1, 1, 4, 2, 2, 9);
//	ring.ShowRingInfo();
//	return 0;
//}

//using std::cout;
//using std::endl;
//
//class SimpleClass {
//private:
//	int num1;
//	int num2;
//public:
//	SimpleClass() {
//		num1 = 0;
//		num2 = 0;
//	}
//	SimpleClass(int n) {
//		num1 = n;
//		num2 = 0;
//	}
//	SimpleClass(int n1, int n2) {
//		num1 = n1;
//		num2 = n2;
//	}
//
//	void SHowData() const {
//		cout << num1 << ' ' << num2 << endl;
//	}
//};
//
//int main(void) {
//	SimpleClass sc1;
//	sc1.SHowData();
//
//	SimpleClass sc2(100);
//	sc2.SHowData();
//
//	SimpleClass sc3(100, 200);
//	sc3.SHowData();
//	return 0;
//}

//using std::cout;
//using std::endl;
//
//class SimpleClass {
//private:
//	int num1;
//	int num2;
//public:
//	SimpleClass(int n1 = 0, int n2 = 0) {
//		num1 = n1;
//		num2 = n2;
//	}
//	void ShowData() const {
//		cout << num1 << ' ' << num2 << endl;
//	}
//};
//
//int main(void) {
//	SimpleClass sc1();
//	SimpleClass mysc = sc1();
//	mysc.ShowData();
//	return 0;
//}
//
//SimpleClass sc1() {
//	SimpleClass sc(20, 30);
//	return sc;
//}

//using std::cout;
//using std::endl;
//
//class FruitSeller {
//private:
//	int APPLE_PRICE;
//	int numOfApples;
//	int myMoney;
//public:
//	FruitSeller(int price, int num, int money) {
//		APPLE_PRICE = price;
//		numOfApples = num;
//		myMoney = money;
//	}
//	int SaleApples(int money) {
//		int num = money / APPLE_PRICE;
//		numOfApples -= num;
//		myMoney += money;
//		return num;
//	}
//	void ShowSalesResult() const {
//		cout << "남은 사과: " << numOfApples << endl;
//		cout << "판매 수익: " << myMoney << endl << endl;
//	}
//};
//
//class FruitBuyer {
//private:
//	int myMoney;
//	int numOfApples;
//public:
//	FruitBuyer(int money) {
//		myMoney = money;
//		numOfApples = 0;
//	}
//	void BuyApples(FruitSeller& seller, int money) {
//		numOfApples += seller.SaleApples(money);
//		myMoney -= money;
//	}
//	void ShowBuyResult() const {
//		cout << "현재 잔액: " << myMoney << endl;
//		cout << "사과 개수: " << numOfApples << endl << endl;
//	}
//};
//
//int main(void) {
//	FruitSeller seller(1000, 20, 0);
//	FruitBuyer buyer(5000);
//	buyer.BuyApples(seller, 2000);
//
//	cout << "과일 판매자의 현황" << endl;
//	seller.ShowSalesResult();
//	cout << "과일 구매자의 현황" << endl;
//	buyer.ShowBuyResult();
//	return 0;
//}

//using std::cout;
//using std::endl;
//
//class AAA {
//public:
//	AAA() {
//		cout << "empty object" << endl;
//	}
//	void ShowYourName() {
//		cout << "I'm class AAA" << endl;
//	}
//};
//
//class BBB {
//private:
//	AAA& ref;
//	const int& num;
//public:
//	BBB(AAA& r, const int& n)
//		: ref(r), num(n) {}
//	void ShowYourName() {
//		ref.ShowYourName();
//		cout << "and" << endl;
//		cout << "I ref num " << num << endl;
//	}
//};
//
//int main(void) {
//	AAA obj1;
//	BBB obj2(obj1, 20);
//	obj2.ShowYourName();
//	return 0;
//}

//using std::cout;
//using std::endl;
//
//class AAA {
//private:
//	int num;
//public:
//	AAA() :num(0) {}
//	AAA& CreateInitObj(int n) const {
//		AAA* ptr = new AAA(n);
//		return *ptr;
//	}
//	void ShowNum() const { cout << num << endl; }
//private:
//	AAA(int n) : num(n) {}
//};
//
//int main(void) {
//	AAA base;
//	base.ShowNum();
//
//	AAA& obj1 = base.CreateInitObj(3);
//	obj1.ShowNum();
//
//	AAA& obj2 = base.CreateInitObj(12);
//	obj2.ShowNum();
//
//	delete& obj1;
//	delete& obj2;
//	return 0;
//}

//#include <cstring>
//using std::cout;
//using std::endl;
//
//class Person {
//private:
//	char* name;
//	int age;
//public:
//	Person(const char* myname, int myage) {  // 예제랑 다르게 const 추가
//		int len = strlen(myname) + 1;
//		name = new char[len];
//		strcpy_s(name, len, myname);
//		age = myage;
//	}
//	void ShowPersonInfo() const {
//		cout << "이름: " << name << endl;
//		cout << "나이: " << age << endl;
//	}
//	~Person() {
//		delete[]name;
//		cout << "called destructor!" << endl;
//	}
//};
//
//int main(void) {
//	Person man1("Lee dong woo", 29);
//	Person man2("Jang dong gun", 41);
//	man1.ShowPersonInfo();
//	man2.ShowPersonInfo();
//	return 0;
//}

// 04-3-2
//#include <cstring>
//using std::cout;
//using std::endl;
//
//namespace COMP_POS {
//	enum {
//		CLERK,
//		SENIOR,
//		ASSIST,
//		MANAGER
//	};
//
//	void ShowPositionInfo(int pos) {
//		switch (pos) {
//		case CLERK:
//			cout << "사원" << endl;
//			break;
//		case SENIOR:
//			cout << "주임" << endl;
//			break;
//		case ASSIST:
//			cout << "대리" << endl;
//			break;
//		case MANAGER:
//			cout << "과장" << endl;
//		}
//	}
//}
//
//class NameCard {
//private:
//	char* name;
//	char* company;
//	char* phone;
//	int position;
//public:
//	NameCard(const char* sur, const char* comp, const char* num, int pos) :position(pos) {
//		int len = strlen(sur) + 1;
//		name = new char[len];
//		strcpy_s(name, len, sur);
//
//		len = strlen(comp)+1;
//		company = new char[len];
//		strcpy_s(company, len, comp);
//
//		len = strlen(num) + 1;
//		phone = new char[len];
//		strcpy_s(phone, len, num);
//	}
//
//	NameCard(const NameCard& copy)
//		: position(copy.position) {
//		int len = strlen(copy.name) + 1;
//		name = new char[len];
//		strcpy_s(name, len, copy.name);
//
//		len = strlen(copy.company) + 1;
//		company = new char[len];
//		strcpy_s(company, len, copy.company);
//
//		len = strlen(copy.phone) + 1;
//		phone = new char[len];
//		strcpy_s(phone, len, copy.phone);
//	}
//
//	void ShowNameCardInfo() {
//		cout << "이름: " << name << endl;
//		cout << "회사: " << company << endl;
//		cout << "번호: " << phone << endl;
//		cout << "직급: ";  
//		COMP_POS::ShowPositionInfo(position);
//		cout << endl;
//	}
//
//	~NameCard() {
//		delete[]name;
//		delete[]company;
//		delete[]phone;
//	}
//};
//
//int main(void) {
//	NameCard manClerk("Lee", "ABCEng", "010-1111-2222", COMP_POS::CLERK);
//	NameCard copy1 = manClerk;
//	NameCard manSenior("Hong", "OrangeEng", "010-3333-4444", COMP_POS::SENIOR);
//	NameCard copy2 = manSenior;
//	copy1.ShowNameCardInfo();
//	copy2.ShowNameCardInfo();
//
//	return 0;
//}

//#include <cstring>
//using std::cout;
//using std::endl;
//using std::cin;
//
//class Person {
//private:
//	char* name;
//	int age;
//public:
//	Person(char* myname, int myage) {
//		int len = strlen(myname) + 1;
//		name = new char[len];
//		strcpy_s(name, len, myname);
//		age = myage;
//	}
//	Person() {
//		name = NULL;
//		age = 0;
//		cout << "called Person()" << endl;
//	}
//	void SetPersonInfo(char* myname, int myage) {
//		name = myname;
//		age = myage;
//	}
//	void ShowPersonInfo() const {
//		cout << "이름: " << name << ", ";
//		cout << "나이: " << age << endl;
//	}
//	~Person() {
//		delete[]name;
//		cout << "called destructor!" << endl;
//	}
//};
//
//int main(void) {
//	Person parr[3];
//	char namestr[100];
//	char* strptr;
//	int age;
//	int len;
//
//	for (int i = 0; i < 3; i++) {
//		cout << "이름: ";
//		cin >> namestr; cout<<endl;
//		cout << "나이: ";
//		cin >> age; cout << endl;
//		len = strlen(namestr) + 1;
//		strptr = new char[len];
//		strcpy_s(strptr, len, namestr);
//		parr[i].SetPersonInfo(strptr, age);
//	}
//
//	parr[0].ShowPersonInfo();
//	parr[1].ShowPersonInfo();
//	parr[2].ShowPersonInfo();
//	return 0;
//}

//#include <cstring>
//using std::cout;
//using std::endl;
//using std::cin;
//
//class Person {
//private:
//	char* name;
//	int age;
//public:
//	Person(char* myname, int myage) {
//		int len = strlen(myname) + 1;
//		name = new char[len];
//		strcpy_s(name, len, myname);
//		age = myage;
//	}
//	Person() {
//		name = NULL;
//		age = 0;
//		cout << "called Person()" << endl;
//	}
//	void SetPersonInfo(char* myname, int myage) {
//		name = myname;
//		age = myage;
//	}
//	void ShowPersonInfo() const {
//		cout << "이름: " << name << ", ";
//		cout << "나이: " << age << endl;
//	}
//	~Person() {
//		delete[]name;
//		cout << "called destructor!" << endl;
//	}
//};
//
//int main(void) {
//	Person* parr[3];
//	char namestr[100];
//	int age;
//	
//	for (int i = 0; i < 3; i++) {
//		cout << "이름: ";
//		cin >> namestr; 
//		cout << "나이: ";
//		cin >> age; 
//		parr[i] = new Person(namestr, age);
//	}
//
//	parr[0]->ShowPersonInfo();
//	parr[1]->ShowPersonInfo();
//	parr[2]->ShowPersonInfo();
//	delete parr[0];
//	delete parr[1];
//	delete parr[2];
//	return 0;
//}

//#include <cstring>
//using std::cout;
//using std::endl;
//using std::cin;
//
//class SoSimple {
//private:
//	int num;
//public:
//	SoSimple(int n) : num(n) {
//		cout << "num=" << num << ", ";
//		cout << "address=" << this << endl;
//	}
//	void ShowSimpleData() {
//		cout << num << endl;
//	}
//	SoSimple* GetThisPointer() {
//		return this;
//	}
//};
//
//int main(void) {
//	SoSimple sim1(100);
//	SoSimple* ptr1 = sim1.GetThisPointer();
//	cout << ptr1 << ", ";
//	ptr1->ShowSimpleData();
//
//	SoSimple sim2(200);
//	SoSimple* ptr2 = sim2.GetThisPointer();
//	cout << ptr2 << ", ";
//	ptr2->ShowSimpleData();
//	return 0;
//}

//using std::cout;
//using std::endl;
//using std::cin;
//
//class TwoNumber {
//private:
//	int num1;
//	int num2;
//public:
//	TwoNumber(int num1, int num2) {
//		this->num1 = num1;
//		this->num2 = num2;
//	}
//	void ShowTwoNumber() {
//		cout << this->num1 << endl;
//		cout << this->num2 << endl;
//	}
//};
//
//int main(void) {
//	TwoNumber two(2, 4);
//	two.ShowTwoNumber();
//	return 0;
//}

//using std::cout;
//using std::endl;
//using std::cin;
//
//class SelfRef {
//private:
//	int num;
//public:
//	SelfRef(int n) : num(n) {
//		cout << "객체생성" << endl;
//	}
//	SelfRef& Adder(int n) {
//		num += n;
//		return *this;
//	}
//	SelfRef& ShowTwoNumber() {
//		cout << num << endl;
//		return *this;
//	}
//};
//
//int main(void) {
//	SelfRef obj(3);
//	SelfRef& ref = obj.Adder(2);
//
//	obj.ShowTwoNumber();
//	ref.ShowTwoNumber();
//
//	ref.Adder(1).ShowTwoNumber().Adder(2).ShowTwoNumber();
//	return 0;
//}

//using std::cout;
//using std::endl;
//
//class SoSimple {
//private:
//	int num1;
//	int num2;
//public:
//	SoSimple(int n1, int n2)
//		: num1(n1), num2(n2) {
//		// empty
//	}
//
//	SoSimple(SoSimple& copy)
//		: num1(copy.num1), num2(copy.num2) {
//		cout << "Called SoSimple(SoSimple &copy)" << endl;
//	}
//
//	void ShowSimpleData() {
//		cout << num1 << endl;
//		cout << num2 << endl;
//	}
//};
//
//int main(void) {
//	SoSimple sim1(15, 30);
//	cout << "생성 및 초기화 직전" << endl;
//	SoSimple sim2 = sim1;
//	cout << "생성 및 초기화 직후" << endl;
//	sim2.ShowSimpleData();
//	return 0;
//}

//#include <cstring>          // Debugging Error
//using std::cout;
//using std::endl;
//
//class Person {
//private:
//	char* name;
//	int age;
//public:
//
//	Person(const char* myname, int myage) {
//		int len = strlen(myname) + 1;
//		name = new char[len];
//		strcpy_s(name, len, myname);
//		age = myage;
//	}
//
//	Person(const Person& copy) :age(copy.age) {
//		int len = strlen(copy.name) + 1;
//		name = new char[len];
//		strcpy_s(name, len, copy.name);
//	}
//
//	void ShowPersonInfo() const {
//		cout << "이름: " << name << endl;
//		cout << "나이: " << age << endl;
//	}
//
//	~Person() {
//		delete[]name;
//		cout << "called destructor!" << endl;
//	}
//};
//
//int main(void) {
//	Person man1("Lee dong woo", 29);
//	Person man2 = man1;
//	man1.ShowPersonInfo();
//	man2.ShowPersonInfo();
//	return 0;
//}

//using std::cout;
//using std::endl;
//
//class SoSimple {
//private:
//	int num;
//public:
//	SoSimple(int n) : num(n) {}
//	SoSimple(const SoSimple& copy) : num(copy.num) {
//		cout << "Called SoSimple(const SoSimple& copy)" << endl;
//	}
//	void ShowData() {
//		cout << "num: " << num << endl;
//	}
//};
//
//void SimpleFuncOb(SoSimple ob) {
//	ob.ShowData();
//}
//
//int main(void) {
//	SoSimple obj(7);
//	cout << "함수호출 전" << endl;
//	SimpleFuncOb(obj);
//	cout << "함수호출 후" << endl;
//	return 0;
//}

//using std::cout;
//using std::endl;
//
//class SoSimple {
//private:
//	int num;
//public:
//	SoSimple(int n) : num(n) {}
//	SoSimple(const SoSimple& copy) : num(copy.num) {
//		cout<<"Called SoSimple(const SoSimple& copy)"<<endl;
//	}
//	SoSimple& AddNum(int n) {
//		num += n;
//		return *this;
//	}
//	void ShowData() {
//		cout << "num: " << num << endl;
//	}
//};
//
//SoSimple SimpleFuncObj(SoSimple ob) {
//	cout << "return 이전" << endl;
//	return ob;
//}
//
//int main(void) {
//	SoSimple obj(7);
//	SimpleFuncObj(obj).AddNum(30).ShowData();
//	obj.ShowData();
//	return 0;
//}

//using std::cout;
//using std::endl;
//
//class Temporary {
//private:
//	int num;
//public:
//	Temporary(int n) :num(n) {
//		cout << "creat obj: " << num << endl;
//	}
//	~Temporary() {
//		cout << "destroy obj: " << num << endl;
//	}
//	void ShowTempInfo() {
//		cout << "My num is " << num << endl;
//	}
//};
//
//int main(void) {
//	Temporary(100);
//	cout << "********** after make!" << endl << endl;
//
//	Temporary(200).ShowTempInfo();
//	cout<<"********** after make!"<<endl<<endl;
//
//	const Temporary& ref = Temporary(300);
//	cout << "********** end of main!" << endl << endl;
//	return 0;
//}

//using std::cout;
//using std::endl;
//
//class SoSimple {
//private:
//	int num;
//public:
//	SoSimple(int n) : num(n) {
//		cout << "New Object: " << this << endl;
//	}
//
//	SoSimple(const SoSimple& copy) : num(copy.num) {
//		cout << "New Copy obj: " << this << endl;
//	}
//
//	~SoSimple() {
//		cout << "Destroy obj: " << this << endl;
//	}
//};
//
//SoSimple SimpleFuncObj(SoSimple ob) {
//	cout << "Parm ADR: " << &ob << endl;
//	return ob;
//}
//
//int main(void) {
//	SoSimple obj(7);
//	SimpleFuncObj(obj);
//
//	cout << endl;
//	SoSimple tempRef = SimpleFuncObj(obj);
//	cout << "Return obj " << &tempRef << endl;
//	return 0;
//}

//using std::cout;
//using std::endl;
//
//class SoSimple {
//private:
//	int num;
//public:
//	SoSimple(int n) :num(n) { }
//	SoSimple& Addnum(int n) {
//		num += n;
//		return *this;
//	}
//	void ShowData() const {
//		cout << "num: " << num << endl;
//	}
//};
//
//int main(void) {
//	const SoSimple obj(7);
//	// obj.Addnum(20);
//	obj.ShowData();
//	return 0;
//}

//using std::cout;
//using std::endl;
//
//class SoSimple {
//private:
//	int num;
//public:
//	SoSimple(int n) :num(n) { }
//	SoSimple& AddNum(int n) {
//		num += n;
//		return *this;
//	}
//
//	void SimpleFunc() {
//		cout << "SimpleFunc: " << num << endl;
//	}
//
//	void SimpleFunc() const {
//		cout << "const SimpleFunc: " << num << endl;
//	}
//};
//
//void YourFunc(const SoSimple& obj) {
//	obj.SimpleFunc();
//}
//
//int main(void) {
//	SoSimple obj1(2);
//	const SoSimple obj2(7);
//
//	obj1.SimpleFunc();
//	obj2.SimpleFunc();
//
//	YourFunc(obj1);
//	YourFunc(obj2);
//	return 0;
//}

//using std::cout;
//using std::endl;
//
//class Girl;
//
//class Boy {
//private:
//	int height;
//	friend class Girl;
//public:
//	Boy(int len) : height(len) { }
//	void ShowYourFriendInfo(Girl & frn);
//};
//
//class Girl {
//private:
//	char phNum[20];
//public:
//	Girl(const char* num) {
//		strcpy_s(phNum, 20, num);
//	}
//	void ShowYourFriendInfo(Boy& frn);
//	friend class Boy;
//};
//
//void Boy::ShowYourFriendInfo(Girl& frn) {
//	cout << "Her phone number: " << frn.phNum << endl;
//}
//
//void Girl::ShowYourFriendInfo(Boy& frn) {
//	cout << "His height: " << frn.height << endl;
//}
//
//int main(void) {
//	Boy boy(170);
//	Girl girl("010-1234-5678");
//	boy.ShowYourFriendInfo(girl);
//	girl.ShowYourFriendInfo(boy);
//	return 0;
//}

//using std::cout;
//using std::endl;
//
//class Point;
//
//class PointOP {
//private:
//	int opcnt;
//public:
//	PointOP() : opcnt(0) { }
//	Point PointAdd(const Point&, const Point&);
//	Point PointSub(const Point&, const Point&);
//	~PointOP() {
//		cout << "Operation times: " << opcnt << endl;
//	}
//};
//
//class Point {
//private:
//	int x;
//	int y;
//public:
//	Point(const int& xpos, const int& ypos) : x(xpos), y(ypos) { }
//	friend Point PointOP::PointAdd(const Point&, const Point&);
//	friend Point PointOP::PointSub(const Point&, const Point&);
//	friend void ShowPointPos(const Point&);
//};
//
//Point PointOP::PointAdd(const Point& pnt1, const Point& pnt2) {
//	opcnt++;
//	return Point(pnt1.x + pnt2.x, pnt1.y + pnt2.y);
//}
//
//Point PointOP::PointSub(const Point& pnt1, const Point& pnt2) {
//	opcnt++;
//	return Point(pnt1.x - pnt2.x, pnt1.y - pnt2.y);
//}
//
//int main(void) {
//	Point pos1(1, 2);
//	Point pos2(2, 4);
//	PointOP op;
//
//	ShowPointPos(op.PointAdd(pos1, pos2));
//	ShowPointPos(op.PointSub(pos2, pos1));
//	return 0;
//}
//
//void ShowPointPos(const Point& pos) {
//	cout << "x: " << pos.x << ", ";
//	cout << "y: " << pos.y << endl;
//}

//using std::cout;
//using std::endl;
//
//void Counter() {
//	static int cnt;
//	cnt++;
//	cout << "Current cnt: " << cnt << endl;
//}
//
//int main(void) {
//	for (int i = 0; i < 10; i++)
//		Counter();
//	return 0;
//}
//

//using std::cout;
//using std::endl;
//
//class SoSimple {
//private:
//	static int simObjCnt;
//public:
//	SoSimple() {
//		simObjCnt++;
//		cout << simObjCnt << "번째 SoSimple 객체" << endl;
//	}
//};
//int SoSimple::simObjCnt = 0; // static 멤버변수를 메모리 공간에 0으로 한 번 초기화
//
//class SoComplex {
//private:
//	static int cmxObjCnt;
//public:
//	SoComplex() {
//		cmxObjCnt++;
//		cout << cmxObjCnt << "번째 SoComplex 객체" << endl;
//	}
//
//	SoComplex(SoComplex& copy) {
//		cmxObjCnt++;
//		cout << cmxObjCnt << "번째 SoComplex 객체" << endl;
//	}
//};
//int SoComplex::cmxObjCnt = 0;
//
//int main(void) {
//	SoSimple sim1;
//	SoSimple sim2;
//
//	SoComplex com1;
//	SoComplex com2=com1;
//	SoComplex();
//	return 0;
//}

//using std::cout;
//using std::endl;
//
//class SoSimple {
//public:
//	static int simObjCnt;
//public:
//	SoSimple() {
//		simObjCnt++;
//	}
//};
//int SoSimple::simObjCnt = 0;
//
//int main(void) {
//	cout << SoSimple::simObjCnt << "번째 SoSimple 객체" << endl;
//	SoSimple sim1;
//	SoSimple sim2;
//
//	cout << SoSimple::simObjCnt << "번째 SoSimple 객체" << endl;
//	cout << sim1.simObjCnt << "번째 SoSimple 객체" << endl;
//	cout << sim2.simObjCnt << "번째 SoSimple 객체" << endl;
//	return 0;
//}

//using std::cout;
//using std::endl;
//
//class CountryArea {
//public:
//	const static int RUSSIA = 1707540;
//	const static int CANADA = 998467;
//	const static int CHINA = 957290;
//	const static int SOUTH_KOREA = 9922;
//};
//
//int main(void) {
//	cout << "러시아 면적: " << CountryArea::RUSSIA << "km" << endl;
//	cout << "캐나다 면적: " << CountryArea::CANADA << "km" << endl;
//	cout << "중국 면적: " << CountryArea::CHINA << "km" << endl;
//	cout << "한국 면적: " << CountryArea::SOUTH_KOREA << "km" << endl;
//	return 0;
//}

//using std::cout;
//using std::endl;
//
//class SoSimple {
//private:
//	int num1;
//	mutable int num2;
//public:
//	SoSimple(int n1, int n2)
//		: num1(n1), num2(n2) { }
//	void ShowSimpleData() const {
//		cout << num1 << ", " << num2 << endl;
//	}
//	void CopyToNum2() const {
//		num2 = num1;
//	}
//};
//
//int main(void) {
//	SoSimple sm(1, 2);
//	sm.ShowSimpleData();
//	sm.CopyToNum2();
//	sm.ShowSimpleData();
//	return 0;
//}

//#include <cstring>
//using std::cout;
//using std::endl;
//
//class Person {
//private:
//	int age;
//	char name[50];
//public:
//	Person(int myage, const char* myname)
//		:age(myage) {
//		strcpy_s(name, sizeof(name), myname);
//	}
//
//	void WhatYourName() const {
//		cout << "My name is " << name << endl;
//	}
//
//	void HowOldAreYou() const {
//		cout << "I'm " << age << " years old" << endl;
//	}
//};
//
//class UnivStudent
//	: public Person {
//private:
//	char major[50];
//public:
//	UnivStudent(const char* myname, int myage, const char* mymajor)
//		: Person(myage, myname) {
//		strcpy_s(major, sizeof(major), mymajor);
//	}
//
//	void WhoAreYou() const {
//		WhatYourName();
//		HowOldAreYou();
//		cout << "My major is " << major << endl << endl;
//	}
//};
//
//int main(void) {
//	UnivStudent ustd1("Lee", 22, "Computer eng.");
//	ustd1.WhoAreYou();
//
//	UnivStudent ustd2("Yoon", 21, "Electronic eng.");
//	ustd2.WhoAreYou();
//	return 0;
//}

//using std::cout;
//using std::endl;
//
//class SoBase {
//private:
//	int baseNum;
//public:
//	SoBase()
//		:baseNum(20) {
//		cout << "SoBase()" << endl;
//	}
//
//	SoBase(int n)
//		:baseNum(n) {
//		cout << "SoBase(int n)" << endl;
//	}
//
//	void ShowBaseData() {
//		cout << baseNum << endl;
//	}
//};
//
//class SoDerived
//	:public SoBase {
//private:
//	int derivNum;
//public:
//	SoDerived()
//		:derivNum(30) {
//		cout << "SoDerived()" << endl;
//	}
//
//	SoDerived(int n)
//		:derivNum(n) {
//		cout << "SoDerived(int n)" << endl;
//	}
//
//	SoDerived(int n1, int n2)
//		:SoBase(n1), derivNum(n2) {
//		cout << "SoDerived(int n1, int n2)" << endl;
//	}
//
//	void ShowDerivData() {
//		ShowBaseData();
//		cout << derivNum << endl;
//	}
//};
//
//int main(void) {
//	cout << "case1....." << endl;
//	SoDerived dr1;
//	dr1.ShowDerivData();
//	cout << "--------------------" << endl;
//	cout << "case2....." << endl;
//	SoDerived dr2(12);
//	dr2.ShowDerivData();
//	cout << "--------------------" << endl;
//	cout << "case3....." << endl;
//	SoDerived dr3(23, 24);
//	dr3.ShowDerivData();
//	return 0;
//}

//using std::cout;
//using std::endl;
//
//class SoBase {
//private:
//	int baseNum;
//public:
//	SoBase(int n) : baseNum(n) {
//		cout << "SoBase() : " << baseNum << endl;
//	}
//	~SoBase() {
//		cout << "~SoBase() : " << baseNum << endl;
//	}
//};
//
//class SoDerived : public SoBase {
//private:
//	int derivNum;
//public:
//	SoDerived(int n) : SoBase(n), derivNum(n) {
//		cout << "SoDerived() : " << derivNum << endl;
//	}
//	~SoDerived() {
//		cout << "~SoDerived() : " << derivNum << endl;
//	}
//};
//
//int main(void) {
//	SoDerived drv1(15);
//	SoDerived drv2(27);
//	return 0;
//}

//#include <cstring>
//using std::cout;
//using std::endl;
//
//class Person {
//private:
//	char* name;
//public:
//	Person(const char* myname) {
//		name = new char[strlen(myname) + 1];
//		strcpy_s(name, 100, myname);
//	}
//	~Person() {
//		delete[]name;
//	}
//	void WhatYourName() const {
//		cout << "My name is " << name << endl;
//	}
//};
//
//class UnivStudent : public Person {
//private:
//	char* major;
//public:
//	UnivStudent(const char* myname, const char* mymajor)
//		: Person(myname) {
//		major = new char[strlen(mymajor) + 1];
//		strcpy_s(major, 100, mymajor);
//	}
//	~UnivStudent() {
//		delete[]major;
//	}
//	void WhoAreYou() const {
//		WhatYourName();
//		cout << "My major is " << major << endl << endl;
//	}
//};
//
//int main(void) {
//	UnivStudent st1("Kim", "Mathematics");
//	st1.WhoAreYou();
//	UnivStudent st2("Hong", "Physics");
//	st2.WhoAreYou();
//	return 0;
//}

// 07-1-1
//using std::cout;
//using std::endl;
//
//class Car {
//private:
//	int gasolineGauge;
//public:
//	Car(int n) : gasolineGauge(n) {}
//
//	int GetGasGauge() {
//		return gasolineGauge;
//	}
//};
//
//class HybridCar : public Car {
//private:
//	int electricGauge;
//public:
//	HybridCar(int n1, int n2) : Car(n1), electricGauge(n2) { }
//
//	int GetElecGauge() {
//		return electricGauge;
//	}
//};
//
//class HybridWaterCar : public HybridCar {
//private:
//	int waterGauge;
//public:
//	HybridWaterCar(int n1, int n2, int n3)
//		: HybridCar(n1, n2), waterGauge(n3) {}
//
//	void ShowCurrentGauge() {
//		cout << "Left Gas: " << GetGasGauge() << endl;
//		cout << "Left Ele: " << GetElecGauge() << endl;
//		cout << "Left Wat: " << waterGauge << endl;
//	}
//};
//
//int main(void) {
//	HybridWaterCar car(30, 40, 50);
//	car.ShowCurrentGauge();
//	return 0;
//}

//#define _CRT_SECURE_NO_WARNINGS
//#include <cstring>
//using std::cout;
//using std::endl;
//
//class MyFriendInfo {
//private:
//	char* name;
//	int age;
//public:
//	MyFriendInfo(const char* myname, int myage) : age(myage) {
//		name = new char[strlen(myname) + 1];
//		strcpy(name, myname);
//	}
//	~MyFriendInfo() {
//		delete[]name;
//	}
//	void ShowMyFriendInfo() {
//		cout << "name: " << name << endl;
//		cout << "age: " << age << endl;
//	}
//};
//
//class MyFriendDetailInfo : public MyFriendInfo {
//private:
//	char* addr;
//	char* phone;
//public:
//	MyFriendDetailInfo(const char* myname, int myage, const char* myaddr, const char* myphone)
//		: MyFriendInfo(myname, myage) {
//		addr = new char[strlen(myaddr) + 1];
//		strcpy(addr, myaddr);
//
//		phone = new char[strlen(myphone) + 1];
//		strcpy(phone, myphone);
//	}
//	~MyFriendDetailInfo() {
//		delete[]addr;
//		delete[]phone;
//	}
//	void ShowMyFriendDetailInfo() {
//		ShowMyFriendInfo();
//		cout << "address: " << addr << endl;
//		cout << "phone: " << phone << endl << endl;
//	}
//};
//
//int main(void) {
//	MyFriendDetailInfo friend1("Yoon", 25, "Europe", "010-3457-7901");
//	friend1.ShowMyFriendDetailInfo();
//	return 0;
//}

//using std::cout;
//using std::endl;
//
//class Base {
//private:
//	int num1;
//protected:
//	int num2;
//public:
//	int num3;
//
//	Base() : num1(1), num2(2), num3(3) {}
//};
//
//class Derived : protected Base {};
//
//int main(void) {
//	Derived drv;
//	cout << drv.num3 << endl; // error
//	return 0;
//}

//#include <cstring>
//using std::cout;
//using std::endl;
//
//class Computer {
//private:
//	char owner[50];
//public:
//	Computer(const char* name) {
//		strcpy(owner, name);
//	}
//	void Calculate() {
//		cout << "요청 내용을 계산합니다." << endl;
//	}
//};
//
//class NotebookComp : public Computer {
//private:
//	int Battery;
//public:
//	NotebookComp(const char* name, int initChag) : Computer(name), Battery(initChag) {}
//	void Charging() { Battery += 5; }
//	void UseBattery() { Battery -= 1; }
//	void MovingCal() {
//		if (GetBatteryInfo() < 1) {
//			cout << "충전이 필요합니다." << endl;
//			return;
//		}
//		cout << "이동하면서 ";
//		Calculate();
//		UseBattery();
//	}
//	int GetBatteryInfo() { return Battery; }
//};
//
//class TabletNotebook : public NotebookComp {
//private:
//	char regstPenModel[50];
//public:
//	TabletNotebook(const char* name, int initChag, const char* pen)
//		: NotebookComp(name, initChag) {
//		strcpy(regstPenModel, pen);
//	}
//	void Write(const char* penInfo) {
//		if (GetBatteryInfo() < 1) {
//			cout << "충전이 필요합니다." << endl;
//			return;
//		}
//
//		if (strcmp(regstPenModel, penInfo) != 0) {
//			cout << "등록된 펜이 아닙니다.";
//			return;
//		}
//		cout << "필기 내용을 처리합니다." << endl;
//		UseBattery();
//	}
//};
//
//int main(void) {
//	NotebookComp nc("Lee", 5);
//	TabletNotebook tn("Jeong", 5, "ISE-241-242");
//	nc.MovingCal();
//	tn.Write("ISE-241-242");
//	return 0;
//}

//#include <cstring>
//using std::cout;
//using std::endl;
//
//class Gun {
//private:
//	int bullet;
//public:
//	Gun(int bnum) : bullet(bnum) {}
//	void Shot() {
//		cout << "BBANG!" << endl;
//		bullet--;
//	}
//};
//
//class Police : public Gun {
//private:
//	int handcuffs;
//public:
//	Police(int bnum, int bcuff) : Gun(bnum), handcuffs(bcuff) {}
//	void PutHandcuff() {
//		cout << "SNAP!" << endl;
//		handcuffs--;
//	}
//};
//
//int main(void) {
//	Police pman(5, 3);
//	pman.Shot();
//	pman.PutHandcuff();
//	return 0;
//}

//#include <cstring>
//using std::cout;
//using std::endl;
//
//class Gun {
//private:
//	int bullet;
//public:
//	Gun(int bnum) : bullet(bnum) {}
//	void Shot() {
//		cout << "BBang!" << endl;
//		bullet--;
//	}
//};
//
//class Police {
//private:
//	int handcuffs;
//	Gun* pistol;
//public:
//	Police(int bnum, int bcuff) : handcuffs(bcuff) {
//		if (bnum > 0)
//			pistol = new Gun(bnum);
//		else
//			pistol = NULL;
//	}
//	void PutHandcuff() {
//		cout << "SNAP!" << endl;
//		handcuffs--;
//	}
//	void Shot() {
//		if (pistol == NULL)
//			cout << "Hut BBANG!" << endl;
//		else
//			pistol->Shot();
//	}
//	~Police() {
//		if (pistol != NULL)
//			delete pistol;
//	}
//};
//
//int main(void) {
//	Police pman1(5, 3);
//	pman1.Shot();
//	pman1.PutHandcuff();
//
//	Police pman2(0, 3);
//	pman2.Shot();
//	pman2.PutHandcuff();
//	return 0;
//}

// 07-2-1
//using std::cout;
//using std::endl;
//
//class Rectangle {
//private:
//	int width;
//	int height;
//	int result;
//public:
//	Rectangle(int x, int y) : width(x), height(y) {
//		result = width * height;
//	}
//	void ShowAreaInfo() {
//		cout << "면적: " << result << endl;
//	}
//};
//
//class Square : public Rectangle {
//	int width;
//	int height;
//public:
//	Square(int x) : Rectangle(x, x) {}
//};
//
//int main(void) {
//	Rectangle rec(4, 3);
//	rec.ShowAreaInfo();
//
//	Square sqr(7);
//	sqr.ShowAreaInfo();
//	return 0;
//}

// 07-2-2
//#include <cstring>
//using std::cout;
//using std::endl;
//
//class Book {
//private:
//	char* title;
//	char* isbn;
//	int price;
//public:
//	Book(const char* mytitle, const char* myisbn, int myprice) : price(myprice) {
//		this->title = new char[strlen(mytitle) + 1];
//		strcpy(this->title, mytitle);
//
//		this->isbn = new char[strlen(myisbn) + 1];
//		strcpy(this->isbn, myisbn);
//	}
//	void ShowBookInfo() {
//		cout << "Title: " << title << endl;
//		cout << "ISBN: " << isbn << endl;
//		cout << "Price: " << price << endl;
//	}
//	~Book() {
//		delete[]title;
//		delete[]isbn;
//	}
//};
//
//class EBook : public Book {
//private:
//	char* DRMKey;
//public:
//	EBook(const char* title, const char* isbn, int price, const char* myDRMKey) 
//		: Book(title, isbn, price){
//		DRMKey = new char[strlen(myDRMKey) + 1];
//		strcpy(DRMKey, myDRMKey);
//	}
//	void ShowEBookInfo() {
//		ShowBookInfo();
//		cout << "DRMKey: " << DRMKey << endl;
//	}
//	~EBook() {
//		delete[]DRMKey;
//	}
//};
//
//int main(void) {
//	Book book("좋은 C++", "555-12345-890-0", 20000);
//	book.ShowBookInfo();
//	cout << endl;
//	EBook ebook("좋은 C++ ebook", "555-12345-890-1", 10000, "fdx9w0i8kiw");
//	ebook.ShowEBookInfo();
//	return 0;
//}

//using std::cout;
//using std::endl;
//
//class Person {
//public:
//	void Sleep() { cout << "Sleep" << endl; }
//};
//
//class Student : public Person {
//public:
//	void Study() { cout << "Study" << endl; }
//};
//
//class PartTimeStudent : public Student {
//public:
//	void Work() { cout << "Work" << endl; }
//};
//
//int main(void) {
//	Person* ptr1 = new Student();
//	Person* ptr2 = new PartTimeStudent();
//	Student* ptr3 = new PartTimeStudent();
//	ptr1->Sleep();
//	ptr2->Sleep();
//	ptr3->Study();
//	delete ptr1; delete ptr2; delete ptr3;
//	return 0;
//}

//using std::cout;
//using std::endl;
//
//class First {
//public:
//	virtual void MyFunc() { cout << "FirstFunc" << endl; }
//};
//
//class Second : public First {
//public:
//	virtual void MyFunc() { cout << "SecondFunc" << endl; }
//};
//
//class Third : public Second {
//public:
//	virtual void MyFunc() { cout << "ThirdFunc" << endl; }
//};
//
//int main(void) {
//	Third* tptr = new Third();
//	Second* sptr = tptr;
//	First* fptr = sptr;
//
//	fptr->MyFunc();
//	sptr->MyFunc();
//	tptr->MyFunc();
//	delete tptr;
//	return 0;
//}

//using std::cout;
//using std::endl;
//
//class First {
//private:
//	char* strOne;
//public:
//	First(const char* str) {
//		strOne = new char[strlen(str) + 1];
//	}
//
//	virtual ~First() {
//		cout << "~First()" << endl;
//		delete[]strOne;
//	}
//};
//
//class Second : public First {
//private:
//	char* strTwo;
//public:
//	Second(const char* str1, const char* str2) : First(str1) {
//		strTwo = new char[strlen(str2) + 1];
//	}
//	~Second() {
//		cout << "~Second()" << endl;
//		delete[]strTwo;
//	}
//};
//
//int main(void) {
//	First* ptr = new Second("simple", "complex");
//	delete ptr;
//	return 0;
//}

//using std::cout;
//using std::endl;
//
//class First {
//public:
//	void FirstFunc() { cout << "FirstFunc()" << endl; }
//	virtual void SimpleFunc() { cout << "First's SimpleFunc()" << endl; }
//};
//
//class Second : public First {
//public:
//	void SecondFunc() { cout << "SecondFunc()" << endl; }
//	virtual void SimpleFunc() { cout << "Second's SimpleFunc()" << endl; }
//};
//
//class Third : public Second {
//public:
//	void ThirdFunc() { cout << "ThirdFunc()" << endl; }
//	virtual void SimpleFunc() { cout << "Third's SimpleFunc()" << endl; }
//};
//
//int main(void) {
//	Third obj;
//	obj.FirstFunc();
//	obj.SecondFunc();
//	obj.ThirdFunc();
//	obj.SimpleFunc();
//
//	Second& sref = obj;
//	sref.FirstFunc();
//	sref.SecondFunc();
//	sref.SimpleFunc();
//
//	First& fref = obj;
//	fref.FirstFunc();
//	fref.SimpleFunc();
//	return 0;
//}

//using std::cout;
//using std::endl;
//
//typedef struct data{
//	int data;
//	void (*ShowData)(Data*);
//	void (*Add)(Data*, int);
//} Data;
//
//void ShowData(Data* THIS) { cout << "Data: " << THIS->data << endl; }
//void Add(Data* THIS, int num) { THIS->data += num; }
//
//int main(void) {
//	Data obj1 = { 15, ShowData, Add };
//	Data obj2 = { 7, ShowData, Add };
//
//	obj1.Add(&obj1, 17);
//	obj2.Add(&obj2, 9);
//	obj1.ShowData(&obj1);
//	obj2.ShowData(&obj2);
//	return 0;
//}

//using std::cout;
//using std::endl;
//
//class AAA {
//private:
//	int num1;
//public:
//	virtual void Func1() { cout << "Func1" << endl; }
//	virtual void Func2() { cout << "Func2" << endl; }
//};
//
//class BBB : public AAA {
//private:
//	int num2;
//public:
//	virtual void Func1() { cout << "BBB::Func1" << endl; }
//	void Func3() { cout << "Func3" << endl; }
//};
//
//int main(void) {
//	AAA* aptr = new AAA();
//	aptr->Func1();
//
//	BBB* bptr = new BBB();
//	bptr->Func1();
//	
//	return 0;
//}

//using std::cout;
//using std::endl;
//
//class BaseOne {
//public:
//	void SimpleFunc() { cout << "BaseOne" << endl; }
//};
//
//class BaseTwo {
//public:
//	void SimpleFunc() { cout << "BaseTwo" << endl; }
//};
//
//class MultiDerived : public BaseOne, protected BaseTwo {
//public:
//	void ComplexFunc() {
//		BaseOne::SimpleFunc();
//		BaseTwo::SimpleFunc();
//	}
//};
//
//int main(void) {
//	MultiDerived mdr;
//	mdr.ComplexFunc();
//	return 0;
//}

//using std::cout;
//using std::endl;
//
//class Base {
//public:
//	Base() { cout << "Base Constructor" << endl; }
//	void SimpleFunc() { cout << "BaseOne" << endl; }
//};
//
//class MiddleDerivedOne : virtual public Base {
//public:
//	MiddleDerivedOne() : Base() {
//		cout << "MiddleDerivedOne Constructor" << endl;
//	}
//	void MiddleFuncOne() {
//		SimpleFunc();
//		cout << "MiddleDerivedOne" << endl;
//	}
//};
//
//class MiddleDerivedTwo : virtual public Base {
//public:
//	MiddleDerivedTwo() : Base() {
//		cout << "MiddleDerivedTwo Constructor" << endl;
//	}
//	void MiddleFuncTwo() {
//		SimpleFunc();
//		cout << "MiddleDerivedTwo" << endl;
//	}
//};
//
//class LastDerived : public MiddleDerivedOne, public MiddleDerivedTwo {
//public:
//	LastDerived() : MiddleDerivedOne(), MiddleDerivedTwo() {
//		cout << "LastDerived Constructor" << endl;
//	}
//	void ComplexFunc() {
//		MiddleFuncOne();
//		MiddleFuncTwo();
//		SimpleFunc();
//	}
//};
//
//int main(void) {
//	cout << "객체생성 전 ..... " << endl;
//	LastDerived ldr;
//	cout << "객체생성 후 ..... " << endl;
//	ldr.ComplexFunc();
//	return 0;
//}

// 10-1

//using std::cout;
//using std::endl;
//
//class Point {
//private:
//	int xpos, ypos;
//public:
//	Point(int x = 0, int y = 0) : xpos(x), ypos(y) {}
//	void ShowPosition() const {
//		cout << '[' << xpos << ", " << ypos << ']' << endl;
//	}
//
//	Point& operator+=(const Point& ref) {
//		xpos += ref.xpos;
//		ypos += ref.ypos;
//		return *this;
//	}
//
//	Point& operator-=(const Point& ref) {
//		xpos -= ref.xpos;
//		ypos -= ref.ypos;
//		return *this;
//	}
//
//	friend Point operator-(const Point&, const Point&);
//	friend bool operator==(const Point&, const Point&);
//	friend bool operator!=(const Point&, const Point&);
//};
//
//Point operator-(const Point& pos1, const Point& pos2) {
//	Point pos(pos1.xpos - pos2.xpos, pos1.ypos - pos2.ypos);
//	return pos;
//}
//
//bool operator==(const Point& pos1, const Point& pos2) {
//	if (pos1.xpos == pos2.xpos && pos1.ypos == pos2.ypos)
//		return true;
//	else
//		return false;
//}
//
//bool operator!=(const Point& pos1, const Point& pos2) {
//	return !(pos1 == pos2);
//}
//
//int main(void) {
//	Point pos1(20, 30);
//	Point pos2(5, 7);
//	Point pos3(5, 7);
//
//	(pos1 - pos2).ShowPosition();
//	(pos1 += pos2).ShowPosition();
//
//	if (pos2 == pos3)
//		cout << "equal" << endl;
//	else
//		cout<<"not equal"<<endl;
//
//	(pos2 -= pos3).ShowPosition();
//
//	if (pos2 != pos3)
//		cout << "not equal" << endl;
//	else
//		cout << "equal" << endl;
//	return 0;
//}
// 10-2
//using std::cout;
//using std::endl;
//
//class Point {
//private:
//	int xpos, ypos;
//public:
//	Point(int x = 0, int y = 0) : xpos(x), ypos(y) {}
//	void ShowPosition() const {
//		cout << '[' << xpos << ", " << ypos << ']' << endl;
//	}
//	
//	Point& operator-() {
//		xpos = -xpos;
//		ypos = -ypos;
//		return *this;
//	}
//	
//	Point& operator~() {
//		int temp = xpos;
//		xpos = ypos;
//		ypos = temp;
//		return *this;
//	}
//};
//
//int main(void) {
//	Point pos1(1, 2);
//	Point pos2 = -pos1;
//	pos2.ShowPosition();
//
//	Point pos3 = ~pos1;
//	pos3.ShowPosition();
//	return 0;
//}

//using std::cout;
//using std::endl;
//
//class Point {
//private:
//	int xpos, ypos;
//public:
//	Point(int x = 0, int y = 0) : xpos(x), ypos(y) {}
//	void ShowPosition() const {
//		cout << '[' << xpos << ", " << ypos << ']' << endl;
//	}
//
//	Point operator-() {
//		Point pos(-xpos, -ypos);
//		return pos;
//	}
//
//	friend Point operator~(const Point&);
//};
//
//Point operator~(const Point& ref) {
//	Point pos(ref.ypos, ref.xpos);
//	return pos;
//}
//
//int main(void) {
//	Point pos1(9, -7);
//	pos1.ShowPosition();
//	Point pos2 = -pos1;
//	pos2.ShowPosition();
//	(~pos2).ShowPosition();
//	pos2.ShowPosition();
//	return 0;
//}

//using std::cout;
//using std::endl;
//
//class Point {
//private:
//	int xpos, ypos;
//public:
//	Point(int x = 0, int y = 0) : xpos(x), ypos(y) {}
//	void ShowPosition() const {
//		cout << '[' << xpos << ", " << ypos << ']' << endl;
//	}
//
//	Point& operator++() {
//		xpos += 1;
//		ypos += 1;
//	}
//
//	const Point operator++(int) {
//		const Point retobj(xpos, ypos);
//		xpos += 1;
//		ypos += 1;
//		return retobj;
//	}
//	friend Point& operator--(Point& ref);
//	friend const Point operator--(Point& ref, int);
//};
//
//Point& operator--(Point& ref) {
//	ref.xpos -= 1;
//	ref.ypos -= 1;
//	return ref;
//}
//
//const Point operator--(Point& ref, int) {
//	const Point retobj(ref);
//	ref.xpos -= 1;
//	ref.ypos -= 1;
//	return retobj;
//}
//
//int main(void) {
//	Point pos(3, 5);
//	Point cpy;
//	cpy = pos--;
//	cpy.ShowPosition();
//	pos.ShowPosition();
//
//	cpy = pos++;
//	cpy.ShowPosition();
//	pos.ShowPosition();
//	return 0;
//}

//using std::cout;
//using std::endl;
//
//class Point {
//	int xpos, ypos;
//public:
//	Point(int x = 0, int y = 0) : xpos(x), ypos(y) {}
//	void ShowPosition() const {
//		cout << '[' << xpos << ", " << ypos << ']' << endl;
//	}
//
//	Point operator*(int times) {
//		Point pos(xpos * times, ypos * times);
//		return pos;
//	}
//	friend Point operator*(int times, Point& ref);
//};
//
//Point operator*(int times, Point& ref) {
//	return ref * times;
//}
//
//int main(void) {
//	Point pos(1, 2);
//	Point cpy;
//
//	cpy = 3 * pos;
//	cpy.ShowPosition();
//
//	cpy = 2 * pos * 3;
//	cpy.ShowPosition();
//	return 0;
//}

//namespace mystd {
//	using namespace std;
//
//	class ostream {
//	public:
//		ostream& operator<< (char* str) {
//			printf("%s", str);
//			return *this;
//		}
//		ostream& operator<< (char str) {
//			printf("%c", str);
//			return *this;
//		}
//		ostream& operator<< (int num) {
//			printf("%d", num);
//			return *this;
//		}
//		ostream& operator<< (double e) {
//			printf("%g", e);
//			return *this;
//		}
//		ostream& operator<< (ostream& (*fp)(ostream& ostm)) {
//			fp(*this);
//			return fp(*this);
//		}
//	};
//
//	ostream& endl(ostream& ostm) {
//		ostm << '\n';
//		fflush(stdout);
//		return ostm;
//	}
//
//	ostream cout;
//}
//
//int main(void) {
//	using std::cout;
//	using std::endl;
//
//	cout << 3.14 << endl << 123 << endl;
//	return 0;
//}

//using namespace std;
//
//class Point {
//private:
//	int xpos, ypos;
//public:
//	Point(int x = 0, int y = 0) : xpos(x), ypos(y) {}
//	void ShowPosition() const {
//		cout << '[' << xpos << ", " << ypos << ']' << endl;
//	}
//
//	friend ostream& operator<<(ostream&, const Point&);
//};
//
//ostream& operator<<(ostream& os, const Point& pos) {
//	os << '[' << pos.xpos << ", " << pos.ypos << ']' << endl;
//	return os;
//}
//
//int main(void) {
//	Point pos1(1, 3);
//	cout << pos1;
//	Point pos2(101, 303);
//	cout << pos2;
//	return 0;
//}

//using namespace std;
//
//class Point {
//private:
//	int xpos, ypos;
//public:
//	Point(int x = 0, int y = 0) : xpos(x), ypos(y) {}
//	void ShowPosition() const {
//		cout << '[' << xpos << ", " << ypos << ']' << endl;
//	}
//
//	friend ostream& operator<<(ostream&, const Point&);
//	friend istream& operator>>(istream&, Point& pos);
//};
//
//ostream& operator<<(ostream& os, const Point& pos) {
//	os << '[' << pos.xpos << ", " << pos.ypos << ']' << endl;
//	return os;
//}
//
//istream& operator>>(istream& is, Point& pos) {
//	is >> pos.xpos >> pos.ypos;
//	return is;
//}
//
//int main(void) {
//	Point pos1;
//	cout << "x, y : ";
//	cin >> pos1;
//	cout << pos1;
//
//	Point pos2;
//	cout << "x, y: ";
//	cin >> pos2;
//	cout << pos2;
//	return 0;
//}
//

//using std::cout;
//using std::endl;
//
//class First {
//private:
//	int num1, num2;
//public:
//	First(int n1 = 0, int n2 = 0) : num1(n1), num2(n2) {}
//	void ShowData() { cout << num1 << ", " << num2 << endl; }
//};
//
//class Second {
//private:
//	int num3, num4;
//public:
//	Second(int n3 = 0, int n4 = 0) : num3(n3), num4(n4) {}
//	void ShowData() { cout << num3 << ", " << num4 << endl; }
//
//	Second& operator=(const Second& ref) {
//		cout << "Second& operator=()" << endl;
//		num3 = ref.num3;
//		num4 = ref.num4;
//		return *this;
//	}
//};
//
//int main(void) {
//	First fsrc(111, 222);
//	First fcpy;
//	Second ssrc(333, 444);
//	Second scpy;
//	fcpy = fsrc;
//	scpy = ssrc;
//	fcpy.ShowData();
//	scpy.ShowData();
//
//	First fob1, fob2;
//	Second sob1, sob2;
//	fob1 = fob2 = fsrc;
//	sob1 = sob2 = ssrc;
//
//	fob1.ShowData();
//	fob2.ShowData();
//	sob1.ShowData();
//	sob2.ShowData();
//	return 0;
//}

//#include <cstring>
//using std::cout;
//using std::endl;
//
//class Person {
//private:
//	char* name;
//	int age;
//public:
//	Person(const char* myname, int myage) {
//		int len = strlen(myname) + 1;
//		name = new char[len];
//		strcpy(name, myname);
//		age = myage;
//	}
//
//	Person& operator=(const Person& ref) {
//		delete[]name;
//		int len = strlen(ref.name) + 1;
//		name = new char[len];
//		strcpy(name, ref.name);
//		age = ref.age;
//		return *this;
//	}
//	
//	void ShowPersonInfo() const {
//		cout << "name: " << name << endl;
//		cout << "age: " << age << endl;
//	}
//
//	~Person() {
//		delete[]name;
//		cout << "called destructor!" << endl;
//	}
//};
//
//int main(void) {
//	Person man1("Lee dong woo", 29);
//	Person man2("Yoon ji yul", 22);
//	man2 = man1;
//	man1.ShowPersonInfo();
//	man2.ShowPersonInfo();
//	return 0;
//}

//using std::cout;
//using std::endl;
//
//class First {
//private:
//	int num1, num2;
//public:
//	First(int n1 = 0, int n2 = 0) : num1(n1), num2(n2) {}
//	void ShowData() { cout << num1 << ", " << num2 << endl; }
//
//	First& operator=(const First& ref) {
//		cout << "First& operator=()" << endl;
//		num1 = ref.num1;
//		num2 = ref.num2;
//		return *this;
//	}
//};
//
//class Second : public First {
//private:
//	int num3, num4;
//public:
//	Second(int n1, int n2, int n3, int n4)
//		: First(n1, n2), num3(n3), num4(n4) {}
//	void ShowData() {
//		First::ShowData();
//		cout << num3 << ", " << num4 << endl;
//	}
//
//	Second& operator=(const Second& ref) {
//		cout << "Second& operator=()" << endl;
//		First::operator=(ref);
//		num3 = ref.num3;
//		num4 = ref.num4;
//		return *this;
//	}
//};
//
//int main(void) {
//	Second ssrc(111, 222, 333, 444);
//	Second scpy(0, 0, 0, 0);
//	scpy = ssrc;
//	scpy.ShowData();
//	return 0;
//}

// 11-1-1
//#include <cstring>
//using std::cout;
//using std::endl;
//
//class Gun {
//private:
//	int bullet;
//public:
//	Gun(int bnum) : bullet(bnum) {}
//	void Shot() {
//		cout << "BBANG!" << endl;
//		bullet--;
//	}
//};
//
//class Police {
//private:
//	int handcuffs;
//	Gun* pistol;
//public:
//	Police(int bnum, int bcuff) : handcuffs(bcuff) {
//		if (bnum > 0)
//			pistol = new Gun(bnum);
//		else
//			pistol = NULL;
//	}
//
//	Police(const Police& ref) : handcuffs(ref.handcuffs) {
//		if (ref.pistol != NULL)
//			pistol = new Gun(*(ref.pistol));
//		else
//			pistol = NULL;
//	}
//
//	Police& operator=(const Police& ref) {
//		if (pistol != NULL)
//			delete pistol;
//
//		if (ref.pistol != NULL)
//			pistol = new Gun(*(ref.pistol));
//		else
//			pistol = NULL;
//
//		handcuffs = ref.handcuffs;
//		return *this;
//	}
//
//	void PutHandcuff() {
//		cout << "SNAP!" << endl;
//		handcuffs--;
//	}
//
//	void Shot() {
//		if (pistol == NULL)
//			cout << "Hut BBANG!" << endl;
//		else
//			pistol->Shot();
//	}
//
//	~Police() {
//		if (pistol != NULL)
//			delete pistol;
//	}
//};
//
//int main(void) {
//	Police pman1(5, 3);
//	Police pman2 = pman1;
//	pman2.PutHandcuff();
//	pman2.Shot();
//
//	Police pman3(2, 4);
//	pman3 = pman1;
//	pman3.PutHandcuff();
//	pman3.Shot();
//	return 0;
//}

// 11-1-2
//#include <cstring>
//using std::cout;
//using std::endl;
//
//class Book {
//private:
//	char* title;
//	char* isbn;
//	int price;
//public:
//	Book(const char* title, const char* isbn, int value) : price(value) {
//		this->title = new char[strlen(title) + 1];
//		this->isbn = new char[strlen(isbn) + 1];
//		strcpy(this->title, title);
//		strcpy(this->isbn, isbn);
//	}
//
//	Book(const Book& ref) : price(ref.price) {
//		title = new char[strlen(ref.title) + 1];
//		isbn = new char[strlen(ref.isbn) + 1];
//		strcpy(title, ref.title);
//		strcpy(isbn, ref.isbn);
//	}
//
//	Book& operator=(const Book& ref) {
//		delete[]title;
//		delete[]isbn;
//
//		title = new char[strlen(ref.title) + 1];
//		isbn = new char[strlen(ref.isbn) + 1];
//		strcpy(title, ref.title);
//		strcpy(isbn, ref.isbn);
//		price = ref.price;
//		return *this;
//	}
//
//	void ShowBookInfo() {
//		cout << "제목: " << title << endl;
//		cout << "ISBN: " << isbn << endl;
//		cout << "가격: " << price << endl;
//	}
//
//	~Book() {
//		delete[]title;
//		delete[]isbn;
//	}
//};
//
//class EBook : public Book {
//private:
//	char* DRMKey;
//public:
//	EBook(const char* title, const char* isbn, int value, const char* key) : Book(title, isbn, value) {
//		DRMKey = new char[strlen(key) + 1];
//		strcpy(DRMKey, key);
//	}
//
//	EBook(const EBook& ref) : Book(ref) {
//		DRMKey = new char[strlen(ref.DRMKey) + 1];
//		strcpy(DRMKey, ref.DRMKey);
//	}
//
//	EBook& operator=(const EBook& ref) {
//		Book::operator=(ref);
//		delete[]DRMKey;
//		DRMKey = new char[strlen(ref.DRMKey) + 1];
//		strcpy(DRMKey, ref.DRMKey);
//		return *this;
//	}
//
//	void ShowEBookInfo() {
//		ShowBookInfo();
//		cout << "인증키: " << DRMKey << endl;
//	}
//
//	~EBook() {
//		delete[]DRMKey;
//	}
//};
//
//int main(void) {
//	EBook ebook1("좋은 C++ ebook", "555-12345-890-1", 10000, "fdx9w0i8kiw");
//	EBook ebook2 = ebook1;
//	ebook2.ShowBookInfo();
//	cout << endl;
//	EBook ebook3("dumy", "dumy", 0, "dumy");
//	ebook3 = ebook2;
//	ebook3.ShowBookInfo();
//	return 0;
//}

//using std::cout;
//using std::endl;
//
//class AAA {
//private:
//	int num;
//public:
//	AAA(int n = 0) : num(n) {
//		cout << "AAA(int n=0)" << endl;
//	}
//
//	AAA(const AAA& ref) : num(ref.num) {
//		cout << "AAA(const AAA& ref)" << endl;
//	}
//
//	AAA& operator=(const AAA& ref) {
//		num = ref.num;
//		cout << "operator=(const AAA& ref)" << endl;
//		return *this;
//	}
//};
//
//class BBB {
//private:
//	AAA mem;
//public:
//	BBB(const AAA& ref) : mem(ref) {}
//};
//
//class CCC {
//private:
//	AAA mem;
//public:
//	CCC(const AAA& ref) { mem = ref; }
//};
//
//int main(void) {
//	AAA obj1(12);
//	cout << "***********************" << endl;
//	BBB obj2(obj1);
//	cout << "***********************" << endl;
//	CCC obj3(obj1);
//	return 0;
//}

//#include <cstdlib>
//using std::cout;
//using std::endl;
//
//class BoundCheckIntArray {
//private:
//	int* arr;
//	int arrlen;
//	BoundCheckIntArray(const BoundCheckIntArray& arr) {}
//	BoundCheckIntArray& operator=(const BoundCheckIntArray& arr) {}
//
//public:
//	BoundCheckIntArray(int len) : arrlen(len) {
//		arr = new int[len];
//	}
//
//	int& operator[] (int idx) {
//		if (idx < 0 || idx >= arrlen) {
//			cout << "Array index out of bound exception" << endl;
//			exit(1);
//		}
//		return arr[idx];
//	}
//
//	int operator[] (int idx) const {
//		if (idx < 0 || idx >= arrlen) {
//			cout << "Array index out of bound exception" << endl;
//			exit(1);
//		}
//		return arr[idx];
//	}
//
//	int GetArrLen() const { return arrlen; }
//
//	~BoundCheckIntArray() {
//		delete[]arr;
//	}
//};
//
//void ShowAllData(const BoundCheckIntArray& ref) {
//	int len = ref.GetArrLen();
//	for (int idx = 0; idx < len; idx++)
//		cout << ref[idx] << endl;
//}
//
//int main(void) {
//	BoundCheckIntArray arr(5);
//	for (int i = 0; i < 5; i++)
//		arr[i] = (i + 1) * 11;
//
//	ShowAllData(arr);
//	return 0;
//}

//#include <cstdlib>
//using namespace std;
//
//class Point {
//private:
//	int xpos, ypos;
//public:
//	Point(int x = 0, int y = 0) : xpos(x), ypos(y) {}
//	friend ostream& operator<<(ostream& os, const Point& pos);
//};
//
//ostream& operator<<(ostream& os, const Point& pos) {
//	os << '[' << pos.xpos << ", " << pos.ypos << ']' << endl;
//	return os;
//}
//
//class BoundCheckPointArray {
//private:
//	Point* arr;
//	int arrlen;
//	
//	BoundCheckPointArray(const BoundCheckPointArray& arr) {}
//	BoundCheckPointArray& operator=(const BoundCheckPointArray& arr) {}
//
//public:
//	BoundCheckPointArray(int len) : arrlen(len) {
//		arr = new Point[len];
//	}
//
//	Point& operator[] (int idx) {
//		if (idx < 0 || idx >= arrlen) {
//			cout << "Array index out of bound exception" << endl;
//			exit(1);
//		}
//		return arr[idx];
//	}
//
//	Point operator[] (int idx) const {
//		if (idx < 0 || idx >= arrlen) {
//			cout << "Array index out of bound exception" << endl;
//			exit(1);
//		}
//		return arr[idx];
//	}
//
//	int GetArrLen() const {
//		return arrlen;
//	}
//};
//
//int main(void) {
//	BoundCheckPointArray arr(3);
//	arr[0] = Point(3, 4);
//	arr[1] = Point(5, 6);
//	arr[2] = Point(7, 8);
//
//	for (int i = 0; i < arr.GetArrLen(); i++)
//		cout << arr[i];
//
//	return 0;
//}

// 11-2-1
//#include <cstdlib>
//using namespace std;
//
//class Point {
//private:
//	int xpos, ypos;
//public:
//	Point(int x = 0, int y = 0) : xpos(x), ypos(y) {}
//	friend ostream& operator<<(ostream& os, const Point& pos);
//	friend ostream& operator<<(ostream& os, const Point* pos);
//};
//
//ostream& operator<<(ostream& os, const Point& pos) {
//	os << '[' << pos.xpos << ". " << pos.ypos << ']'<<endl;
//	return os;
//}
//
//ostream& operator<<(ostream& os, const Point* pos) {
//	os << '[' << pos->xpos << ", " << pos->ypos << ']' << endl;
//	return os;
//}
//
//typedef Point* POINT_PTR;
//
//class BoundCheckPointPtrArray {
//private:
//	POINT_PTR* arr;
//	int arrlen;
//
//	BoundCheckPointPtrArray(const BoundCheckPointPtrArray& arr) {}
//	BoundCheckPointPtrArray& operator=(const BoundCheckPointPtrArray& arr) {}
//
//public:
//	BoundCheckPointPtrArray(int len) : arrlen(len) {
//		arr = new POINT_PTR[len];
//	}
//
//	POINT_PTR& operator[](int idx) {
//		if (idx < 0 || idx >= arrlen) {
//			cout << "Array indx out of bound exception" << endl;
//			exit(1);
//		}
//		return arr[idx];
//	}
//
//	POINT_PTR operator[] (int idx) const {
//		if (idx < 0 || idx >= arrlen) {
//			cout << "Array index out of bound exception" << endl;
//			exit(1);
//		}
//		return arr[idx];
//	}
//	int GetArrLen() const { return arrlen; }
//	~BoundCheckPointPtrArray() { delete[]arr; }
//};
//
//int main(void) {
//	BoundCheckPointPtrArray arr(3);
//	arr[0] = new Point(3, 4);
//	arr[1] = new Point(5, 6);
//	arr[2] = new Point(7, 8);
//
//	for (int i = 0; i < arr.GetArrLen(); i++)
//		cout << (arr[i]);
//	delete arr[0];
//	delete arr[1];
//	delete arr[2];
//	return 0;
//}

//#include <string>
//using namespace std;
//
//int main(void) {
//	string str1 = "I like ";
//	string str2 = "string class";
//	string str3 = str1 + str2;
//
//	cout << str1 << endl;
//	cout << str2 << endl;
//	cout << str3 << endl;
//
//	str1 += str2;
//	if (str1 == str3)
//		cout << "Same!" << endl;
//	else
//		cout << "Not the same!" << endl;
//
//	string str4;
//	cout << "enter: ";
//	cin >> str4;
//	cout << "Your string: " << str4 << endl;
//	return 0;
//}

// StringClass.cpp
//#include <cstring>
//using namespace std;
//
//class String {
//private:
//	int len;
//	char* str;
//public:
//	String();
//	String(const char* s);
//	String(const String& s);
//	~String();
//	String& operator=(const String& s);
//	String& operator+=(const String& s);
//	bool operator==(const String& s);
//	String operator+(const String& s);
//
//	friend ostream& operator<<(ostream& os, const String& s);
//	friend istream& operator>>(istream& is, String& s);
//};
//
//String::String() {
//	len = 0;
//	str = NULL;
//}
//
//String::String(const char* s) {
//	len = strlen(s) + 1;
//	str = new char[len];
//	strcpy(str, s);
//}
//
//String::String(const String& s) {
//	len = s.len;
//	str = new char[len];
//	strcpy(str, s.str);
//}
//
//String::~String() {
//	if (str != NULL)
//		delete[]str;
//}
//
//String& String::operator= (const String& s) {
//	if (str != NULL)
//		delete[]str;
//	len = s.len;
//	str = new char[len];
//	strcpy(str, s.str);
//	return *this;
//}
//
//String& String::operator+= (const String& s) {
//	len += (s.len - 1);
//	char* tempstr = new char[len];
//	strcpy(tempstr, str);
//	strcat(tempstr, s.str);
//
//	if (str != NULL)
//		delete[]str;
//	str = tempstr;
//	return *this;
//}
//
//bool String::operator== (const String& s) {
//	return strcmp(str, s.str) ? false : true;
//}
//
//String String::operator+ (const String& s) {
//	char* tempstr = new char[len + s.len - 1];
//	strcpy(tempstr, str);
//	strcat(tempstr, s.str);
//
//	String temp(tempstr); // String temp=tempstr;
//	delete[]tempstr;
//	return temp;
//}
//
//ostream& operator<< (ostream& os, const String& s) {
//	os << s.str;
//	return os;
//}
//
//istream& operator>> (istream& is, String& s) {
//	char str[100];
//	is >> str;
//	s = String(str);
//	return is;
//}
//
//int main(void) {
//	String str1 = "I like ";
//	String str2 = "string class";
//	String str3 = str1 + str2;
//
//	cout << str1 << endl;
//	cout << str2 << endl;
//	cout << str3 << endl;
//
//	str1 += str2;
//	if (str1 == str3)
//		cout << "Same!" << endl;
//	else
//		cout << "Not same!" << endl;
//
//	String str4;
//	cout << "Enter: ";
//	cin >> str4;
//	cout << "Your string: " << str4 << endl;
//	return 0;
//}

//using namespace std;
//
//template <typename T>
//T Add(T num1, T num2) {
//	return num1 + num2;
//}
//
//int main(void) {
//	cout << Add(15, 20) << endl;
//	cout << Add(2.9, 3.7) << endl;
//	cout << Add(3.2, 3.2) << endl;
//	cout << Add(3.14, 2.75) << endl;
//	return 0;
//}

//using namespace std;
//
//template <typename T>
//T Add(T num1, T num2) {
//	cout << "T Add(T num1, T num2)" << endl;
//	return num1 + num2;
//}
//
//int Add(int num1, int num2) {
//	cout << "Add(int num1, int num2)" << endl;
//	return num1 + num2;
//}
//
//double Add(double num1, double num2) {
//	cout << "Add(double num1, double num2)" << endl;
//	return num1 + num2;
//}
//
//int main(void) {
//	cout << Add(5, 7) << endl;
//	cout << Add(3.7, 7.5) << endl;
//	cout << Add<int>(5, 7) << endl;
//	cout << Add<double>(3.7, 7.5) << endl;
//	return 0;
//}

//using namespace std;
//
//template <class T1, class T2>
//void ShowData(double num) {
//	cout << (T1)num << ", " << (T2)num << endl;
//}
//
//int main(void) {
//	ShowData<char, int>(65);
//	ShowData<char, int>(67);
//	ShowData<char, double>(68.9);
//	ShowData<short, double>(69.2);
//	ShowData<short, double>(70.4);
//	return 0;
//}

//using namespace std;
//class Point {
//private:
//	int xpos, ypos;
//public:
//	Point(int x = 0, int y = 0) : xpos(x), ypos(y) {}
//	void ShowPosition() const {
//		cout << '[' << xpos << ", " << ypos << ']' << endl;
//	}
//};
//
//template <typename T>
//void SwapData(T& data1, T& data2) {
//	T temp = data1;
//	data1 = data2;
//	data2 = temp;
//}
//
//int main(void) {
//	Point pos1(3, 4);
//	Point pos2(10, 20);
//	SwapData(pos1, pos2);
//	pos1.ShowPosition();
//	pos2.ShowPosition();
//	return 0;
//}

//using namespace std;
//
//template <typename T>
//T SumArray(T arr[], int len) {
//	T sum = (T)0;
//	for (int i = 0; i < len; i++)
//		sum += arr[i];
//	return sum;
//}
//
//int main(void) {
//	int arr1[] = { 10, 20, 30 };
//	cout << SumArray(arr1, sizeof(arr1) / sizeof(int)) << endl;
//	double arr2[] = { 10.3, 20.4, 30.5 };
//	cout << SumArray(arr2, sizeof(arr2) / sizeof(double)) << endl;
//	return 0;
//}

//#include <cstring>
//using namespace std;
//
//template <typename T>
//T Max(T a, T b) {
//	return a > b ? a : b;
//}
//
//template <>
//char* Max<char*>(char* a, char* b) {
//	cout << "char* Max<char*>(char* a, char* b)" << endl;
//	return strlen(a) > strlen(b) ? a : b;
//}
//
//template <>
//const char* Max<const char*>(const char* a, const char* b) {
//	cout << "const char* Max<const char*>(const char* a, const char* b)" << endl;
//	return strcmp(a, b) > 0 ? a : b;
//}
//
//int main(void) {
//	cout << Max(11, 15) << endl;
//	cout << Max('T', 'Q') << endl;
//	cout << Max(3.5, 7.5) << endl;
//	cout << Max("Simple", "Best") << endl;
//
//	char str1[] = "Simple";
//	char str2[] = "Best";
//	cout << Max(str1, str2);
//
//	return 0;
//}

//using namespace std;
//
//template <typename T>
//class Point {
//private:
//	T xpos, ypos;
//public:
//	Point(T x = 0, T y = 0) : xpos(x), ypos(y) {}
//	void ShowPosition() const {
//		cout << '[' << xpos << ", " << ypos << ']' << endl;
//	}
//};
//
//int main(void) {
//	Point<int> pos1(3, 4);
//	pos1.ShowPosition();
//
//	Point<double> pos2(2.4, 3.6);
//	pos2.ShowPosition();
//
//	Point<char> pos3('P', 'F');
//	pos3.ShowPosition();
//	return 0;
//}

//using namespace std;
//
//template <typename T>
//class Point {
//private:
//	T xpos, ypos;
//public:
//	Point(T x = 0, T y = 0);
//	void ShowPosition() const;
//};
//
//template <typename T>
//Point<T>::Point(T x, T y) : xpos(x), ypos(y) {}
//
//template <typename T>
//void Point<T>::ShowPosition() const {
//	cout << '[' << xpos << ", " << ypos << ']' << endl;
//}
//
//int main(void) {
//	return 0;
//
//
//}

//using namespace std;
//
//void Divide(int num1, int num2) {
//	if (num2 == 0)
//		throw num2;
//	cout << "나눗셈의 몫: " << num1 / num2 << endl;
//	cout << "나눗셈의 나머지: " << num1 % num2 << endl;
//}
//
//int main(void) {
//	int num1, num2;
//	cout << "두 개의 숫자 입력: ";
//	cin >> num1 >> num2;
//
//	try {
//		Divide(num1, num2);
//		cout << "나눗셈을 마쳤습니다." << endl;
//	}
//	catch (int expn) {
//		cout << "제수는 " << expn << "이 될 수 없습니다." << endl;
//		cout << "프로그램을 다시 실행하세요." << endl;
//	}
//	return 0;
//}

#include <cstring>
#include <cmath>
using namespace std;

int StoI(char* str) {
	int len = strlen(str);
	int num = 0;

	for (int i = 0; i < len; i++) {
		if (str[i] < '0' || str[i]>'9')
			throw str[i];
		num += (int)(pow((double)10, (len - 1) - i) * (str[i] + (7 - '7')));
	}
	return num;
}

int main(void) {
	char str1[100];
	char str2[200];

	while (1) {
		cout << "두 개의 숫자 입력: ";
		cin >> str1 >> str2;

		try {
			cout << str1 << " + " << str2 << " = " << StoI(str1) + StoI(str2) << endl;
			break;
		}
		catch (char ch) {
			cout << "문자 " << ch << "가 입력되었습니다." << endl;
			cout << "재입력 진행합니다." << endl << endl;
		}
	}
	cout << "프로그램을 종료합니다." << endl;
	return 0;
}