#include<iostream>
#include<math.h>
using namespace std;

/*
案例说明：水仙花数
水仙花数是指一个 3 位数，它的每个位上的数字的 3次幂之和等于它本身

例如：1^3 + 5^3+ 3^3 = 153

请利用do...while语句，求出所有3位数中的水仙花数
*/

int main(){

    int num = 100;
    int num_1,num_2,num_3,sum;
    //bool judge;//bool值，用于判断
    do {
        num_1 = num % 10; //三位数的个位
        num_2 = (num % 100) / 10;//三位数的十位
        num_3 = num / 100;//三位数的百位
        sum = pow(num_1,3) + pow(num_2,3) + pow(num_3,3);//幂之和
        if (sum == num){
            cout << num << " ";
        }
        num++;


    } while(num < 1000);

    return 0;
}
