#include<iostream>
using namespace std;

//敲桌子的另一种解法，这种解法更具有普遍意义，可以从中举一反三

int main(){
    int N;//表示要查找的最后的数字
    cout << "请输入要查找的最后的数：" << endl;
    cin >> N;

    for (int num = 1;num <= N;num++){

        bool include7 = false;//临时存储布尔值，用于后面的输出 else if
        //判断是否含有数字7 从十位数向更高位查找
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
            cout << "敲桌子" << "  ";
        }

        else if(include7)
            cout << "敲桌子" << "  ";
        else
            cout << num << "  ";

    }
    return 0;
}
