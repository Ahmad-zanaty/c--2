#include <iostream>
using namespace std;
int main ()
{

int num1{0}, count{1}   ;
char sym{'*'};

cin >> num1 >> sym ;
while (num1 > 0)

{
   count =1;
     while ( count <= num1)
       {
     cout << sym ;
       count +=1;
       }
     cout <<endl;
     num1-=1; 
    

}



 return 0;
 
 } 