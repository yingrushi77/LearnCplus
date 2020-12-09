/*
 类的属性---封装的小案例1
 设计立方体类(Cube)

求出立方体的面积和体积

分别用全局函数和成员函数判断两个立方体是否相等。
 */

/*
 * @author yingrushi 2020.12.09
 */

#include <iostream>
#include <cstdlib>

using namespace std;

//设计Cube类

class Cube
{
private:
    int m_L;//立方体的长
    int m_W;//立方体的宽
    int m_H;//立方体的高

    int m_Volume;//长方体的体积
    int m_Area;//长方体的面积

public:
    //设置和获取长方体的属性
    //设置长
    void setLength(int length)
    {
        m_L = length;
    }
    //获取长
    int getLength()
    {
        return m_L;
    }
    //设置宽
    void setWidth(int width)
    {
        m_W = width;
    }
    //获取宽
    int getWidth()
    {
        return m_W;
    }
    //设置高
    void setHeight(int height)
    {
        m_H = height;
    }
    //获取高
    int getHeight()
    {
        return m_H;
    }
    //获取体积
    int getVolume()
    {
        m_Volume = m_L * m_W * m_H;
        return m_Volume;
    }
    //获取面积
    int getArea()
    {
        m_Area = 2 * (m_L * m_W + m_L * m_H + m_W * m_H);
        return m_Area;
    }

};




int main() {

    return 0;
}
