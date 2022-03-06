//Xieen Zhao
//School of Computer and Information Enfineering
//email:2949525626@qq.com
//2022.3.6
//Carpool save salculator
#include <iostream>
using namespace std;
int main()
{
   int a,b,c,d,e;
   cout << "每天开的总英里数" << endl;
   cin >> a;
   cout << "每加仑汽油的价格" << endl;
   cin >> b;
   cout << "每加仑汽油可以开的英里数" << endl;
   cin >> c;
   cout << "每天的停车费" << endl;
   cin >> d;
   cout << "每天的通行费" << endl;
   cin >> e;
   cout << (a / c) * b + d + e;
}
