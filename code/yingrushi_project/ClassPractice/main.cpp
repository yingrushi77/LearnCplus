/*
 �������---��װ��С����1
 �����������(Cube)

������������������

�ֱ���ȫ�ֺ����ͳ�Ա�����ж������������Ƿ���ȡ�
 */

/*
 * @author yingrushi 2020.12.09
 */

#include <iostream>
#include <cstdlib>

using namespace std;

//���Cube��

class Cube
{
private:
    int m_L;//������ĳ�
    int m_W;//������Ŀ�
    int m_H;//������ĸ�

    int m_Volume;//����������
    int m_Area;//����������

public:
    //���úͻ�ȡ�����������
    //���ó�
    void setLength(int length)
    {
        m_L = length;
    }
    //��ȡ��
    int getLength()
    {
        return m_L;
    }
    //���ÿ�
    void setWidth(int width)
    {
        m_W = width;
    }
    //��ȡ��
    int getWidth()
    {
        return m_W;
    }
    //���ø�
    void setHeight(int height)
    {
        m_H = height;
    }
    //��ȡ��
    int getHeight()
    {
        return m_H;
    }
    //��ȡ���
    int getVolume()
    {
        m_Volume = m_L * m_W * m_H;
        return m_Volume;
    }
    //��ȡ���
    int getArea()
    {
        m_Area = 2 * (m_L * m_W + m_L * m_H + m_W * m_H);
        return m_Area;
    }

    //�ڲ������ж������������Ƿ����
    bool isSameIn(Cube c)
    {
        if (m_L == c.getLength() && m_W == c.getWidth() && m_H == c.getHeight())
        {
            return true;
        }
        return false;
    }

};

bool isSameOut(Cube c1,Cube c2);//�ⲿ�����ж������������Ƿ����


int main()
{
    Cube c1;//����һ��Cube����
    c1.setLength(10);
    c1.setWidth(5);
    c1.setHeight(2);

    Cube c2;//������һ��Cube����
    c2.setLength(10);
    c2.setWidth(5);
    c2.setHeight(2);

    //�ⲿ�����ж�
    cout << "�ⲿ�����жϣ�" << (isSameOut(c1,c2) ? "�������������" : "���������岻���") << endl;
    //�ڲ������ж�
    cout << "�ڲ������жϣ�" << (c1.isSameIn(c2) ? "�������������" : "���������岻���") << endl;
    return 0;
}

bool isSameOut(Cube c1,Cube c2)
{
    if (c1.getLength() == c2.getLength() && c1.getWidth() == c2.getWidth() && c1.getHeight() == c2.getHeight())
    {
        return true;
    }
    return false;
}