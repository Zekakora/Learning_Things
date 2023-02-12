#include <iostream>

using namespace std;
int main(){
    int x=3, y;
    do{ y=x--;
        if(!y)
        { cout<<"x"; continue; }
        cout<<"#";
    }while(1<=x<=2);
}
