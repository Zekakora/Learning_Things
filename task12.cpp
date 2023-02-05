//***************************************************************
//*  程序名：实训12_1.cpp                                       *
//*  主要功能：                                                 *
//*     首先从字节文件中读取学生信息，然后输出之                *
//***************************************************************
#include <iostream>                         // 包含输入输出接口文件
#include <fstream>                          // 包含对文件进行输入输出的头文件
#include <cstring>

using namespace std;                        // 引用标准命名空间
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
void writeStudent(StudentInfo & stu);       // 申明输出学生信息的函数
void freadStudents(StudentInfo stuList[], int &nStudent, char fileName[]);
// 申明从字节流文件读入学生信息的函数
int main()                                  // 主函数
{
    const int N = 100;                      // 定义数组长度
    StudentInfo stuList[N+1] = {0};         // 用于存储所有学生信息的结构数组，
    // 下标0不使用，第i位学生的信息存储在下标i处
    int i = 0;                              // 循环变量
    int n = 0;                              // 从文件中读取到的学生人数
    fstream out("student.dat", ios::binary);
     freadStudents(stuList,n,student.dat); // 调用函数读取学生信息到结构数组
    cout<<"从文件读入的学生信息："<<endl;
    for(i = 1; i <= n; i++)                 // 逐行输出学生信息
    {
        cout<<"第"<<i<<" 位学生："<<endl;
        writeStudent(stuList[i]);           // 输出第i位学生的信息
    }
    return 0;
}
///**********************************************************
///  函数名：freadStudents                                  *
///  输入参数：                                             *
///      stuList： 用于存储学生信息的结构数组               *
///      nStudent:  学生人数                                *
///      fileName:  文件名                                  *
///  返回值                                                 *
///      无                                                 *
///  函数功能：                                             *
///      从文件读入学生信息存储到数组中然后返回             *
///**********************************************************
void freadStudents(StudentInfo stuList[], int &nStudent, char fileName[])
{
    ifstream fin(fileName, ios::binary);    // 打开字节流文件fileName用于读
    fin.open(fileName, ios::binary);
    nStudent = 0;                           // 学生数初始化为零
    if(!fin)
    {
        cout<<"文件打开失败！"<<endl;
        system("pause");                    // 等待按任意键后关闭运行窗口
        return;                             // 返回
    }
    while(!fin.eof())                       // 循环读取文件，至读到文件结束为止
    {
        nStudent++;                         // 当前学生序号增
              fin.read((char *)(stuList+nStudent), sizeof(StudentInfo));
        if(strlen(stuList[nStudent].name) < 1)
        {                                   // 如果读入的学生姓名为空，则忽略之
            nStudent--;
        }
    }
    fin.close();                            // 关闭输入文件
}
void writeStudent(StudentInfo & stu)
{                                   // 输出学生信息
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

/*
 ////***************************************************************
////*  程序名：实训12_3.cpp                                       *
////*  主要功能：                                                 *
////*     从键盘获取老师信息，然后输出到文件                *
////***************************************************************
#include <iostream>                         // 包含输入输出接口文件
#include <fstream>                          // 包含对文件进行输入输出的头文件
#include <cstring>

using namespace std;                        // 引用标准命名空间
struct Date                                 // 定义日期类型
{
    int year;                               // 年
    int month;                              // 月
    //   int day;                                // 日
};

struct teacherinfo                          // 定义结构体类型
{
    char name[20];                          // 姓名
    Date date;                              // 日期 为了编程方便没有使用日
    int gender;                             // 性别
    /*                                      // 以下分别定义权限、登陆密码、E-mail、QQ、学历等各种参数，可以自己添加，为了程序方便在下面没有单独进行输入
    int access;
    long int password;                      // 密码
    char email[20];                         // 电子邮箱
    long int QQ;                            // QQ号
    char degress;                           // 学历 A~D表示
    char job[20];                           // 职称

}

void fwriteTeacherListToTxtfile(teacherinfo *info, int nTeacher, const char filename[]);        // 定义文件写入函数
void writeinfo(teacherinfo *info, int n);                                                       // 定义数据获取函数

int main(){
    teacherinfo info[20];
    int number = 0;
    cout<<"请输入需要添加人数";                              // 获取人数
    cin >> number;
    writeinfo(info, number);                            // 获取数据
    fwriteTeacherListToTxtfile(info, number, "teacher.txt");        // 写入文件
    return 0;
}

///**********************************************************
///  函数名：fwriteTeacherListToTxtfile                                  *
///  输入参数：                                             *
///      info： 用于存储老师信息的结构数组               *
///      nTeacher:  老师人数                                *
///      fileName:  文件名                                  *
///  返回值                                                 *
///      无                                                 *
///  函数功能：                                             *
///      从数组中读取老师信息并写入文件返回             *
///**********************************************************
void fwriteTeacherListToTxtfile(teacherinfo *info, int nTeacher, const char filename[])
{
    fstream data;
    data.open(filename, ios::out | ios::app);       // 打开文件 模式：输出、在后方添加

    if(!data) cout<<"打开错误"<<endl;                       // 判断文件是否成功打开
    if(data.eof()){}                                      // 判断文件是否读取到了尾部
    else
    {   data << "姓名" <<"\t\t\t\t"<<"出生年月\t\t\t\t"<<"性别"<<endl;
        for(int i=0; i<nTeacher; i++)
        {
            data << info[i].name <<"\t\t\t\t"<<info[i].date.year<<"年"<<info[i].date.month<<"月\t\t\t\t"<<info[i].gender<<endl;
        }
    }
    data.close();

}

///**********************************************************
///  函数名：writeinfo                                  *
///  输入参数：                                             *
///      info： 用于存储老师信息的结构数组               *
///      n:  老师人数                                *
///  返回值                                                 *
///      无                                                 *
///  函数功能：                                             *
///      从键盘获取老师信息             *
///**********************************************************
void writeinfo(teacherinfo *info, int n){
    for(int i = 0; i < n; i++)                      // 循环获取数据
    {
        cout<<"请输入第"<<i+1<<"位信息"<<endl;
        cout<<"姓名："<<endl;
        fflush(stdin);                      //刷新缓冲区
        gets(info[i].name);
        cout<<"出生年份："<<endl;
        cin>>info[i].date.year;
        cout<<"出生月份："<<endl;
        cin>>info[i].date.month;
        cout<<"性别（1代表男性 2代表女性）："<<endl;
        cin>>info[i].gender;
    }
}
 */

/*
 //***************************************************************
//*  程序名：实训12_2.cpp                                       *
//*  主要功能：                                                 *
//*     以表格方式显示学生信息                                  *
//***************************************************************
#include <iostream>                         // 包含输入输出接口文件
#include <iomanip>                          // 包含格式控制头文件
#include <fstream>                          // 包含对文件进行输入输出的头文件
#include <cstring>
using namespace std;                        // 引用标准命名空间
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
void writeStudents(StudentInfo stuList[], int nStudent); // 申明输出学生信息的函数
void freadStudents(StudentInfo stuList[], int &nStudent, char fileName[]); // 申明从字节流文件读入学生信息的函数
int main()                                  // 主函数
{
    const int N = 100;                      // 定义数组长度
    StudentInfo stuList[N+1] = {0};         // 用于存储所有学生信息的结构数组，
    // 下标0不使用，第i位学生的信息存储在下标i处
    int i = 0;                              // 循环变量
    int n = 0;                              // 从文件中读取到的学生人数
    freadStudents(stuList,n,"student.dat"); // 调用函数读取学生信息到结构数组
    cout<<"从文件读入的学生信息："<<endl;
    writeStudents(stuList, n);
    return 0;
}
///**********************************************************
///  函数名：freadStudents                                  *
///  输入参数：                                             *
///      stuList： 用于存储学生信息的结构数组               *
///      nStudent:  学生人数                                *
///      fileName:  文件名                                  *
///  返回值                                                 *
///      无                                                 *
///  函数功能：                                             *
///      从文件读入学生信息存储到数组中然后返回             *
///**********************************************************
void freadStudents(StudentInfo stuList[], int &nStudent, char fileName[])
{
    ifstream fin(fileName, ios::binary | ios::out);    // 打开字节流文件fileName用于读
    nStudent = 0;                           // 学生数初始化为零
    if(!fin)
    {
        cout<<"文件打开失败！"<<endl;
        system("pause");                    // 等待按任意键后关闭运行窗口
        return;                             // 返回
    }
    while(!fin.eof())                       // 循环读取文件，至读到文件结束为止
    {
        nStudent++;                         // 当前学生序号增
        fin.read((char *)(stuList+nStudent), sizeof(StudentInfo));
        if(strlen(stuList[nStudent].name) < 1)
        {                                   // 如果读入的学生姓名为空，则忽略之
            nStudent--;
        }
    }
    fin.close();                            // 关闭输入文件
}
//***************************************************************
//*  函数名：writeStudents                                      *
//*  主要功能：                                                 *
//*     以表格方式输出学生信息                                  *
//*  函数参数：                                                 *
//*     stuList:    存储学生信息的结构数组                      *
//*     nStudent:   学生人数                                    *
//***************************************************************
void writeStudents(StudentInfo stuList[], int nStudent)
{
    int i = 0;
    cout<<"    |-----学号-----|-------姓名-------|"
        <<"-----生日------|-性别-|-身高-|-体重-|"<<endl;
    for(i = 1; i <= nStudent; i++)
    {
        cout.setf(ios::left);               // 设置内容左对齐
        cout.fill(' ');                     // 位数不足时，以空格填充
        cout<<showpoint;                    // 输出浮点数时显示小数点
        cout<<setprecision(3);              // 输出浮点数时精度为位有效数字
        cout<<"    | ";
        cout<<setw(13)<<stuList[i].no<<"| ";
        cout<<setw(17)<<stuList[i].name<<"| ";
        cout.setf(ios::right);                 // 设置内容右对齐
        cout<<setw(4)<<stuList[i].birthday.year<<"年"
            <<setw(2)<<stuList[i].birthday.month<<"月"
            <<setw(2)<<stuList[i].birthday.day<<"日|";
        cout<<"  "<<(stuList[i].sexy==1?"男":"女")<<"  "<<"| ";
        cout<<setw(4)<<stuList[i].height<<" | ";
        cout<<setw(4)<<stuList[i].weight<<" |";
        cout.unsetf(ios::right);            // 取消设置内容右对齐
        cout<<endl;
    }
    cout<<"    |--------------|------------------|"
        <<"---------------|------|------|------|"<<endl;
    cout<<"\t\t共有"<<nStudent<<" 位学生"<<endl;
}

 */

/*
 ////***************************************************************
////*  程序名：实训12_4.cpp                                       *
////*  主要功能：                                                 *
////*     以表格方式显示老师信息                                  *
////***************************************************************
#include <iostream>                         // 包含输入输出接口文件
#include <iomanip>                          // 包含格式控制头文件
#include <fstream>                          // 包含对文件进行输入输出的头文件
#include <cstring>
using namespace std;                        // 引用标准命名空间

struct Date                                 // 定义日期类型
{
    int year;                               // 年
    int month;                              // 月
    int day;                                // 日
};

struct teacherinfo                          // 定义结构体类型
{
    char name[20];                          // 姓名
    long int series;                        // 工资号
    Date date;                              // 日期
    int gender;                             // 性别
    int access;                             // 权限
    char degress[20];                       // 学历
    char level[20];                         // 职称
};

void writeteachers(teacherinfo stuList[], int nteacher); // 申明输出老师信息的函数
void freadteachers(teacherinfo stuList[], int &nteacher, const char fileName[]); // 申明从字节流文件读入老师信息的函数
int main()                                  // 主函数
{
    const int N = 100;                      // 定义数组长度
    teacherinfo stuList[N+1] = {0};         // 用于存储所有老师信息的结构数组，

// 下标0不使用，第i位老师的信息存储在下标i处
    int i = 0;                              // 循环变量
    int n = 0;                              // 从文件中读取到的老师人数

    freadteachers(stuList,n,"teacher.dat"); // 调用函数读取老师信息到结构数组
    cout<<"从文件读入的老师信息："<<endl;
    writeteachers(stuList, n);
    return 0;
}
///**********************************************************
///  函数名：freadteachers                                  *
///  输入参数：                                             *
///      info： 用于存储老师信息的结构数组               *
///      nteacher:  老师人数                                *
///      fileName:  文件名                                  *
///  返回值                                                 *
///      无                                                 *
///  函数功能：                                             *
///      从文件读入老师信息存储到数组中然后返回             *
///**********************************************************
void freadteachers(teacherinfo info[], int &nteacher, const char fileName[])
{
    ifstream fin(fileName, ios::binary);    // 打开字节流文件fileName用于读
    nteacher = 0;                           // 老师数初始化为零
    if(!fin)
    {
        cout<<"文件打开失败！"<<endl;
        system("pause");                    // 等待按任意键后关闭运行窗口
        return;                             // 返回
    }
    while(!fin.eof())                       // 循环读取文件，至读到文件结束为止
    {
        nteacher++;                         // 当前老师序号增
        fin.read((char *)(info+nteacher), sizeof(teacherinfo));
        if(strlen(info[nteacher].name) < 1)
        {                                   // 如果读入的老师姓名为空，则忽略之
            nteacher--;
        }
    }
    fin.close();                            // 关闭输入文件
}
//***************************************************************
//*  函数名：writeteachers                                      *
//*  主要功能：                                                 *
//*     以表格方式输出老师信息                                  *
//*  函数参数：                                                 *
//*     stuList:    存储老师信息的结构数组                      *
//*     nteacher:   老师人数                                    *
//***************************************************************
void writeteachers(teacherinfo stuList[], int nteacher)
{
    int i = 0;
    cout<<"    |-----工资号-----|-------姓名-------|"
        <<"-----生日------|---权限---|-性别-|---学历---|---职称---|"<<endl;
    for(i = 1; i <= nteacher; i++)
    {
        cout.setf(ios::left);               // 设置内容左对齐
        cout.fill(' ');                     // 位数不足时，以空格填充
        cout<<showpoint;                    // 输出浮点数时显示小数点
        cout<<setprecision(3);              // 输出浮点数时精度为位有效数字
        cout<<"    | ";
        cout<<setw(14)<<stuList[i].series<<"| ";
        cout<<setw(16)<<stuList[i].name<<"| ";
        cout.setf(ios::right);                 // 设置内容右对齐
        cout<<setw(4)<<stuList[i].date.year<<"年"
            <<setw(2)<<stuList[i].date.month<<"月"<<setw(2)<<stuList[i].date.day<<"日|";
        cout<<" "<<setw(10)<<(stuList[i].access==1?"教务员":"普通教师")<<"  "<<"| ";
        cout<<"  "<<(stuList[i].gender==1?"男":"女")<<"  "<<"| ";
        cout<<setw(7)<<stuList[i].degress<<"| ";
        cout<<setw(7)<<stuList[i].level<<"| ";
        cout.unsetf(ios::right);            // 取消设置内容右对齐
        cout<<endl;
    }
    cout<<"    |--------------|------------------|"
        <<"--------------|---------|------|---------|---------|"<<endl;
    cout<<"\t\t共有"<<nteacher<<" 位老师"<<endl;
}

 ////***************************************************************
////*  程序名：实训12_4_add.cpp                                       *
////*  主要功能：                                                 *
////*     从键盘获取老师信息，然后输出到文件                *
////***************************************************************
#include <iostream>                         // 包含输入输出接口文件
#include <fstream>                          // 包含对文件进行输入输出的头文件
#include <cstring>

using namespace std;                        // 引用标准命名空间
struct Date                                 // 定义日期类型
{
    int year;                               // 年
    int month;                              // 月
    int day;                                // 日
};

struct teacherinfo                          // 定义结构体类型
{
    char name[20];                          // 姓名
    long int series;                        // 工资号
    Date date;                              // 日期
    int gender;                             // 性别
    int access;                             // 权限
    char degress[20];                       // 学历
    char level[20];                         // 职称
};

void fwriteTeacherListToTxtfile(teacherinfo *info, int nTeacher, const char filename[]);        // 定义文件写入函数
void writeinfo(teacherinfo *info, int n);                                                       // 定义数据获取函数

int main(){
teacherinfo info[20];
int number = 0;
cout<<"请输入需要添加人数";                              // 获取人数
cin >> number;
writeinfo(info, number);                            // 获取数据
fwriteTeacherListToTxtfile(info, number, "teacher.dat");        // 写入文件
return 0;
}

///**********************************************************
///  函数名：fwriteTeacherListToTxtfile                                  *
///  输入参数：                                             *
///      info： 用于存储老师信息的结构数组               *
///      nTeacher:  老师人数                                *
///      fileName:  文件名                                  *
///  返回值                                                 *
///      无                                                 *
///  函数功能：                                             *
///      从数组中读取老师信息并写入文件返回             *
///**********************************************************
void fwriteTeacherListToTxtfile(teacherinfo *info, int nTeacher, const char filename[])
{
fstream data;
data.open(filename, ios::out | ios::app | ios::binary);       // 打开文件 模式：输出、在后方添加

if(!data) cout<<"打开错误"<<endl;                       // 判断文件是否成功打开
if(data.eof()){}                                      // 判断文件是否读取到了尾部
else
{
    for(int i=0; i<nTeacher; i++)
    {
       // data << info[i].name <<info[i].date.year<<info[i].date.month<<info[i].gender<<endl;
       data.write((char *)(&info[i]), sizeof(info[i]));
    }
}
data.close();

}

///**********************************************************
///  函数名：writeinfo                                  *
///  输入参数：                                             *
///      info： 用于存储老师信息的结构数组               *
///      n:  老师人数                                *
///  返回值                                                 *
///      无                                                 *
///  函数功能：                                             *
///      从键盘获取老师信息             *
///**********************************************************
void writeinfo(teacherinfo *info, int n){
for(int i = 0; i < n; i++)                      // 循环获取数据
{
    cout<<"请输入第"<<i+1<<"位信息"<<endl;
    cout<<"工资号："<<endl;
    cin>>info[i].series;
    cout<<"姓名："<<endl;
    fflush(stdin);                      //刷新缓冲区
    gets(info[i].name);
    cout<<"出生年份："<<endl;
    cin>>info[i].date.year;
    cout<<"出生月份："<<endl;
    cin>>info[i].date.month;
    cout<<"出生日："<<endl;
    cin>>info[i].date.day;
    cout<<"性别（1代表男性 2代表女性）："<<endl;
    cin>>info[i].gender;
    cout<<"权限（2代表普通教师 1代表教务员）："<<endl;
    cin>>info[i].access;
    cout<<"学历："<<endl;
    fflush(stdin);                      //刷新缓冲区
    gets(info[i].degress);
    cout<<"职称："<<endl;
    fflush(stdin);                      //刷新缓冲区
    gets(info[i].level);
}
}
 */

