#include <iostream>
using namespace std;
int main() 
{


int num1,num2,num3,empty;
cin >> num1 >> num2 >> num3 ;
/*
//empty = num1;
if ( num1 < num2 && num1 < num3 && num2 < num3  )
cout << num1 <<" "<< num2 <<" " <<num3;
if ( num1 < num2 && num1 < num3 && num3 < num2  )
cout << num1 <<" "<< num3 <<" " <<num2;
else if (num2 < num1 && num2 < num3 && num3 < num1)
 cout << num2 <<" "<< num3 <<" " <<num1;
else if (num2 < num1 && num2 < num3 && num1 < num3)
 cout << num2 <<" "<< num2 <<" " <<num1;
else if (num3 < num1 && num3 < num1 && num2 < num1)
 cout << num3 <<" "<< num2 <<" " <<num1;
 else if (num3 < num1 && num3 < num1 && num1 < num2)
 cout << num3 <<" "<< num1 <<" " <<num2;
 */


 if (num2 < num1)
 {
    empty =num1;
 num1=num2;
 num2 =empty;}
 if (num3 < num2 )
 {
    empty =num2;
    num2 =num3;
    num3 =empty;

 }
 if (num2 < num1) 
 {empty =num1 ;
 num1 =num2;
 num2 = empty;
}
 
 cout << num1 << " " << num2 << " " << num3;
    return 0;
}
