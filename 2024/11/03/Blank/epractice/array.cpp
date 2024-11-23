#include<iostream>

using namespace std;

int main(){
    int b[] = {1,2,3,4,5,6};
    cout << sizeof(b) <<endl;
    int *p = b;
    int i = 0;
    while (p++){
        cout << *p <<endl;
        cout <<"where?" << p<<endl;
        i++;
        cout << "i=" <<i<<endl;
    }; //i=539,331等等,一些
    return 0;
}

