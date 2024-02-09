#include <iostream>
using namespace std;
int main() 
{
int num1 , num2 , num3 , test ;
cin >> num1 >> num2 >> num3 ;

if ( num1 < 100 && num1 >0)
test =num1;
if ( num2 <100 && num2 > test)
test =num2;
if ( num3 < 100 &&num3 > test )
test =num3;
cout << test;



    return 0;

}