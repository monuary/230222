//변수1(변수2 or 상수2)의 형태가 cpp에선 가능하다. 변수1=변수2 or 상수2와 같다.
//클래스도 이런 식으로 복사가 가능하다. 인자들을 하나하나 복사하며, 동일 클래스에 한한다. 클래스 안에 복사 생성자를 입력해야한다.

#include<iostream>
using namespace std;

class SoSimple
{
	int num1;
	int num2;
public:
	SoSimple(int n1, int n2):num1(n1),num2(n2){}
	SoSimple(SoSimple& copy) :num1(copy.num1), num2(copy.num2) { cout << "Called SoSimple(SoSimple&copy)" << endl; }	//이런 형태를 복사 생성자라 한다.
	void ShowSimpleData() { cout << num1 << endl << num2 << endl; }
};

int main()
{
	SoSimple sim1(15, 30);
	cout << "생성 및 초기화 직전" << endl;
	SoSimple sim2 = sim1;	//SoSimple(SoSimple&copy)와 같다.
	cout << "생성 및 초기화 직후" << endl;
	sim2.ShowSimpleData();
	return 0;
}