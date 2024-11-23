#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
    // int a[3][3] = {{1,6,2},{7,3,9},{8,4,10}};
    // int *p = a[0]+1; //只能这么写,不然会报错.a[0]表示第0行首地址,a[0]+1表示第0行第i列地址
    // int *q = *(a+1); // 也可以这么写,因为a相当于一个指向地址的数组,a+i表示第i行首地址
    // cout << *p <<endl << *q << endl;
    // cout <<p <<endl <<q<<endl;
    // int *s = a[2]+1;
    // int *m = *(a+1)+1;
    // cout << m << endl << *m;
    // // cout << *s<< endl;
    // int a[3][4]={1,3,5,7,9,11,13,15, 17,19,21,23};
    int a[3][3] = {{1,6,2},{7,3,9},{8,4,10}};
    cout << a <<"\t"<<  *a <<endl;
    cout << a[0] <<"\t"<<  *(a+0) <<endl;
    // printf("%d,%d\n",a,*a); 
    // printf("%d,%d\n",a[0],*(a+0)); 
    cout << &a[0] <<"\t"<<  &a[0][0] <<endl;

    //printf("%d,%d\n",&a[0],&a[0][0]); 

    cout << a[1] <<"\t"<< a+1 <<endl;
    cout << &a[1][0] << "\t" << *(a+1)+0<<endl;

    // printf("%d,%d\n",a[1],a+1); 
    // printf("%d,%d\n",&a[1][0],*(a+1)+0); 
    cout << a[2] <<"\t"<< *(a+2) <<endl;
    cout << &a[2] << "\t" << a+2 <<endl;

    // printf("%d,%d\n",a[2],*(a+2)); 
    // printf("%d,%d\n",&a[2],a+2); 

    printf("%d,%d\n",a[1][0],*(*(a+1)+0));
    printf("%d,%d\n",*a[2],*(*(a+2)+0)); 
    return 0;

}