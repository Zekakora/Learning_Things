/*
//***************************************************************
//*  程 序 名：实训6_1.cpp                                      *
//*  主要功能：                                                 *
//*     使用顺序查找法查找学生成绩单                            *
//*     从最后一位学生到第一位学生依次进行比较，以下标0为监视哨 *
//***************************************************************
#include <iostream>                         // 包含输入输出接口文件
using namespace std;                        // 引用标准命名空间
int main()                                  // 主函数
{
    const int n = 10;                       // 使用常变量定义学生人数
    int score[n + 1] = {0, 80, 82, 84, 86, 88, 90, 92, 94, 96, 98};
    // 定义成绩数组，有n+1个整型元素，其中下标0处未存放学生成绩
    int i;                                  // 循环变量
    int x;                                  // 等查找的学生成绩
    cout<<"请输入待查找的学生成绩：";
    cin>>x;
    score[0] = x;                           // 在下标处设置监视哨
    for(i = n; score[i] != x; i--);
    // 计数循环，从后到前循环比较当前元素，循环体为空语句
    if(i >= 1)
    {
        cout<<"查找成功，待查找成绩是第"<<i<<" 位学生的成绩"<<endl;
    }
    else
    {
        cout<<"未查找到该成绩！"<<endl;
    }
    return 0;
}
*/

/*
//***************************************************************
//*  程 序 名：实训6_2.cpp                                      *
//*  主要功能：                                                 *
//*     密码文本解密                                            *
//*     使用移位加密法，明文序号为密文序号除以                  *
//***************************************************************
#include <iostream>                         // 包含输入输出接口文件
#include <string.h>                         // 包含字符串相关函数定义的头文件
using namespace std;                        // 引用标准命名空间
int main()                                  // 主函数
{
    char password[20];                 // 存储密码的字符数组
    char encodePass[20] = "";               // 加密后的密码
    char ch;                                // 当前字符
    int i;                                  // 循环变量
    int num;                                // 字符

    cout<<"请输入密文字符串："<<endl;
    cin>>encodePass;
    for(i = 0; encodePass[i] != '\0' ; i++)
    {                                       // 循环至遇到字符结束标记不止
        ch = encodePass[i];
        if(ch >= 'a' && ch <= 'z')
        {                                   // 小写字母
            num = ch - 'a' + 1;             // 计算字母序号
        }
        else if(ch >= 'A' && ch <= 'Z')
        {                                   // 大字字母
            num = ch - 'A' + 27;            // 计算字母序号
        }
        else
        {
            password[i] = ch;               // 其它字符，直接复制
            continue;                       // 直接转向处理下一字符
        }

        while(num % 3 != 0)                 // 循环将num扩展为3的倍数
        {
            num = num + 52;
        }
        num = num / 3;                      // 得到明文字母序号
        if(num == 0)                        // 处理字符Z
        {
            num = 52;
        }
        if(num <= 26)
        {
            ch = 'a' + num - 1;             // 将明文序号转为小写字母
        }
        else
        {
            ch = 'A' + num -27;             // 将明文序号转为大写字母
        }
        password[i] = ch;                   // 将明文字符存储到明文字符数组中
    }
   // password[i] = '\0';                     // 为明文字符串加上结束标记
    cout<<"密码密文："<<encodePass<<endl;
    cout<<"密码明文："<<password<<endl;
    return 0;
}

 */

/*
//***************************************************************
//*  程 序 名：实训6_3.cpp                                      *
//*  主要功能：                                                 *
//*     身高简单排序
//***************************************************************
#include <iostream>                         // 包含输入输出接口文件
using namespace std;                        // 引用标准命名空间


int main(){
    int height[11] = {0};
    int min, c;
    for(int i = 1; i <= 10; ++i){
        scanf_s("%d", &height[i]);
    }

    for(int i = 1; i <= 10;  i++){             //外层循环 找第一、第二项
        min = i;
        for(int j = i + 1; j <= 10; j++){          //内层循环
            if(height[j] < height[min])             //如果找到更小的身高就记下位置
            {
                min = j;
            }
        }
        if(min!=i){                                 //如果min和初始位置不同 就互换身高
            c = height[min];
            height[min] = height[i];
            height[i] = c;

        }
    }

    for(int i = 1; i <= 10; ++i){                   //输出结果
        cout<<height[i]<<" ";
    }
    return 0;
}
*/

/*
 //***************************************************************
//*  程 序 名：实训6_4.cpp                                      *
//*  主要功能：                                                 *
//*     交换顺序且大小写字母互转 *
//***************************************************************

#include <iostream>                         // 包含输入输出接口文件
#include "cstring"
using namespace std;                        // 引用标准命名空间

int main()                                  // 主函数
{
    char words[80] = {}, words2[80] = {};
    cout<<"请输入字符：";
    gets(words);
    int max_len = int(strlen(words));        //获得字符最大长度
    for(int i = 0; i <= max_len; i++){           //遍历字符
        if(words[i] >= 65 && words[i] <= 90){               //大小写互转
            words[i] = words[i] + 32;
        } else if(words[i] >= 97 && words[i] <= 122){
            words[i] = words[i] - 32;
        }
        words2[max_len - i] = words[i];
    }

    for(int i = 0; i <= max_len; i++){        //输出结果
        cout<<words2[i];
    }
    return 0;
}


 */
