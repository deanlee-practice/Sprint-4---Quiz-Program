/*
  ���۷���(Reference) & NickName(��Ī)
  - �̸��� ���� ��� ������ �ٿ��ִ� ����
  - ���� : �޸� ������ �ٿ��� �̸�. ������(���)
  - �޸� ������ �̸��� �ϳ� �� �߰��ϴ� ����
  - ����
  int& ref = val;		// val�� �г������� ref�� ����ϰڴٴ� �ǹ�
*/

#include <iostream>
using namespace std;

int main() {
	int val = 10;
	int* pVal = &val;	// �����ͺ���
	int& rVal = val;	// ���۷��� ����  // �ݵ�� �ʱ�ȭ(������ ���� ����)�� �Ǿ��־�� �Ѵ�

	cout << "val = " << val << endl;
	cout << "rVal = " << rVal << endl;
	cout << "val �ּ� : " << &val << endl;
	cout << "val �ּ� : " << pVal << endl;

	return 0;
}
