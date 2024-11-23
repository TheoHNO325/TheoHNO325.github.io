#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

union Data{
    int i;
    char ch;
    float f;
}a;


union  Categ                       
{ 
    int clas; 
    char position[10];  
}; 
struct                           
{ 
    int num; 
    char name[10]; 
    char sex; 
    char job;
    union  Categ  category;
}person[2]; 

int main(){
    cout << sizeof(union Data);
    cout << sizeof(a.i) << "\t" << sizeof(a.ch)<< "\t"<<sizeof(a.f);
    cout << a.i << "\t" << a.ch<< "\t"<< a.f << endl;

    person[0] = {1,"li",'f','s',{301}};
    person[1] = {2,"aa",'M','t',{.position="prof"}}; //初始化位置不是第一个的共有体变量需要表明.+名字

    cout << person[0].category.clas << "\t" << person[0].category.position <<endl ; //301,错误输出
    cout << person[1].category.position << "\t" << person[1].category.clas<< endl; //prof,1718579824
    return 0;
}