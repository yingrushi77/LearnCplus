#include<iostream>
using namespace std;

//�����ӵ���һ�ֽⷨ�����ֽⷨ�������ձ����壬���Դ��о�һ����

int main(){
    int N;//��ʾҪ���ҵ���������
    cout << "������Ҫ���ҵ���������" << endl;
    cin >> N;

    for (int num = 1;num <= N;num++){

        bool include7 = false;//��ʱ�洢����ֵ�����ں������� else if
        //�ж��Ƿ�������7 ��ʮλ�������λ����
        int temp = num;
        while(temp > 0){
            if(temp % 10 == 7){
                include7 = true;
                break;
            }
            else
                temp /= 10;

        }

        if(num % 7 == 0){
            cout << "������" << "  ";
        }

        else if(include7)
            cout << "������" << "  ";
        else
            cout << num << "  ";

    }
    return 0;
}
