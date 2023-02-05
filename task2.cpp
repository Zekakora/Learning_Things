#include <iostream>                         // 包含输入输出接口文件
#include <cmath>
using namespace std;                        // 引用标准命名空间
int main()                                  // 定义主函数
{                                           // 主函数开始
/*
    float a = 0,b = 0,c = 0;
    scanf_s("%f %f",&a, &b);
    c = sqrt(a * a + b * b);
    printf("%.2f", c);
    */

/*
    const float tax = 0.1;
    float hours = 0, wage = 0;
    scanf_s("%f", &hours);
    wage = 30 * hours * 0.9;
    printf("%.2f", wage);
    return 0;
    */


    system("cls");
    cout<<"\n\n\n\n\n";
    cout<<"\t\t|---------------学生信息管理-------------|\n";
    cout<<"\t\t|\t 0. 返回                        |\n";
    cout<<"\t\t|\t 1. 修改本人信息                 |\n";
    cout<<"\t\t|\t 2. 查询学生信息                 |\n";
    cout<<"\t\t|\t 3. 学生信息排序                 |\n";
    cout<<"\t\t|\t 4. 浏览学生信息                 |\n";
//    cout<<"\t\t|\t 5. 学生成绩管理                       |\n";
//    cout<<"\t\t|\t 6. 信息统计模块                       |\n";
    cout<<"\t\t|--------------------------------------|\n\n";
    cout<<"\t\t\t请输入模块编号(0-4):";
    return 0;

}
