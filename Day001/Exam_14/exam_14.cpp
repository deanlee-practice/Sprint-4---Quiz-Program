/*
  �Լ�(Function)
  - ���� ���� ��ɾ �ϳ��� �̸����� ��Ƽ� �����ϴ� ��ü
  - Ư���� ������ �����ϱ� ���� ���������� ����� �ڵ��� ����
  - ĸ��ȭ
  - ���� : �ݺ����� ���α׷����� ȿ�������� ����
  - ����
	 ��ȯ �ڷ��� �Լ���(�Ű�������) {
		// �Լ��� �������Ǻ�
	 }
  - ȣ���� ���ؼ� �����Ѵ�.
  - ȣ����
     Call By Name : �̸��� ���� ȣ��
	 Call By Value : (���� ���� ȣ��)�Լ��� �Ű������� ��Ƽ� ȣ��
	 Call By Reference : (�ּҿ� ���� ȣ��)�Լ��� �Ű������� �ּҸ� ��Ƽ� ȣ��
*/

#include <iostream>
using namespace std;

// �Լ� �����  // �Լ��� �ڿ������� �տ��� ������ ����� ��. ���� ���ϸ� ������ ��...
void aaa();
void bbb(int*, int*);  // (int x, int y)�� �ᵵ ��


int main(void) {
	// ����
	int x, y;

	// �Է¹�
	x = 10; y = 20;

	// ó����
	//aaa();			// Call By Name
	//bbb(x, y);		// Call By Value
	bbb(&x, &y);		// Call By Reference

	// ��¹�
	cout << "x = " << x << " , y = " << y << endl;

	return 0;  // int ��ȯ. �ý��� ����.
}


void aaa() {
	cout << "aaa �Լ� ȣ��" << endl;
	//return;
}

void bbb(int* x, int* y) {	// x=10, y=20 // ���� int�� �����ϸ� �ȵȴ�. ������ ��ü
	int tmp;					
	tmp = *x;
	*x = *y;
	*y = tmp;				// �� �Լ� �ȿ����� x,y�� ���� �ٲ� (��������)

	cout << "x = " << *x << " , y = " << *y << endl;
}


/*
int *x = &x
int *y = &y
          main
*/