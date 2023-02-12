#include <iostream>

using namespace std;
int main(){
    int a=10;
    switch(a)
    {
        case 9: a++;
        case 10: a++;
        case 11: a++;
        default: a++;
    }
    cout << a;
}
