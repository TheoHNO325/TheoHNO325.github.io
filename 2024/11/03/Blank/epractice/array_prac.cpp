#include<iostream>
#include<stdio.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    int a[n],b[n];
    int *p = NULL;
    p = a;
    for (int i=0;i<n;i++){
        scanf("%d",p);
        cout << p <<endl ;
        cout << *p <<endl;
        p++;
    }
}