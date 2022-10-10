#include<iostream>
using namespace std;
int main()
{
int num, reverse_num = 0, temp_num;
cout << "Enter random number to check palindrome value:"; 
cin >> num; 
temp_num = num; 
while (num != 0)
{
reverse_num = reverse_num * 10;
reverse_num= reverse_num + num% 10;
num = num / 10;
}
if(temp_num == reverse_num) 
{
cout << "Given number is palindrome"; 
}
else
{
cout << "Given number is not a palindrome"; 
}
return 0;
}
