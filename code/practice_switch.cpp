//��������
#include<iostream>
using namespace std;

int main() {

	//�����Ӱ����
	//10 ~ 9   ����
	// 8 ~ 7   �ǳ���
	// 6 ~ 5   һ��
	// 5������ ��Ƭ

	int score = 0;
	cout << "�����Ӱ���:" << endl;
	cin >> score;

	switch (score)
	{
	case 10:
	case 9:
		cout << "����" << endl;
		break;
	case 8:
		cout << "�ǳ���" << endl;
		break;
	case 7:
	case 6:
		cout << "һ��" << endl;
		break;
	default:
		cout << "��Ƭ" << endl;
		break;
	}

	//system("pause");

	return 0;
}
