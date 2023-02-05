/*
#include <iostream>                         // 包含输入输出接口文件
using namespace std;                        // 引用标准命名空间
int main()                                  // 定义主函数
{
    int i = 0;                              // 循环变量
    int num = 0;                            // 考生人数
    double score = 0;                       // 当前考生的成绩
    double sum = 0;                         // 总成绩
    double avg = 0;                         // 平均成绩
    cout << "请输入考生人数：";
    cin >> num;
    cout << "请逐一输入各位考生的成绩：" << endl;
    for(i = 1; i <= num; i++)
    {
        cin >> score;                       // 输入当前考生成绩
        sum = sum + score;                  // 累加
    }
    avg = sum / num;                        // 求平均值
    cout << "平均分是" << avg << endl;
    return 0;
}                                           // 主函数结束

 */

/*
#include <iostream>                         // 包含输入输出接口文件
using namespace std;                        // 引用标准命名空间
int main()                                  // 定义主函数
{
    long  long a = 1, b = 1, counter = 0;        // 定义短整型变量
    for(counter = 0; counter < 10; counter++)
    {                                       // 计数循环
        a = a * a + b;
        b = a + b * b;
    }
    if(a < 0)
    {
        cout<<"变量a的值溢出，现在其值为"<<a<<endl;
    }
    else
    {
        cout<<"a的值为"<<a<<endl;
    }
    return 0;
}                                           // 主函数结束
*/

/*
#include <iostream>                         // 包含输入输出接口文件
using namespace std;                        // 引用标准命名空间

int main(){
    const int credit1 = 4, credit2 = 3, credit3 = 2;                                                //定义相关变量
    float score1, score2, score3, avescore;
    int counter = 1;

    cout << "请输入第一位学生成绩，中间用空格隔开:"<<endl;
    scanf_s("%f %f %f", &score1, &score2, &score3);
    while(score1 > 0 && score2 > 0 && score3 > 0){                                                  //计算循环
        avescore = (score1 * credit1 / (credit1 + credit2 + credit3) )
                   + (score2 * credit2 / (credit1 + credit2 + credit3))
                   + (score3 * credit3 / (credit1 + credit2 + credit3));
        printf("第 %d 位同学的成绩是：%.2f\n", counter, avescore);

        counter++;                                                                                  //学生数量自加
        printf("请输入第%d位学生成绩，中间用空格隔开:", counter);                                   //输出
        scanf_s("%f %f %f", &score1, &score2, &score3);
    }
}
 */

#include <iostream>                         // 包含输入输出接口文件
using namespace std;                        // 引用标准命名空间

int main(){
    int n, sum = 0, j = 1;
    cin >> n;

    if(n < 13){
        for(int i = 1; i <= n; i++){
            j = j * i;
            sum = sum + j;
        }
        cout << sum;
    } else{
        cout<<"会溢出捏";
    }

}