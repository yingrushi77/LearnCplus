//通讯录项目
//
// Created by yingrushi on 2020/12/5.
//
#include<iostream>
#include<cstdlib>

using namespace std;

//通讯录最大联系人数量
const int numMax = 1000;

//联系人结构体
struct Person
{
    string name; //姓名
    int sex;  //性别：1 男生 2女生
    int age;  //年龄
    string phone;  //联系电话
    string address;  //家庭住址

};

//通讯录结构体
struct address_book
{
    Person persons[numMax];  //通讯录中保存的联系人数组
    int person_num;  //现有的通讯录中的人数
};

//菜单显示功能
void showMenu();

//添加联系人功能
void addPerson(address_book *s);

//显示联系人功能
void showPerson(address_book *s);

//查找联系人
int findPerson(address_book *s,string name);

//删除联系人功能
void deletePerson(address_book *s);

//查找联系人功能
void searchPerson(address_book *s);

//修改联系人功能
void alterPerson(address_book *s);

//清空联系人功能
void clearPerson(address_book *s);




int main()
{
    //创建通讯录并且初始化
    address_book adb;
    adb.person_num = 0;// 通讯录中的人数初始化时置为0

    int option = 0;//用户的选择的选项

    while (true)
    {
        showMenu();
        cout << "请选择要操作的选项：" << endl;
        cin >> option;
        switch (option)
        {
            case 1://添加联系人
                addPerson(&adb);
                break;
            case 2://显示联系人
                showPerson(&adb);
                break;
            case 3://删除联系人
                deletePerson(&adb);
                break;
            case 4://查找联系人
                searchPerson(&adb);
                break;
            case 5://修改联系人
                alterPerson(&adb);
                break;
            case 6://清空联系人
                clearPerson(&adb);
                break;
            case 0://退出通讯录
                cout << "欢迎下次使用！" << endl;

                return 0;

        }
    }
}

//菜单显示功能
void showMenu()
{
    cout << "*****     通讯录    *****" << endl;
    cout << "************************" << endl;
    cout << "*****  1.添加联系人  *****" << endl;
    cout << "*****  2.显示联系人  *****" << endl;
    cout << "*****  3.删除联系人  *****" << endl;
    cout << "*****  4.查找联系人  *****" << endl;
    cout << "*****  5.修改联系人  *****" << endl;
    cout << "*****  6.清空联系人  *****" << endl;
    cout << "*****  0.退出通讯录  *****" << endl;
    cout << "************************" << endl;
}


//添加联系人功能
void addPerson(address_book *s)
{
    if (s->person_num < numMax)
    {
        cout << "请输入联系人的名字" << endl;
        string name;
        cin >> name;
        s->persons[s->person_num].name = name;

        while (true)  //判断输入的性别是否有效
        {
            cout << "请输入联系人的性别" << endl;
            cout << "1 -- 男   2 -- 女" << endl;
            int sex;
            cin >> sex;
            if (sex != 1 && sex != 2)
            {
                cout << "输入有误，请重新输入！" << endl;

            }
            else
            {
                s->persons[s->person_num].sex = sex;
                break;
            }
        }

        while (true)  //用于判断输入的年龄是否有效
        {
            cout << "请输入联系人的年龄" << endl;
            int age;
            cin >> age;
            if (age > 0 || age < 150)
            {
                s->persons[s->person_num].age = age;
                break;
            }
            else
            {
                cout << "输入有误，请重新输入！" << endl;
            }
        }

        cout << "请输入联系人的联系电话" << endl;
        string phone;
        cin >> phone;
        s->persons[s->person_num].phone = phone;

        cout << "请输入联系人的地址" << endl;
        string address;
        cin >> address;
        s->persons[s->person_num].address = address;

        cout << "联系人" << name << "添加成功！" << endl;
        s->person_num++;//通讯录的人数相应的加1

    }
    else
    {
        cout << "通讯录已满，无法添加！" << endl;
    }

    //清屏操作，完成相应功能后，只显示菜单
    system("pause"); //按任意键继续
    system("cls"); //清屏

}


