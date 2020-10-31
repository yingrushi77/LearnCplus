//案例说明：
//有三只小猪ABC，请分别输入三只小猪的体重，并且判断哪只小猪最重？

#include<iostream>
using namespace std;

int main() {

    //小猪体重输入
    int pig1,pig2,pig3;
    //int weight_max;
    cout << "请输入小猪1的体重：" << endl;
    cin >> pig1;
    cout << "请输入小猪2的体重：" << endl;
    cin >> pig2;
    cout << "请输入小猪3的体重：" << endl;
    cin >> pig3;

    //判断最重小猪
    if (pig1 > pig2){
        if (pig1 > pig3)
            cout << "小猪1最重！" << endl;
        else if (pig1 == pig3)
            cout << "小猪1和小猪3一样重，最重！" << endl;
        else
            cout << "小猪3最重！" << endl;
    }
    else if (pig1 == pig2){
        if (pig1 > pig3)
            cout << "小猪1和小猪2最重！" << endl;
        else if (pig1 == pig3)
            cout << "三只小猪一样重，最重！" << endl;
        else
            cout << "小猪3最重！" << endl;
    }
    else {
        if (pig2 > pig3)
            cout << "小猪2最重！" << endl;
        else if (pig2 == pig3)
            cout << "小猪2和小猪3一样重，最重！" << endl;
        else
            cout << "小猪3最重！" << endl;
    }

    cout << "===========================================" << endl;
    cout << "三目运算符解决" << endl;
    //三目运算符
    pig1 > pig2 ? (pig1 > pig3 ? cout << "小猪1最重" << endl : cout << "小猪3最重" << endl) : (pig2 > pig3 ? cout << "小猪2最重" << endl : cout << "小猪3最重" << endl);

    return 0;
}
