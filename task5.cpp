/*
//***************************************************************
//*  程 序 名：实训5_1.cpp                                      *
//*  主要功能：                                                 *
//*     从键盘输入某一课程成绩，并进行统计                      *
//***************************************************************
#include <iostream>                         // 包含输入输出接口文件
using namespace std;                        // 引用标准命名空间
int main()                                  // 定义主函数
{
    int count = 0;                          // 选课总人数
    int examScore = 0;                      // 学生成绩
    int maxExamScore = 0;                   // 最高分
    int minExamScore = 0;                   // 最低分
    int totalExamScore = 0;                 // 总分
    int averageExamScore = 0;               // 平均分
    int score_100 = 0;                      // 100分人数
    int score_90_99 = 0;                    // 90～分人数
    int score_80_89 = 0;                    // 80～分人数
    int score_70_79 = 0;                    // 70～分人数
    int score_60_69 = 0;                    // 60～分人数
    int score_0 = 0;                        // 不及格人数
    cout << "请输入学生成绩（0～100）："<< endl;
    cin >> examScore;
    maxExamScore = minExamScore = examScore;
    while(examScore >= 0 && examScore <= 100 )
    {                                       // 对符合条件的分值进行统计和计算
        count ++ ;                          // 人数累增
        if(examScore > maxExamScore)        // 记录最高分
        {
            maxExamScore = examScore;
        }
        if(examScore < minExamScore)        // 记录最低分
        {
            minExamScore = examScore;
        }
        switch(examScore/10)                // 按分数段统计人数
        {
            case 10: score_100++;   //break;
            case 9:  score_90_99++; //break;
            case 8:  score_80_89++; //break;
            case 7:  score_70_79++; //break;
            case 6:  score_60_69++; //break;
            default: score_0++;
        }
        totalExamScore += examScore;        // 总分累增
        cin >> examScore;                   // 输入下一个学生的成绩
    }
    averageExamScore = totalExamScore / count;  // 计算平均分
    cout << endl;                           // 以下显示统计信息
    cout << "选课总人数：" << count << endl;
    cout << "最高分：" << maxExamScore << endl;
    cout << "最低分：" << minExamScore << endl;
    cout << "平均分：" << averageExamScore << endl;
    cout << "100分人数：  " << score_100 << endl;
    cout << "90~99分人数：" << score_90_99 << endl;
    cout << "80~89分人数：" << score_80_89 << endl;
    cout << "70~79分人数：" << score_70_79 << endl;
    cout << "60~69分人数：" << score_60_69 << endl;
    cout << "不及格人数： " << score_0 <<  endl;
    cout << endl;
    return 0;
}                                           // 主函数结束
*/

/*
#include <iostream>                         // 包含输入输出接口文件
using namespace std;                        // 引用标准命名空间

void menu(){
    system("cls");
    cout<<"\n\n\n\n\n";
    cout<<"\t\t|---------------学生选课系统(学生版)------------|\n";
    cout<<"\t\t|\t 0. 返回                              |\n";
    cout<<"\t\t|\t 1. 学生信息管理                       |\n";
    cout<<"\t\t|\t 2. 教师信息信息                       |\n";
    cout<<"\t\t|\t 3. 课程信息管理                       |\n";
    cout<<"\t\t|\t 4. 学生选课信息                       |\n";
    cout<<"\t\t|\t 5. 学生成绩管理                       |\n";
    cout<<"\t\t|\t 6. 信息统计模块                       |\n";
    cout<<"\t\t|-----------------------------------------------|\n\n";
    cout<<"\t\t\t请输入模块编号(0-6):";
}

int main()                                  // 定义主函数
{
    char choice;                            // 模块号（字符）
    int nChoice;                            // 模块号（数字）
    menu();
    cin>>choice;                            // 输入字符模块号
    if(choice < '0' || choice > '9')        // 输入的模块号不是数字
    {
        cout<<"模块号应为数字！"<<endl;
        return 1;                          // 模块号不正确，返回错误代码
    }
    nChoice = choice - '0';                // 将字符模块号转为数字

    while(nChoice != 0){
        switch(nChoice)
        {
            case 1:
                cout<<"你输入的模块名称为：1. 学生信息管理"<<endl;
                break;
            case 2:
                cout<<"你输入的模块名称为：2. 教师信息信息"<<endl;
                break;
            case 3:
                cout<<"你输入的模块名称为：3. 课程信息管理"<<endl;
                break;
            case 4:
                cout<<"你输入的模块名称为：4. 学生选课信息"<<endl;
                break;
            case 5:
                cout<<"你输入的模块名称为：5. 学生成绩管理"<<endl;
                break;
            case 6:
                cout<<"你输入的模块名称为：6. 信息统计模块"<<endl;
                break;
            default:
                cout<<"你输入的模块不存在！"<<endl;
        }
        system("pause");
        menu();
        cin>>choice;                            // 输入字符模块号
        if(choice < '0' || choice > '9')        // 输入的模块号不是数字
        {
            cout<<"模块号应为数字！"<<endl;
            return 1;                          // 模块号不正确，返回错误代码
        }
        nChoice = choice - '0';                // 将字符模块号转为数字
    }
    }
*/

/*
#include <iostream>                         // 包含输入输出接口文件
#include "cmath"                            // 引用Cmath函数库
using namespace std;                        // 引用标准命名空间

float fc(float x){                          // 定义函数方便运算
    float y = x*x*x-2*x*x-x+2;              // 运算后使用return返回
    return y;
}

int main(){
    //方程 x^3-2x^2-x+2=0
    float x1 = -5, x2 = 5, x3;

    if(fc(x1) * fc(x2) > 0){           // 判断是否在区间内存在根
        printf("不能保证区间内有根");
    } else{
        while(fabs(x1-x2)> 1e-4){        // 二分法求方程
            x3 = (x1 +x2)/2;                // 定义中点
            if(fc(x1) * fc(x3) < 0){    // 取左侧
                x2 = x3;
            } else if(fc(x3) == 0){         //得计算出结果
                break;
            }else{                              //取右侧
                x1 = x3;
            }
        }
    }
    cout<<x3;                               //输出结果
    return 0;
}
 */

#include <iostream>                         // 包含输入输出接口文件
using namespace std;                        // 引用标准命名空间

int main(){
    float a,b, n = 1, result;
    char fh = 1;
    while(n != 0){
        cout<<"请输入a,b的值：";
        scanf_s("%f %f",&a, &b);
        cout<<"###############"<<endl;
        cout<<"#    + 加法    #"<<endl;
        cout<<"#    - 减法    #"<<endl;
        cout<<"#    * 乘法    #"<<endl;
        cout<<"#    / 除法    #"<<endl;
        cout<<"###############"<<endl;
        cout<<"请输入符号：";
//        cin>>fh;
        scanf_s("%c", getchar(fh));
        switch (fh) {
            case '+':
                cout<<a+b<<endl;
                break;
            case '-':
                cout<<a-b<<endl;
                break;
            case '*':
                cout<<a*b<<endl;
                break;
            case '/':
                cout<<a/b<<endl;
                break;
            default:
                cout<<"符号错误了捏"<<endl;
        }
        system("pause");
        cout<<"退出请输入0：";
        cin>>n;
    }
}