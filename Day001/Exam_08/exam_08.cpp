/*
  ��ũ�� �Լ��� �ζ��� �Լ�ȭ     // ��ũ���Լ��� c++�� �Ѿ���鼭 �ζ���(in line)�Լ� ȭ �� ��..
  - ���� : ���� �ӵ��� ������.
  - ���� : �� �ٿ� ����ؾ��Ѵ�.
*/

#include <iostream>
#define SQUARE(x) (x * x)	// ��ũ�� �Լ� // �ڷ����� ����?! - �ڷ����� ��������
using namespace std;

inline int SSS(int x) {		// �ζ��� �Լ� (inline �����)
	return x * x;
}

/*inline float SSS(float x) {
	return x * x;
}*/

int main() {
	cout << SQUARE(5.1f) << endl;  
	cout << SSS(5.1f) << endl;
	return 0;
}