//Xieen Zhao
//School of Computer and Information Enfineering
//email:2949525626@qq.com
//2022.3.6
//The digits of a five-digit integer
#include <iostream>
using namespace std;
int main()
{
   int x;
   int x1,x2,x3,x4,x5;
   cin >> x;
   x5 = x % 10;
   x = x / 10;
   x4 = x % 10;
   x = x / 10;
   x3 = x % 10;
   x = x / 10;
   x2 = x % 10;
   x = x / 10;
   x1 = x % 10;
   cout << x1 << "   " << x2 << "   " << x3 << "   " << x4 << "   " << x5 <<endl;
   return 0;
}
