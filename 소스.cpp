//����1(����2 or ���2)�� ���°� cpp���� �����ϴ�. ����1=����2 or ���2�� ����.
//Ŭ������ �̷� ������ ���簡 �����ϴ�. ���ڵ��� �ϳ��ϳ� �����ϸ�, ���� Ŭ������ ���Ѵ�. Ŭ���� �ȿ� ���� �����ڸ� �Է��ؾ��Ѵ�.

#include<iostream>
using namespace std;

class SoSimple
{
	int num1;
	int num2;
public:
	SoSimple(int n1, int n2):num1(n1),num2(n2){}
	SoSimple(SoSimple& copy) :num1(copy.num1), num2(copy.num2) { cout << "Called SoSimple(SoSimple&copy)" << endl; }	//�̷� ���¸� ���� �����ڶ� �Ѵ�.
	void ShowSimpleData() { cout << num1 << endl << num2 << endl; }
};

int main()
{
	SoSimple sim1(15, 30);
	cout << "���� �� �ʱ�ȭ ����" << endl;
	SoSimple sim2 = sim1;	//SoSimple(SoSimple&copy)�� ����.
	cout << "���� �� �ʱ�ȭ ����" << endl;
	sim2.ShowSimpleData();
	return 0;
}