#include<iostream>
#include<cstdlib>
#include<ctime>
#define random(a,b) ((rand() % (b-a)) + a)
using namespace std;


//����˵����
/*
ϵͳ�������һ��1��100֮������֣���ҽ��в²⣬ֻ��5�λ���
����´���ʾ������ֹ�����С������¶Թ�ϲ���ʤ���������˳���Ϸ��
*/
//����rand()�������ɵ������Ϊα����������Կ���ͨ�������������������֤ÿ�����еĽ����ͬ

int main(){

    int num_rand,num_guess;
    int time_guess = 5;
    cout << "����һ��������Ϸ����ֻ��5�λ��ᣡ" << endl;
    cout << "������1��100֮������֣�" << endl;
    //ͨ���궨��ʵ��random()����
    srand((int)time(0)); //�������������
    num_rand = random(1,101);

    while (time_guess > 0){
        cin >> num_guess;
        if (num_guess == num_rand){
            cout << "��ϲ��¶��ˣ��治��" << endl;
            break;
        }
        else if(num_guess < num_rand){
            time_guess -= 1;
            cout << "С�˼�����,�㻹��" << time_guess << "�λ���" << endl;
        }
        else{
            time_guess -= 1;
            cout << "���˼�����,�㻹��" << time_guess << "�λ���" << endl;
        }
    }

    cout << "��Ϸ������" << endl;


}
