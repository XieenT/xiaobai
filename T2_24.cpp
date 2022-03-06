//Xieen Zhao
//School of Computer and Information Enfineering
//email:2949525626@qq.com
//2022.3.6
//Determine whether a number is odd or even
#include <iostream>
using namespace std;
int main()
{
   int x;
   cin >> x;
   x = x % 2;
   if(x == 0)
   cout << "它是偶数。";
   if(x != 0)
   cout<< "它是奇数。";
   return 0;
}
