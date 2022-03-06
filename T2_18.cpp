//Xieen Zhao
//School of Computer and Information Enfineering
//email:2949525626@qq.com
//2022.3.6
//Compare two integers
#include <iostream>
using namespace std;
int main()
{
   int number1;
   int number2;
   cout << "Please enter two numbers." << endl;
   cin >> number1 >> number2;
   if(number1 >= number2)
     cout << number1 << " is large.";
   if(number1 <= number2)
     cout << number2 << " is large.";
   if(number1 == number2)
     cout << "There numbers are equal.";
   return 0;
}
