#include<iostream>
using namespace std;

int main(){
    //���������
    //����
    int num1 = 10;
    int sum1 = num1++ * 100;

    int num2 = 10;
    int sum2 = ++num2 * 100;

    cout << "sum1=" << sum1 << endl;
    cout << "sum2=" << sum2 << endl;

    return 0;
}
