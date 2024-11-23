#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int main(){
    int a = 10;
    int *p = &a;
    cout << sizeof(p) <<  "\t" <<sizeof(*p)<< endl; //8 4 指针的大小和变量的不一样

    int*& q = p; //对指针指向的地址取引用

    cout << p << endl << q<<endl;  //均输出地址
    cout << *p;

    int &s = a;
    cout <<s <<endl << &s<<endl; //10,0x902d5ffe08
    int b = s;
    cout << b;//10
    //引用本身可以赋值,加上&就是地址
}