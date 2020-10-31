#include<iostream>
#include<cstdlib>
#include<ctime>
#define random(a,b) ((rand() % (b-a)) + a)
using namespace std;


//案例说明：
/*
系统随机生成一个1到100之间的数字，玩家进行猜测，只有5次机会
如果猜错，提示玩家数字过大或过小，如果猜对恭喜玩家胜利，并且退出游戏。
*/
//由于rand()函数生成的随机数为伪随机数，可以可以通过设置随机数种子来保证每次运行的结果不同

int main(){

    int num_rand,num_guess;
    int time_guess = 5;
    cout << "这是一个猜字游戏，你只有5次机会！" << endl;
    cout << "请输入1到100之间的数字：" << endl;
    //通过宏定义实现random()函数
    srand((int)time(0)); //设置随机数种子
    num_rand = random(1,101);

    while (time_guess > 0){
        cin >> num_guess;
        if (num_guess == num_rand){
            cout << "恭喜你猜对了，真不错！" << endl;
            break;
        }
        else if(num_guess < num_rand){
            time_guess -= 1;
            cout << "小了继续猜,你还有" << time_guess << "次机会" << endl;
        }
        else{
            time_guess -= 1;
            cout << "大了继续猜,你还有" << time_guess << "次机会" << endl;
        }
    }

    cout << "游戏结束！" << endl;


}
