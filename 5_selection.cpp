#include <iostream>
using namespace std;
int main()
    {
    int num1 , num2 ,test{0};
    cin >> num1;
    while (num1>0)
    {
   cin >> num2;
      if (num2 > test )
       test = num2;
      num1 -=1;


    }
    cout << test;




return 0;
    }
