//ͨѶ¼��Ŀ
//
// Created by yingrushi on 2020/12/5.
//
#include<iostream>
#include<cstdlib>

using namespace std;

//ͨѶ¼�����ϵ������
const int numMax = 1000;

//��ϵ�˽ṹ��
struct Person
{
    string name; //����
    int sex;  //�Ա�1 ���� 2Ů��
    int age;  //����
    string phone;  //��ϵ�绰
    string address;  //��ͥסַ

};

//ͨѶ¼�ṹ��
struct address_book
{
    Person persons[numMax];  //ͨѶ¼�б������ϵ������
    int person_num;  //���е�ͨѶ¼�е�����
};

//�˵���ʾ����
void showMenu();

//�����ϵ�˹���
void addPerson(address_book *s);

//��ʾ��ϵ�˹���
void showPerson(address_book *s);

//������ϵ��
int findPerson(address_book *s,string name);

//ɾ����ϵ�˹���
void deletePerson(address_book *s);

//������ϵ�˹���
void searchPerson(address_book *s);

//�޸���ϵ�˹���
void alterPerson(address_book *s);

//�����ϵ�˹���
void clearPerson(address_book *s);




int main()
{
    //����ͨѶ¼���ҳ�ʼ��
    address_book adb;
    adb.person_num = 0;// ͨѶ¼�е�������ʼ��ʱ��Ϊ0

    int option = 0;//�û���ѡ���ѡ��

    while (true)
    {
        showMenu();
        cout << "��ѡ��Ҫ������ѡ�" << endl;
        cin >> option;
        switch (option)
        {
            case 1://�����ϵ��
                addPerson(&adb);
                break;
            case 2://��ʾ��ϵ��
                showPerson(&adb);
                break;
            case 3://ɾ����ϵ��
                deletePerson(&adb);
                break;
            case 4://������ϵ��
                searchPerson(&adb);
                break;
            case 5://�޸���ϵ��
                alterPerson(&adb);
                break;
            case 6://�����ϵ��
                clearPerson(&adb);
                break;
            case 0://�˳�ͨѶ¼
                cout << "��ӭ�´�ʹ�ã�" << endl;

                return 0;

        }
    }
}

//�˵���ʾ����
void showMenu()
{
    cout << "*****     ͨѶ¼    *****" << endl;
    cout << "************************" << endl;
    cout << "*****  1.�����ϵ��  *****" << endl;
    cout << "*****  2.��ʾ��ϵ��  *****" << endl;
    cout << "*****  3.ɾ����ϵ��  *****" << endl;
    cout << "*****  4.������ϵ��  *****" << endl;
    cout << "*****  5.�޸���ϵ��  *****" << endl;
    cout << "*****  6.�����ϵ��  *****" << endl;
    cout << "*****  0.�˳�ͨѶ¼  *****" << endl;
    cout << "************************" << endl;
}


//�����ϵ�˹���
void addPerson(address_book *s)
{
    if (s->person_num < numMax)
    {
        cout << "��������ϵ�˵�����" << endl;
        string name;
        cin >> name;
        s->persons[s->person_num].name = name;

        while (true)  //�ж�������Ա��Ƿ���Ч
        {
            cout << "��������ϵ�˵��Ա�" << endl;
            cout << "1 -- ��   2 -- Ů" << endl;
            int sex;
            cin >> sex;
            if (sex != 1 && sex != 2)
            {
                cout << "�����������������룡" << endl;

            }
            else
            {
                s->persons[s->person_num].sex = sex;
                break;
            }
        }

        while (true)  //�����ж�����������Ƿ���Ч
        {
            cout << "��������ϵ�˵�����" << endl;
            int age;
            cin >> age;
            if (age > 0 || age < 150)
            {
                s->persons[s->person_num].age = age;
                break;
            }
            else
            {
                cout << "�����������������룡" << endl;
            }
        }

        cout << "��������ϵ�˵���ϵ�绰" << endl;
        string phone;
        cin >> phone;
        s->persons[s->person_num].phone = phone;

        cout << "��������ϵ�˵ĵ�ַ" << endl;
        string address;
        cin >> address;
        s->persons[s->person_num].address = address;

        cout << "��ϵ��" << name << "��ӳɹ���" << endl;
        s->person_num++;//ͨѶ¼��������Ӧ�ļ�1

    }
    else
    {
        cout << "ͨѶ¼�������޷���ӣ�" << endl;
    }

    //���������������Ӧ���ܺ�ֻ��ʾ�˵�
    system("pause"); //�����������
    system("cls"); //����

}


