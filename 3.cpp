#include <iostream>
using namespace std;
int main ()
{
int n ,start=1;
char sym;
cin >> n >> sym;
while ( n > 0 )
{
int count = 1;
while (count <= start)
{
    cout << sym ;
    count +=1;
}
cout << endl;
n-=1;
start+=1;

 } 








 return 0;
 
}