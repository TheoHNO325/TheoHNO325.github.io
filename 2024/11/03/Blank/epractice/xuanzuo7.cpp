#include <iostream>
#include <stdio.h>
#include<cstring>
using namespace std;

// 传统做法
//  int main(){
//      int N;
//      cin >> N;
//      int m = N;
//      double ave;
//      double max=0;
//      double min = 1000;
//      double tem;
//      while(N){
//          cin >> tem;
//          ave += tem;
//          if (tem > max){
//              max = tem;
//          }
//          if (tem < min){
//              min = tem;
//          }
//          N--;
//      }
//      ave = ave / m;
//      printf("average = %.2f",ave);
//      printf("max = %.2f",max);
//      printf("min = %.2f",min);
//      return 0;
//  }

// 动态内存分配:new & delete

int main()
{
    struct date
    {
        int month;
        int day;
        int year;
    } dayone; // 马上声明变量
    struct person
    {
        char name[12];
        char gender;
        unsigned int age;
        struct date birthday; // 结构体的嵌套
    }; // 注意分号

    struct person student; // 说明了一个变量,产生实体,才会分配具体的内存空间

    struct person myself = {"Asuka", 'F', 14, {12, 2, 1983}}; // 初始化,若有嵌套则套一层{}

    char a = myself.gender;    // 访问元素
    myself.name[0] = 'O';      // 改结构变量的数组成员
    myself.birthday.month = 1; // 再来一个.,逐层引用

    student = myself; // 结构变量整体赋值,类型必须相同
    struct date *ptr = &dayone;
    // cin >> student.name >> student.gender >> student.age;

    myself.birthday.day++; // 可以参与运算

    cout << ptr << endl; // 0x5ffe44

    cout << sizeof(*ptr) << endl;   // 12
    cout << sizeof(myself) << endl; // 32

    struct person superstars[12]; // 结构体数组
    superstars[3] = {"Asuka", 'F', 14, {12, 2, 1983}};

    cout << superstars[3].name << superstars[3].birthday.day << endl;
    cout << superstars[1].name << endl; // 没有初始化,生成乱码

    struct somebody
    {
        char name[30];
        int score;
        int *ptr; // 指针作为结构体成员
    };

    struct somebody ohman;
    struct somebody *man = &ohman; // 结构体指针

    (*man).score = 0; // 通过指针访问的正确方法
    man->score = 10;
    strcpy(man->name,"Asuka");
    char na[] = "Xiao";
    man->name = na;
    cout << (*man).score  << (*man).name;

    return 0;
}