/*
  ������(Operator)
  - �ǿ�����(���� or ���) ���̿� ����� �����ϱ� ���� ��ȣ��
  - ��������� : +, -, *, /(�Ǽ���), %(������)
  - ���׿����ڿ� ���׿�����(�� - ���� or ���)
*/

#include <iostream>
using namespace std;

int main() {
	int num1 = 10;
	int num2 = 4;

	cout << "+ �����ڿ� ���� �ᱣ�� : " << num1 + num2 << endl;
	cout << "- �����ڿ� ���� �ᱣ�� : " << num1 - num2 << endl;
	cout << "* �����ڿ� ���� �ᱣ�� : " << num1 * num2 << endl;
	cout << "/ �����ڿ� ���� �ᱣ�� : " << num1 / num2 << endl;
	cout << "% �����ڿ� ���� �ᱣ�� : " << num1 % num2 << endl;

	return 0;
}