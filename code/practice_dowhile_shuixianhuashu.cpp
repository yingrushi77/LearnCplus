#include<iostream>
#include<math.h>
using namespace std;

/*
����˵����ˮ�ɻ���
ˮ�ɻ�����ָһ�� 3 λ��������ÿ��λ�ϵ����ֵ� 3����֮�͵���������

���磺1^3 + 5^3+ 3^3 = 153

������do...while��䣬�������3λ���е�ˮ�ɻ���
*/

int main(){

    int num = 100;
    int num_1,num_2,num_3,sum;
    //bool judge;//boolֵ�������ж�
    do {
        num_1 = num % 10; //��λ���ĸ�λ
        num_2 = (num % 100) / 10;//��λ����ʮλ
        num_3 = num / 100;//��λ���İ�λ
        sum = pow(num_1,3) + pow(num_2,3) + pow(num_3,3);//��֮��
        if (sum == num){
            cout << num << " ";
        }
        num++;


    } while(num < 1000);

    return 0;
}
