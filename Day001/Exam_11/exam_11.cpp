/*
  pointer(������) : �޸𸮸� ����Ű�� Ű����
  - �޸��� �ּҰ��� �����ϴ� ����(�����ͺ���)
*/

#include <iostream>
using namespace std;

int main() {
	int a = 10;			// �Ϲ� ���� ����
	int b = 20;
	int* /*const*/ p = &a;  // ������ ���� ���� // a�� �ּҸ� ����  // const�� ���̸� p�� ���ȭ ��

	cout << "a = " << a << endl;
	cout << "p = " << p << endl;
	cout << "p = " << &a << endl;	// & �ּҿ�����(reference)
	cout << "a = " << *p << endl;	// * ����������(���� ���� ������)
	/*
	p = &b;							// �����ʹ� ���� �� ����
	cout << "b = " << *p << endl;
	cout << "b = " << p << endl;
	*/
	cout << *p << endl;
	*p = 2;					// �ּҿ� ���� ����(���� ���� ������) // const�Ǹ� ����Ұ�
	// const int* p �� ��, '*p'�� ���ȭ �Ǿ �ٸ� ���� ���� �� ����
	// int* const p �� ��, 'p'�� ���ȭ �Ǿ �ٸ� ���� ���� �� ����

	p = &b;
	cout << "*p = " << *p << endl;
	cout << "b = " << p << endl;

	cout << *p << endl;
	cout << "a = " << a << endl;

	return 0;
}