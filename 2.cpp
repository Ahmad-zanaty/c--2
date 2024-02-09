#include <iostream>
using namespace std;
int main ()
{

int num1{0}  ;
char sym{'a'};
cin >> num1 >> sym ;
while (num1 > 0)

{
    cout << sym ;
    num1-=1;
}

 return 0;
 
 } 