//��ʾ��ϵ�˹���
void showPerson(address_book *s)
{
    if (s->person_num > 0)
    {
        for (int i = 0;i < s->person_num;i++)
        {
            cout << "������" << s->persons[i].name << "\t";
            cout << "�Ա�" << ((s->persons[i].sex == 1) ? "��":"Ů") << "\t";
            cout << "���䣺" << s->persons[i].age << "\t";
            cout << "��ϵ�绰��" << s->persons[i].phone << "\t";
            cout << "��ͥסַ��" << s->persons[i].address << endl;

        }
    }
    else
    {
        cout << "ͨѶ¼Ϊ�գ����������ϵ�˺��ٲ鿴" << endl;
    }

    //����
    system("pause");
    system("cls");
}

//������ϵ��
int findPerson(address_book *s,string name)
{
    for (int i = 0;i < s->person_num;i++)
    {
        if (s->persons[i].name == name)
        {
            return i;
        }
    }

    return -1;
}


//ɾ����ϵ�˹���
void deletePerson(address_book *s)
{
    string name;
    cout << "������Ҫɾ������ϵ�˵�������" << endl;
    cin >> name;
    int judge;//�����ж��Ƿ�鵽����
    judge = findPerson(s,name);
    if (judge != -1)
    {
        for (int i = judge;i < s->person_num - 1;i++)
        {
            s->persons[i] = s->persons[i + 1];
        }
        s->person_num--;
        cout << "��ϵ��" << name << "ɾ���ɹ�" << endl;
    }
    else
    {
       cout << "ͨѶ¼��û����ϵ��" << name << endl;
    }

    //����
    system("pause");
    system("cls");
}


//������ϵ�˹���
void searchPerson(address_book *s)
{
    string name;
    cout << "������Ҫ���ҵ���ϵ�ˣ�" << endl;
    cin >> name;
    int judge = findPerson(s,name);
    if (judge != -1)
    {
        cout << "������" << s->persons[judge].name << "\t";
        cout << "�Ա�" << ((s->persons[judge].sex == 1) ? "��":"Ů") << "\t";
        cout << "���䣺" << s->persons[judge].age << "\t";
        cout << "��ϵ�绰��" << s->persons[judge].phone << "\t";
        cout << "��ͥסַ��" << s->persons[judge].address << endl;
    }
    else
    {
       cout << "ͨѶ¼��û����ϵ��" << name << endl;
    }

    //����
    system("pause");
    system("cls");
}


//�޸���ϵ�˹���
void alterPerson(address_book *s)
{
    string name1;
    cout << "������Ҫ�޸ĵ���ϵ�ˣ�" << endl;
    cin >> name1;
    int judge = findPerson(s,name1);
    if (judge != -1)
    {
        cout << "������������ϵ�˵���Ϣ��" << endl;
        cout << "��������ϵ�˵�����" << endl;
        string name;
        cin >> name;
        s->persons[s->person_num].name = name;

        while (true)  //�ж�������Ա��Ƿ���Ч
        {
            cout << "��������ϵ�˵��Ա�" << endl;
            cout << "1 -- ��   2 -- Ů" << endl;
            int sex;
            cin >> sex;
            if (sex != 1 && sex != 2)
            {
                cout << "�����������������룡" << endl;

            }
            else
            {
                s->persons[s->person_num].sex = sex;
                break;
            }
        }

        while (true)  //�����ж�����������Ƿ���Ч
        {
            cout << "��������ϵ�˵�����" << endl;
            int age;
            cin >> age;
            if (age > 0 || age < 150)
            {
                s->persons[s->person_num].age = age;
                break;
            }
            else
            {
                cout << "�����������������룡" << endl;
            }
        }

        cout << "��������ϵ�˵���ϵ�绰" << endl;
        string phone;
        cin >> phone;
        s->persons[s->person_num].phone = phone;

        cout << "��������ϵ�˵ĵ�ַ" << endl;
        string address;
        cin >> address;
        s->persons[s->person_num].address = address;

        cout << "��ϵ��" << name << "�޸ĳɹ���" << endl;
    }
    else
    {
        cout << "ͨѶ¼��û����ϵ��" << name1 << endl;
    }

    //����
    system("pause");
    system("cls");
}


//�����ϵ�˹���
void clearPerson(address_book *s)
{
    if (s->person_num > 0)
    {
        s->person_num = 0;
        cout << "ͨѶ¼����գ�" << endl;
    }
    else
    {
        cout << "ͨѶ¼���գ�" << endl;
    }

    //����
    system("pause");
    system("cls");
}