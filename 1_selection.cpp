#include <iostream>
using namespace std;
int main() 
{
int num1,num2;
cin >> num1 >> num2 ;
if (num1%2==0&&num2%2==0)
cout <<"div" <<num1/num2;
else if ( num1 % 2 !=0 && num2 % 2 !=0 && num2 != 0)
cout <<"mul"<< num1 * num2;

else if ( num1% 2 != 0 && num2 % 2 ==0)
cout <<"add "<< num1 +num2;

else if ( num1%2==0&&num2%2!=0)
cout << "sub "<<num1 -num2;





    return 0;
}