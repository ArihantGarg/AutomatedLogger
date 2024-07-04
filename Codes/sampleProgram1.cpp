#include<bits/stdc++.h>
using namespace std;

#include "Headers/header.hpp"

int add(int a,int b)
{
    int sum=a+b;
    outputLog("Sum of "+to_string(a)+" and "+to_string(b)+" is: "+to_string(sum));
    return sum;
}

int main(){
    int a = 10;
    int b = 20;
    add(a,b);
    return 0;
}