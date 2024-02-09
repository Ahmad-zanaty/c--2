#include <iostream>
using namespace std;
int main ()
{

int x ,nums_under_x{0},nums_over_x{0} ,num1,num2,num3,num4,num5;
cin >>x>>num1>>num2>>num3>>num4>>num5;
if (num1<x)
nums_under_x+=1;
if (num2<x)
nums_under_x+=1;
if (num3<x)
nums_under_x+=1;
if (num4<x)
nums_under_x+=1;
if (num5<x)
nums_under_x+=1;
cout << 5-nums_under_x <<" " << nums_under_x;
return 0;
 } 



