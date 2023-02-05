////***************************************************************
////*  程序名：实训11_3.cpp                                       *
////*  主要功能：                                                 *
////*     使用静态全局变量求个数据的最大值和最小值                *
////***************************************************************
#include <iostream>
using namespace std;                        // 引入标准命名空间

int maxre = 0, minre = 0;                   // 定义全局变量

void maxmin(const int *series){             // 求最大最小值（传址调用）
    int a = *series;
    maxre = minre = a;

    for(int i = 0; i < 20; i++)              // 逻辑判断
    {
        a = *(series+i);
        if(a < minre) minre = a;
        else if(a > maxre) maxre = a;
        else continue;
    }
}

int main(){
    int sec[20];
    for(int i = 0; i < 20; i++)              // 获取数据
    {
        cin>>*(sec+i);
    }

    maxmin(sec);
    cout<<"Max:"<<maxre<<"  Min:"<<minre;
    return 0;                                // 结束
}