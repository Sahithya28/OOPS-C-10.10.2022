#include<iostream>
#include<conio.h>
using namespace std;

void swap(int a, int b)
{
    int temp;
    temp = a;
    a = b;
    b = temp;
}

int main()
{
    int a = 100, b = 200;
    swap(a, b);  
    cout<<"Value of a"<<a<<"\n";
    cout<<"Value of b"<<b<<"\n";
    getch();
    return 0;
}

