/*
 ///**********************************************************
///  程序名：实训9_1.cpp                                    *
///  主要功能：                                             *
///     显示根据选择显示不同的用户登录界面                  *
///**********************************************************
#include  <iostream>
using namespace std;                        // 引用标准命名空间
void loginExec(char moudle);                // 申明登录菜单执行函数
void studentLogin();                        // 申明学生登录函数
void teacherLogin();                        // 申明教师登录函数
int main()
{
    char choice;
    // 打开登录菜单
    cout<<"\t\t|----------------系统登录-----------------|\n";
    cout<<"\t\t|\t  0. 退出                        |\n";
    cout<<"\t\t|\t  1. 学生登录                    |\n";
    cout<<"\t\t|\t  2. 教师登录                    |\n";
    cout<<"\t\t|-----------------------------------------|\n\n";
    cout<<"\t\t\t请输入模块编号(0-2):";
    cin>>choice;                            // 输入选择功能的编号
    if(choice == '0')                       // 如果输入功能号为零，则退出程序
    {
        return  0;
    }
    else
    {
            loginExec(choice);                  // 调用登录菜单执行函数
        return  0;
    }
}
///**********************************************************
///  函数名：loginExec                                      *
///  输入参数：                                             *
///      moudle：模块编号                                   *
///  返回值                                                 *
///      无                                                 *
///  函数功能：                                             *
///      根据模块编号调用相应模块的执行函数                 *
///**********************************************************
void loginExec(char moudle)                 // 登录菜单执行函数
{
    switch(moudle)
    {
        case '0':
            return;                         // 退出程序
            break;
        case '1':
            studentLogin();                 // 调用学生登录函数
            break;
        case '2':
            teacherLogin();                 // 调用教师登录函数
            break;
    }
}
void studentLogin()                         // 定义学生登录函数
{
    cout <<"学生登录" << endl;
}
void teacherLogin()                         // 定义教师登录函数
{
    cout <<"教师登录" << endl;
}
 */

/*
///**********************************************************
///  程序名：实训9_2.cpp                                    *
///  功能                                                   *
///      输出一个学生的信息                                 *
///**********************************************************

#include <iostream>
using namespace std;
const int MAX_SIZE = 50;                    // 最多学生人数
struct Date                                 // 定义日期类型
{
    int year;                               // 年
    int month;                              // 月
    int day;                                // 日
};
struct StudentInfo                          // 定义学生信息结构体类型
{
    char no[20];                            // 学号
    char name[20];                          // 姓名
    char password[20];                      // 密码
    int sexy;                               // 性别（1为男，0为女）
    double height;                          // 身高
    double weight;                          // 体重
    char telephone[20];                     // 电话
    char e_mail[40];                        // E_mail
    char qq[20];                            // QQ号
    Date birthday;                          // 生日
};
struct StudentList                          // 学生信息表结构体类型
{
    StudentInfo  data[MAX_SIZE];            // 存储学生信息的数组
    int length;                             // 学生人数
};
void writeStudent(StudentInfo &stu);     // 函数申明  34
int main()
{
    const int nStudent = 5;
    StudentList stuList = {{{""},           // 定义学生信息表并初始化
                            {"2013141442001", "赵小一", "123456", 1, 1.70, 70.0,
                             "13612345678", "", "", {1995,1,1}},
                            {"2013141442002", "钱小二", "123456", 0, 1.60, 50.0,
                             "13623456781", "", "", {1995,2,2}},
                            {"2013141442003", "孙小三", "123456", 1, 1.72, 71.0,
                             "13634567812", "", "", {1995,3,3}},
                            {"2013141442004", "李小四", "123456", 0, 1.64, 60.0,
                             "13645678123", "", "", {1995,4,4}},
                            {"2013141442005", "周小五", "123456", 1, 1.78, 75.0,
                             "13656781234", "", "", {1995,5,5}}
                           }, nStudent};
    int nIndex = 0;                         // 要输出信息的学生序号
    cout<<"请输入学生的序号(1～"<<nStudent<<")：";
    cin>>nIndex;
    if(nIndex < 1 || nIndex > nStudent)
    {
        cout<<"你所输入的学生序号超界！"<<endl;
        return 1;
    }
    cout<<"你选择的学生信息如下："<<endl;
 writeStudent(stuList.data[nIndex]); //53
    return 0;
}
///**********************************************************
///  函数名：writeStudent                                   *
///  输入参数                                               *
///      stu    学生信息结构体                              *
///  返回值                                                 *
///      无                                                 *
///  函数功能：                                             *
///      打印输出某同学所有信息                             *
///**********************************************************
  void writeStudent(StudentInfo &stu)  //65
{
    cout<<"  姓名：\t\t"<<stu.name<<endl;
    cout<<"  学号：\t\t"<<stu.no<<endl;
    cout<<"  性别：\t\t"<<(stu.sexy==1?"男":"女")<<endl;
    cout<<"  生日：\t\t"<<stu.birthday.year<<"年"
        <<stu.birthday.month<<"月"<<stu.birthday.day<<"日"<<endl;
    cout<<"  身高：\t\t"<<stu.height<<endl;
    cout<<"  体重：\t\t"<<stu.weight<<endl;
    cout<<"  电话：\t\t"<<stu.telephone<<endl;
    cout<<"  E_mail：\t\t"<<stu.e_mail<<endl;
    cout<<"  QQ号：\t\t"<<stu.qq<<endl;
}
 */

/*
///**********************************************************
///  程序名：实训9_.cpp                                    *
///  功能                                                   *
///      寻找水仙花数                                 *
///**********************************************************
#include <iostream>
using namespace std;

int find(int a, int b, int c, int &number){
    int sum = a*a*a + b*b*b +c*c*c;
    if(sum == number){
        return 1;
    } else{
        return 0;
    }
}

int main(){
    int number;
    cin>>number;
    int a = number/100;
    int b = (number - 100 * a) / 10;
    int c = (number - 100*a - 10*b);
    if (find(a, b, c, number) == 1) {
        cout << "1";
    } else
        cout << "0";
}
 */

/*
 ///**********************************************************
///  程序名：实训9_4.cpp                                    *
///  主要功能：                                             *
///     输出成绩                  *
///**********************************************************
#include  <iostream>
using namespace std;                        // 引用标准命名空间

float aver(int pepole,float* score){
    double all;
    for(int i = 0; i < pepole; ++i){
        all = all + *(score+i);
    }
    double final = all / pepole;
    return final;
}

int main(){
    int amount;
    cin>>amount;
    float scores[amount], sc;
    float *scs = scores;
    for(int i = 0; i < amount; i++){
        cin>>sc;
        *(scs+i) = sc;
    }
    cout<<aver(amount,scs);

}


 */