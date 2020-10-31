#include<iostream>
using namespace std;

/*案例说明：
根据高考分数判断可以考上的大学
1.分数如果大于600分视为考上一本，大于500分考上二本，大于400考上三本，其余视为未考上本科；
2.在一本分数中，如果大于700分，考入北大，大于650分，考入清华，大于600考入人大。
*/

int main() {

    int score;
    cout << "请输入你的高考分数：" << endl;
    cin >> score;

    //学校的判断
    if (score > 600){
        if (score > 700)
            cout << "恭喜你可以考上北京大学！" << endl;
        else if (score > 650)
            cout << "恭喜你可以考上清华大学！" << endl;
        else
            cout << "恭喜你可以考上中国人民大学！" << endl;
    }

    else if (score > 500)
        cout << "你考上了二本大学！" << endl;
    else if (score > 400)
        cout << "你考上了三本大学！" << endl;
    else
        cout << "很遗憾，你没能考上本科，继续加油吧！" << endl;

    return 0;

}
