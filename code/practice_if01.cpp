//����˵����
//����ֻС��ABC����ֱ�������ֻС������أ������ж���ֻС�����أ�

#include<iostream>
using namespace std;

int main() {

    //С����������
    int pig1,pig2,pig3;
    //int weight_max;
    cout << "������С��1�����أ�" << endl;
    cin >> pig1;
    cout << "������С��2�����أ�" << endl;
    cin >> pig2;
    cout << "������С��3�����أ�" << endl;
    cin >> pig3;

    //�ж�����С��
    if (pig1 > pig2){
        if (pig1 > pig3)
            cout << "С��1���أ�" << endl;
        else if (pig1 == pig3)
            cout << "С��1��С��3һ���أ����أ�" << endl;
        else
            cout << "С��3���أ�" << endl;
    }
    else if (pig1 == pig2){
        if (pig1 > pig3)
            cout << "С��1��С��2���أ�" << endl;
        else if (pig1 == pig3)
            cout << "��ֻС��һ���أ����أ�" << endl;
        else
            cout << "С��3���أ�" << endl;
    }
    else {
        if (pig2 > pig3)
            cout << "С��2���أ�" << endl;
        else if (pig2 == pig3)
            cout << "С��2��С��3һ���أ����أ�" << endl;
        else
            cout << "С��3���أ�" << endl;
    }

    cout << "===========================================" << endl;
    cout << "��Ŀ��������" << endl;
    //��Ŀ�����
    pig1 > pig2 ? (pig1 > pig3 ? cout << "С��1����" << endl : cout << "С��3����" << endl) : (pig2 > pig3 ? cout << "С��2����" << endl : cout << "С��3����" << endl);

    return 0;
}
