#include<iostream>
using namespace std;
//IMPORTANT:base case
//1,2,3,4,5,6,7,8,9,10....
//0,1,1,2,3,5,8,13,21,34,55,89.....
//fib(4)=fib(3)+fib(2)
//fib(5)=fib(4)+fib(3)
//fib(n)=fib(n-1)+fib(n-2)

int fib(int n){
    if(n==1)
    return 0;
    if(n==2)
    return 1;
    return fib(n-1)+fib(n-2);
}

int main(){
    cout<<fib(5);
    return 0;
}