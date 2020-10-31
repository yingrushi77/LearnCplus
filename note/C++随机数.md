---
title: C++随机数
date: 2020.10.31
---

 



## C++产生随机数

C++中没有自带的random函数，要实现随机数的生成就需要使用rand()和srand()。

不过，由于rand()的内部实现是用线性同余法做的，所以生成的并不是真正的随机数，而是在一定范围内可看为随机的伪随机数。



### **rand（）**

**rand()**会返回一随机数值, 范围在0至RAND_MAX 间。RAND_MAX定义在**stdlib.h**, 其值为2147483647。

```c++
#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    for (int i = 0; i < 10; i++)
    {
        cout << rand() % 100 << " ";
    }
    return 0;
}
/*
83 86 77 15 93 35 86 92 49 21   在100中产生随机数， 但是因为没有随机种子所以，下一次运行也是这个数，因此就要引出srand()
*/
```



### **srand（）**

- **srand()**可用来设置**rand()**产生随机数时的随机数种子。通过设置不同的种子，我们可以获取不同的随机数序列。

- 可以利用**srand((int)(time(NULL))**的方法，利用系统时钟，产生不同的随机数种子。不过要调用**time()**，需要加入头文件**< ctime >**。

```c++
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand((int)time(0));  // 产生随机种子  把0换成NULL也行
    for (int i = 0; i < 10; i++)
    {
        cout << rand()%100<< " ";
    }
    return 0;
}
/*
13 8 99 28 43 84 34 24 72 19 11 90 27 79 94 4 9 42 84 26   两次产生的数据就不一样了
*/
```



### 使用习惯

- 为了方便的使用我们可以用宏定义来替换 rand函数

```c++
#include <iostream>
#include <cstdlib>
#include <ctime>
#define random(x) rand()%(x)
using namespace std;

int main()
{
    srand((int)time(0));  // 产生随机种子  把0换成NULL也行
    for (int i = 0; i < 10; i++)
    {
        cout << random(100) << " ";
    }
    return 0;
}
```



- 其他的随机数的范围通式
  - **要取得[0,n) 就是rand（）%n   表示 从0到n-1的数**

  - **要取得[a,b)的随机整数，使用(rand() % (b-a))+ a;** 
  - **要取得[a,b]的随机整数，使用(rand() % (b-a+1))+ a;** 
  - **要取得(a,b]的随机整数，使用(rand() % (b-a))+ a + 1;** 
  - **通用公式:a + rand() % n；其中的a是起始值，n是整数的范围。** 
    **要取得a到b之间的随机整数，另一种表示：a + (int)b \* rand() / (RAND_MAX + 1)。** 
  - **要取得0～1之间的浮点数，可以使用rand() / double(RAND_MAX)。**

```c++
//
// Created by lk on 18-10-14.
//
#include <iostream>
#include <cstdlib>
#include <ctime>
#define random(a,b) (rand()%(b-a)+a)

using namespace std;

int main()
{
    srand((int)time(0));  // 产生随机种子  把0换成NULL也行
    for (int i = 0; i < 10; i++)
    {
        cout << random(5, 10) << " ";
    }
    return 0;
}
//5 5 9 7 9 6 5 5 7 7   产生5到10之间的数， 不包括10
```

