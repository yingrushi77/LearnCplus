#include<iostream>
using namespace std;

/*
案例说明：敲桌子
从1开始数到数字100， 如果数字个位含有7，或者数字十位含有7，
或者该数字是7的倍数，我们打印敲桌子，其余数字直接打印输出。
*/

int main(){

    for (int num = 1;num <= 100;num++){
        //bool num_1 = false;
        //bool num_2 = false;
        //bool num_3 = false;
        bool num_1 = ((num % 10) == 7);//个位是否含有7
        bool num_2 = (((num % 100) / 10) == 7);//十位是否含有7
        bool num_3 = (num % 7 == 0);//是否是7的倍数
        if (num_1 || num_2 || num_3){
            cout << "敲桌子" << endl;
        }
        else
            cout << num << endl;


    }
    return 0;
}
