/*
  ����, ����, ���� ������ �Է¹޾� ������ ����� ����Ͽ� ����� ��
  ����� �̿��Ͽ� ������ �ο��Ѵ�.
  ������ ����� 90�� �̻��̸� 'A����', 80�� �̻��̸� 'B����',
  70�� �̻��̸� 'C����', 60�� �̻��̸� 'D����', �ܴ̿� 'F����'��
  ��µǵ��� �����Ѵ�.
  ��, �־��� ����� ���Ŀ� �°� ���α׷��� ������ ��.

  <�Է�����>
  ���� = 
  ���� = 
  ���� = 

  ���� : xx, ��� : xx, ���� : xx
*/

#include <iostream>
using namespace std;
int main() {

	int kor, eng, math, tot, avg;
	string grade;

	cout << "���� = ";
	cin >> kor;
	cout << "���� = ";
	cin >> eng;
	cout << "���� = ";
	cin >> math;

	tot = kor + eng + math;
	avg = tot / 3;

	if (avg >= 90)
		grade = "A����";
	else if(avg >= 80)
		grade = "B����";
	else if(avg >= 70)
		grade = "C����";
	else if(avg >= 60)
		grade = "D����";
	else
		grade = "F����";

	cout << "���� : " << tot << ", ��� : " << avg << ", ���� : " << grade << endl;

	return 0;
}