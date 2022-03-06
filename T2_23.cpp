//Xieen Zhao
//School of Computer and Information Enfineering
//email:2949525626@qq.com
//2022.3.6
//The smallest and largest of the five numbers
#include <iostream>
using namespace std;
int main()
{
   int x1,x2,x3,x4,x5;
   int lest,sest;
   cin >> x1 >> x2 >>x3 >> x4 >> x5;
   if(x1 >= x2)
   lest = x1;
   if(x1 <= x2)
   lest = x2;
   if(lest <= x3)
   lest = x3;
   if(lest <= x4)
   lest = x4;
   if(lest <= x5)
   lest = x5;
   if(x1 <= x2)
   sest = x1;
   if(x1 >= x2)
   sest = x2;
   if(sest >= x3)
   sest = x3;
   if(sest >= x4)
   sest = x4;
   if(sest >= x5)
   sest = x5;
   cout << "The largest is " << lest << endl;
   cout << "The smallest is " << sest << endl;
   return 0;
}
