//Xieen Zhao
//School of Computer and Information Enfineering
//email:2949525626@qq.com
//2022.3.6
//The first one is a mutiple of the second one
#include <iostream>
using namespace std;
int main()
{
   int a,b;
   cin >> a >> b;
   if(a % b == 0)
   cout << "yes";
   if(a % b != 0)
   cout << "no";
   return 0;
}
