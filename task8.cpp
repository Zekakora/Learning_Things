/*在VS2008中新建项目，在项目中新建C++源文件，输入下面程序，并且编译、连接。
//********************************************************************
//*  程 序 名：实训8_2.cpp                                           *
//*  主要功能：                                                      *
//*     使用顺序查找法查找学生成绩单                                 *
//*     从最后一位同学到第一位同学依次进行比较，以下标0为监视哨     *
//*     查找成功输出下标，查找不成功输出提示信息                     *
//********************************************************************
#include <iostream>                         // 包含输入输出接口文件
using namespace std;                        // 引用标准命名空间
int main()                                  // 主函数
{
    const int n = 10;                       // 使用常变量定义学生人数
    // 定义成绩数组，有n+1个整型元素，其中下标处未存放学生成绩
    int score[n + 1] = {0, 80, 82, 84, 86, 88, 90, 92, 94, 96, 98};
    int x;                                  // 待查找的学生成绩
    int *p = 0;                             // 指向数组元素的指针变量
    cout<<"请输入待查找的学生成绩：";
    cin>>x;
    score[0] = x;                           // 在下标处设置监视哨
20  for(p = score + n; *p != x; p--)        // 顺序查找,从后到前循环比较当前元素
21      ;
    if(p == score)
    {
        cout << "在成绩册中查找不到该分数!" << endl;
    }
    else
    {
        cout << "查找到该分数所在的位置为：" << p - score << endl;
    }
    return 0;
}                                           //主函数结束
*/
/*
//***************************************************************
//*  程 序 名：实训8_1.cpp                                      *
//*  主要功能：                                                 *
//*     首先输入学生成绩，然后统计最高分以及获取最高分的学生数  *
//***************************************************************
#include <iostream>                         // 包含输入输出接口文件
using namespace std;                        // 引用标准命名空间
int main()                                  // 主函数
{
    const int n = 5;                        // 使用常变量定义学生人数
    int score[n];                           // 定义成绩数组，有n个整型元素
    int maxScore = 0;                       // 最高分，并初始化为
    int maxStudent = 0;                     // 得到最高分的学生人数
    int i;                                  // 循环变量
    int *p = nullptr;
    p = score;                              // p指向score[0]
    for(i = 0; i < n; i++)                  // 计数循环
    {                                       // 开始循环
        cout<<"请输入第"<<i<<"位学生的成绩：";
        cin>>p[i];                          // 输入第i位学生的成绩，并存储到score[i]
        if(maxScore < p[i])                 // 如果第i位学生的成绩高于原最高分
        {
            maxScore = p[i];                // 将最高分修改为第i位学生的成绩
        }
    }                                       // 结束循环
    cout<<"本班最高分为"<<maxScore<<endl;
    cout<<"得到最高分的学生序号为："<<endl;
    for(i = 0; i < n; i++)                  // 计数循环
    {                                       // 循环开始
        if(*(p + i) == maxScore)            // 如果第i位学生的成绩等于最高分
        {
            maxStudent++;                   // 得最高分的学生人数增1
            cout<<i<<endl;                  // 输出该生序号
        }
    }                                       // 循环结束
    cout<<"共有"<<maxStudent<<"位学生得到最高分"<<endl;
    return 0;
}                                           //主函
*/

//********************************************************************
//*  程 序 名：实训8_3.cpp                                           *
//*  主要功能：                                                      *
//*   相反的顺序输出各个字符
//********************************************************************
#include <iostream>                         // 包含输入输出接口文件
using namespace std;                        // 引用标准命名空间
int main()                                  // 主函数
{   int max_len;
    cout<<"请输入字符数量：";
    cin>>max_len;
    char series[max_len];
    char *p = nullptr;
    fflush(stdin);                      //刷新缓冲区
    cout<<"请输入字符：";
    gets(series);
    for(p = series+max_len-1; p >= series; p--){
        cout<<*p;
    }

}                                           //主函数结束


/*
 * //***************************************************************
//*  程 序 名：实训8_3.cpp                                      *
//*  主要功能：                                                 *
//*     冒泡排序输出课程信息 *
//***************************************************************


#include "iostream"
#include "cstring"
using namespace std;

struct del{                          // claim structure  del is short for detail
    char series[81];
    char name[101];
    float score;
    int times;
    float week_time;
    int semester;
};


int main(){
    del classes[100];
    del aaa{};

    int num;                                    // claim classes amount
    cout<<"Plz input class amount:";
    cin>>num;


    for(int i = 1; i <= num; ++i){                          // input classes info
        printf("Next, you will enter class %d info\n", i);
        fflush(stdin);                                      // flush cache
        cout<<"Plz input class name:"<<endl;
        gets(aaa.name);
        cout<<"Plz input class series:"<<endl;
        cin>>aaa.series;
        cout<<"Plz input class credits:"<<endl;
        cin>>aaa.score;
        cout<<"Plz input class hours:"<<endl;
        cin>>aaa.times;
        printf("Plz input class average week hours:\n");
        cin>>aaa.week_time;
        cout<<"Plz input class will continual how many semesters:\n";
        cin>>aaa.semester;
        classes[i] = aaa;
        cout<<"class"<<i<<"info has been written"<<endl;
        cout<<endl;
    }

    del *p = classes;
    for(int i = 1; i < 100; ++i)
    {                                   // Bubble Sort
        for(int j = 1; j < num; j++)
        {
            if(strcmp((*(p+j)).series,(*(p+j+1)).series) > 0)
            {
                *p = *(p+j);
                *(p+j) = *(p+j+1);
                *(p+j+1) = *p;
            }
            else
                continue;
        }
    }

    for(int i = 1; i <= num; ++i){              //output part
        cout<<"class"<<i<<":"<<endl;
        cout<<"Series:"<<classes[i].series<<endl;
        cout<<"Name:"<<classes[i].name<<endl;
        cout<<"Credits:"<<classes[i].score<<endl;
        cout<<"Total hours:"<<classes[i].times<<endl;
        cout<<"Weekly hours:"<<classes[i].week_time<<endl;
        cout<<"Semester:"<<classes[i].semester<<endl;
        cout<<endl;
    }

    return 0;
}
 */