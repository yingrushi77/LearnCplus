#include<iostream>
using namespace std;

/*
����˵����������
��1��ʼ��������100�� ������ָ�λ����7����������ʮλ����7��
���߸�������7�ı��������Ǵ�ӡ�����ӣ���������ֱ�Ӵ�ӡ�����
*/

int main(){

    for (int num = 1;num <= 100;num++){
        //bool num_1 = false;
        //bool num_2 = false;
        //bool num_3 = false;
        bool num_1 = ((num % 10) == 7);//��λ�Ƿ���7
        bool num_2 = (((num % 100) / 10) == 7);//ʮλ�Ƿ���7
        bool num_3 = (num % 7 == 0);//�Ƿ���7�ı���
        if (num_1 || num_2 || num_3){
            cout << "������" << endl;
        }
        else
            cout << num << endl;


    }
    return 0;
}
