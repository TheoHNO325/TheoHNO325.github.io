#include <iostream>
#include <cstring>
#include <algorithm>
#define N 4
using namespace std;

struct Stu
{
    int num;
    string name;
    float score[3];
    float ave;
};

void input(struct Stu stu[]);
struct Stu max(struct Stu stu[]);
void print(struct Stu);

int main()
{
    struct Stu stu[N];
    struct Stu *p = stu;
    // cout << p << endl;
    // cout << *p;
    cout << p->ave << endl;
    cout << "结构体大小" << sizeof(struct Stu) << endl;
    cout << sizeof(stu) << endl;
    input(p);
    print(max(p));
    return 0;
}

void input(struct Stu stu[])
{
    // 传入的是指针,用起来可以变成数组(实参是指针,形参是地址)
    for (int i = 0; i < N; i++)
    {
        cout << &stu[i];
        scanf("%d %s %f %f %f", &stu[i].num, &stu[i].name, &stu[i].score[0], &stu[i].score[1], &stu[i].score[2]);
        stu[i].ave = (stu[i].score[0] + stu[i].score[1] + stu[i].score[2]) / 3;
    }
}

struct Stu max(struct Stu stu[])
{
    float max = 0;
    int index = 0;
    for (int i = 0; i < N; i++)
    {
        if (stu[i].ave > max)
        {
            max = stu[i].ave;
            index = i;
        }
    }
    struct Stu output = stu[index];
    return output;
}

void print(struct Stu stu)
{
    printf("%d %s %.2f %.2f %.2f %.2f", stu.num, stu.name, stu.score[0], stu.score[1], stu.score[2], stu.ave);
}