//显示联系人功能
void showPerson(address_book *s)
{
    if (s->person_num > 0)
    {
        for (int i = 0;i < s->person_num;i++)
        {
            cout << "姓名：" << s->persons[i].name << "\t";
            cout << "性别：" << ((s->persons[i].sex == 1) ? "男":"女") << "\t";
            cout << "年龄：" << s->persons[i].age << "\t";
            cout << "联系电话：" << s->persons[i].phone << "\t";
            cout << "家庭住址：" << s->persons[i].address << endl;

        }
    }
    else
    {
        cout << "通讯录为空，可以添加联系人后再查看" << endl;
    }

    //清屏
    system("pause");
    system("cls");
}

//查找联系人
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


//删除联系人功能
void deletePerson(address_book *s)
{
    string name;
    cout << "请输入要删除的联系人的姓名：" << endl;
    cin >> name;
    int judge;//用于判断是否查到此人
    judge = findPerson(s,name);
    if (judge != -1)
    {
        for (int i = judge;i < s->person_num - 1;i++)
        {
            s->persons[i] = s->persons[i + 1];
        }
        s->person_num--;
        cout << "联系人" << name << "删除成功" << endl;
    }
    else
    {
       cout << "通讯录中没有联系人" << name << endl;
    }

    //清屏
    system("pause");
    system("cls");
}


//查找联系人功能
void searchPerson(address_book *s)
{
    string name;
    cout << "请输入要查找的联系人：" << endl;
    cin >> name;
    int judge = findPerson(s,name);
    if (judge != -1)
    {
        cout << "姓名：" << s->persons[judge].name << "\t";
        cout << "性别：" << ((s->persons[judge].sex == 1) ? "男":"女") << "\t";
        cout << "年龄：" << s->persons[judge].age << "\t";
        cout << "联系电话：" << s->persons[judge].phone << "\t";
        cout << "家庭住址：" << s->persons[judge].address << endl;
    }
    else
    {
       cout << "通讯录中没有联系人" << name << endl;
    }

    //清屏
    system("pause");
    system("cls");
}


//修改联系人功能
void alterPerson(address_book *s)
{
    string name1;
    cout << "请输入要修改的联系人：" << endl;
    cin >> name1;
    int judge = findPerson(s,name1);
    if (judge != -1)
    {
        cout << "请重新输入联系人的信息！" << endl;
        cout << "请输入联系人的名字" << endl;
        string name;
        cin >> name;
        s->persons[s->person_num].name = name;

        while (true)  //判断输入的性别是否有效
        {
            cout << "请输入联系人的性别" << endl;
            cout << "1 -- 男   2 -- 女" << endl;
            int sex;
            cin >> sex;
            if (sex != 1 && sex != 2)
            {
                cout << "输入有误，请重新输入！" << endl;

            }
            else
            {
                s->persons[s->person_num].sex = sex;
                break;
            }
        }

        while (true)  //用于判断输入的年龄是否有效
        {
            cout << "请输入联系人的年龄" << endl;
            int age;
            cin >> age;
            if (age > 0 || age < 150)
            {
                s->persons[s->person_num].age = age;
                break;
            }
            else
            {
                cout << "输入有误，请重新输入！" << endl;
            }
        }

        cout << "请输入联系人的联系电话" << endl;
        string phone;
        cin >> phone;
        s->persons[s->person_num].phone = phone;

        cout << "请输入联系人的地址" << endl;
        string address;
        cin >> address;
        s->persons[s->person_num].address = address;

        cout << "联系人" << name << "修改成功！" << endl;
    }
    else
    {
        cout << "通讯录中没有联系人" << name1 << endl;
    }

    //清屏
    system("pause");
    system("cls");
}


//清空联系人功能
void clearPerson(address_book *s)
{
    if (s->person_num > 0)
    {
        s->person_num = 0;
        cout << "通讯录已清空！" << endl;
    }
    else
    {
        cout << "通讯录本空！" << endl;
    }

    //清屏
    system("pause");
    system("cls");
}