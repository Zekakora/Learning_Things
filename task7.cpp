/*

  //***************************************************************
//*  程 序 名：实训7_3.cpp                                      *
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
//        scanf_s("%s",aaa.name);
        gets(aaa.name);
        cout<<"Plz input class series:"<<endl;
        cin>>aaa.series;
//        gets(aaa.series);
        cout<<"Plz input class credits:"<<endl;
        cin>>aaa.score;
//        scanf_s("%f",aaa.score);
        cout<<"Plz input class hours:"<<endl;
        cin>>aaa.times;
//        scanf_s("%f",aaa.times);
        printf("Plz input class average week hours:\n");
        cin>>aaa.week_time;
//        scanf_s("%f",aaa.week_time);
        cout<<"Plz input class will continual how many semesters:\n";
        cin>>aaa.semester;
//        scanf_s("%f",aaa.semester);
        classes[i] = aaa;
        cout<<"class"<<i<<"info has been written"<<endl;
//        system("pause");
        cout<<endl;
    }

    for(int i = 1; i < 100; ++i){                                   // Bubble Sort
        for(int j = 1; j < num; j++){
            if(strcmp(classes[j].series,classes[j+1].series) > 0){
                classes[0] = classes[j];
                classes[j] = classes[j+1];
                classes[j+1] = classes[0];
            } else continue;
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

/*
 //***************************************************************
//*  程 序 名：实训7_2.cpp                                      *
//*  主要功能：                                                 *
//*     求矩阵的乘积                                            *
//***************************************************************
#include <iostream>                 // 包含输入输出接口文件
using namespace std;                        // 引用标准命名空间
int main()                                  // 主函数
{
    const int N = 10;                       // 定义矩阵行、列数的最大值
    int A[N][N] = {0}, B[N][N] = {0}, C[N][N] = {0};
    int i = 0, j = 0, k = 0;                // 循环变量
    int m1 = 0, n1 = 0;                     // A矩阵的行、列数
    int m2 = 0, n2 = 0;                     // B矩阵的行、列数
    cout<<"请输入A矩阵的行、列数（不超过10）：";
    cin>>m1>>n1;
     cout<<"请输入B矩阵的行、列数（不超过10）：";
     cin>>m2>>n2;
    cout<<"请输入A矩阵："<<endl;
    for(i = 0; i < m1; i++)
    {
        for(j = 0; j < n1; j++)
        {
            cout<<"A["<<i<<"]["<<j<<"]=";
            cin>>A[i][j];
        }
    }
    cout<<"请输入B矩阵："<<endl;
    for(i = 0; i < m2; i++)
    {
        for(j = 0; j < n2; j++)
        {
            cout<<"B["<<i<<"]["<<j<<"]=";
            cin>>B[i][j];
        }
    }
    // 计算A、B矩阵的乘积，结果存入C矩阵
    for(i = 0; i < m1; i++)
    {
        for(j = 0; j < n2; j++)
        {
            C[i][j] = 0;
            for(k = 0; k < n1; k++)
            {
                C[i][j] = C[i][j] + A[i][k] * B[k][j];
            }
        }
    }
    cout<<"结果矩阵C="<<endl;
    for(i = 0; i < m1; i++)
    {
        for(j = 0; j < n2; j++)
        {
            cout<<"\t"<<C[i][j];
        }
        cout<<endl;
    }
    return 0;
}

 */
