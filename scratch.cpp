#include "iostream"

using namespace std;

int main(){
    int a, b ,c;
    a=b=c=1;
    (a = a+10)||(b = b+20)&&(c = c+30);
    printf("%d %d %d", a, b, c);
}