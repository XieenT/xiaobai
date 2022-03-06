//Xieen Zhao
//School of Computer and Information Enfineering
//email:2949525626@qq.com
//2022.3.6
//Arithmetic operation,find the largest number and the smallest number
#include <iostream>
using namespace std;
int main()
{
   int a,b,c;
   int sest,lest;
   cout << "Input three different integers: ";
   cin >> a >> b >> c;
   if(a >= b)
     lest = a;
   if(b >= a)
     lest = b;
   if(lest <= c)
     lest = c;

   if(a <= b)
     sest = a;
   if(b <= a)
     sest = b;
   if(sest >= c)
     sest = c;
   cout << "Sum is " << a + b + c << endl;
   cout << "Average is " << (a + b + c)/3 << endl;
   cout << "Product is " << a * b * c << endl;
   cout << "Smallest is " << sest <<endl;
   cout << "Largest is " << lest <<endl;
   return 0;
}
