#include <iostream>

using namespace std;

template <typename T>
class Arr
{
private:
    T a, b;

public:
    Arr(T x, T y)
    {
        a = x;
        b = y;
        cout << "x= " << x << endl
             << "y= " << y << endl;
    }
    T Area();
};

// 类的成员函数在类外实现时需要在函数定义之前进行模板声明，在成员函数名前写上“类名::”
template <typename T>
T Arr<T>::Area() // <返回值类型> Arr<T>::函数()
{
    cout << "Area=" << a * b; // 必须用成员变量来计算
    return a * b;
}

int main()
{
    Arr<int> A(3, 4);
    Arr<float> B(1.2, 4.3); // 实例化对象时别忘了带上名字!
    B.Area();
    return 0;
}
