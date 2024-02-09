#include <iostream>
using namespace std;
int main ()
{ 
    int count {1} ,even_value{0} ,odd_value{0},count_nums{0} ,value{0},even_nums{0},odd_nums{0};

cin >> count_nums;

while (count <= count_nums)
{
    
    cin >> value;
        if(count % 2==0)
       { 
        even_value +=value;
        even_nums+=1;
        }
        else 
        {
       odd_value +=value;
       odd_nums+=1;
        }
      value =0;
       count+=1;
}
/*
cout << even_nums<< endl;
cout << even_value;
*/
cout << even_value/even_nums << "\t"<< odd_value/odd_nums;
 return 0;
 
 } 