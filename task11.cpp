//***************************************************************
//*  程序名：实训11_1.cpp                                       *
//*  主要功能：                                                 *
//*     将数字字符串转换为整数                                  *
//***************************************************************
#include <iostream>                         // 包含输入输出接口文件
using namespace std;                        // 引用标准命名空间
int main()
{
    char stuNo[50] = "";                    // 定义字符数组用来存放学号
    unsigned int i = 0 ;                    // 数组下标变量
    unsigned int number = 0;                // 存放转换后得到的整数
    cout << "请输入学生的学号:\t";
    cin >> stuNo;	                          // 从键盘输入整型字符串到字符数组中
      while(stuNo[i] != '\0' && stuNo[i] >= '0' && stuNo[i] <= '9')
          {// 定义局部变量k存放字符stuNo[i]的ASCII码和字符'0' 的ASCII码之差
              int k = stuNo[i] - 48;              // 字符'0' 的ASCII码是48
              number = 10 * number + k;
              i++;
          }
    cout << "转换出的整数为：" << number <<endl;
    return 0;
}

/*
//***************************************************************
//*  程序名：实训11_2.cpp                                       *
//*  主要功能：                                                 *
//*     使用静态全局变量求个成绩的最大值和最小值                *
//***************************************************************
#include <iostream>                         // 包含输入输出接口文件
using namespace std;                        // 引用标准命名空间
 static int score[10] = { 0 };            // 定义静态全局数组
 static int maxScore = 0, minScore = 0;   // 定义静态全局变量
void find_Max_Min();                        // 函数声明
int main()
{
    int i = 0;                              // 数组下标变量
    cout << "Enter 10 scores:" << endl;
    for(i = 0; i < 10; i++)
    {
        cin >> score[i];
    }
    maxScore = minScore = score[0];
    find_Max_Min();                         // 调用函数find_Max_Min()
    cout << "The Max score: " << maxScore << endl;
    cout << "The Min score: " << minScore << endl;
    return 0;
}
void find_Max_Min()                         // 求最大值和最小值函数
{
    int i = 0;                              // 数组下标变量
    for(i = 0; i < 10; i++)
    {
        if(score[i] > maxScore)
        {
            maxScore = score[i];
        }
        if(score[i] < minScore)
        {
            minScore = score[i];
        }
    }
    return;                                 // 将程序的执行流程带回到主调函数
}

 */

/*
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
 */

/*
////***************************************************************
////*  程序名：实训11_4.cpp                                       *
////*  主要功能：                                                 *
////*     使用静态全局变量求个数据的最大公约数与最小公倍数                *
////***************************************************************
#include <iostream>
using namespace std;            // 引用标准命名空间

int gysh = 0, gbsh = 0;         // 定义全局变量

void number(int m, int n){      // 求最大公倍数最小公倍数算法函数
    int a = m, b = n;
    while (n != 0) {            // 阿基米德算法求最大公因数
        int temp = m % n;
        m = n;
        n = temp;
    }
    gysh = m;
    cout<<"最大公约数："<<gysh<<endl;
    gbsh = (a * b) / gysh;      // 求最小公倍数
    cout<<"最小公倍数："<<gbsh;
}

int main(){
    int a, b;
    cin>>a>>b;                  // 获取变量
    number(a, b);
    return 0;                   // 结束
}
 */