#include <iostream>     // 包含输入输出接口文件
#include <cmath>
using namespace std;

/*
void student_info()                                                     //学生信息管理函数
{
    char chose;
    int num_chose;
    cout << "\n\n\n\n\n";
    cout << "\t\t|---------------学生信息管理-------------|\n";
    cout << "\t\t|\t 0. 返回                        |\n";
    cout << "\t\t|\t 1. 修改本人信息                 |\n";
    cout << "\t\t|\t 2. 查询学生信息                 |\n";
    cout << "\t\t|\t 3. 学生信息排序                 |\n";
    cout << "\t\t|\t 4. 浏览学生信息                 |\n";
    cout << "\t\t|--------------------------------------|\n\n";
    cout << "\t\t\t请输入模块编号(0-4):";
    cin>>chose;

    if (chose < '0' || chose > '9')        // 输入的模块号不是数字
    {
        cout << "模块号应为数字！" << endl;
    }
    num_chose = chose - '0';                // 将字符模块号转为数字
    switch (num_chose) {
        case 0:
            cout << "你输入的模块名称为：0. 返回" << endl;
            break;
        case 1:
            cout << "你输入的模块名称为：1. 修改本人信息" << endl;
            break;
        case 2:
            cout << "你输入的模块名称为：2. 查询学生信息" << endl;
            break;
        case 3:
            cout << "你输入的模块名称为：3. 学生信息排序" << endl;
            break;
        case 4:
            cout << "你输入的模块名称为：4. 浏览学生信息" << endl;
            break;
        default:
            cout << "你输入的模块不存在！" << endl;
    }
}

int main()                                      // 定义主函数
{                                           // 主函数开始
    char choice;                            // 模块号（字符）
    int nChoice;                            // 模块号（数字）
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
    cin>>choice;                            // 输入字符模块号
    if(choice < '0' || choice > '9')        // 输入的模块号不是数字
    {
        cout<<"模块号应为数字！"<<endl;
        return 1;                          // 模块号不正确，返回错误代码
    }
    nChoice = choice - '0';                // 将字符模块号转为数字
    switch(nChoice)
    {
        case 0:
            cout<<"你输入的模块名称为：0. 返回"<<endl;
            break;
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
            student_info();
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
    return 0;
}                                           // 主函数结束

*/
/*
int main(){
    float a = 0, b = 0, c = 0, x = 0, delta = 0, x1 = 0, x2 = 0;
    printf("请输入 a b c 的值中间用空格隔开：");
    scanf_s("%f %f %f", &a, &b, &c);
    if(a == 0){                                                                                     //一元一次方程
        printf("该方程为一元一次方程，x = %.2f", -c/b);
    } else{                                                                                         //一元二次方程
        delta = b * b - 4 * a * c;
        if(delta > 0){                                                                              //两个实根
            x1 = (-b+sqrt(delta))/a/2;
            x2 = (-b-sqrt(delta))/a/2;
            printf("该方程为一元二次方程，有两个根，x1 = %.2f， x2 = %.2f", x1, x2);
        } else if(delta == 0){                                                                      //一对共轭根
            x1 = -b/a/2;
            printf("该方程为一元二次方程，有一对共轭根，x1 = %.2f = x2 = %.2f", x1, x1);
        } else if(delta < 0){                                                                       //求复数根
            x1 = -b/a/2;                                                                            //求复数根实部
            x2 = sqrt(-delta);                                                                   //求复数根虚部
            printf("该方程为一元二次方程，有两个复数根，%.2f+%.2fi 与 %.2f-%.2fi", x1, x2, x1, x2);
        }
    }
}
 */
int main() {
    float elec, price;
    float const leve1 = 0.5224, leve2 = 0.6224, leve3 = 0.8224;
    printf("请输入您的用电量，单位度：");
    scanf_s("%f", &elec);
    if (elec <= 180) {
        price = leve1 * elec;
        printf("您的电价为：%.2f 元", price);
    } else if (elec <= 280) {
        price = 180 * leve1 + (elec - 180) * leve2;
        printf("您的电价为：%.2f 元", price);
    } else if (elec > 280) {
        price = 180 * leve1 + 280 * leve2 + (elec - 280) * leve3;
        printf("您的电价为：%.2f 元", price);
    }
}