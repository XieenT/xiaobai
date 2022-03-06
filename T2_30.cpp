//Xieen Zhao
//School of Computer and Information Enfineering
//email:2949525626@qq.com
//2022.3.6
//Bady mass prime calculator
#include <iostream>
using namespace std;
int main()
{
   double a,b;
   double bmi;
   cout << "Please enter your weight(kg) and height(m)." << endl;
   cin >> a >> b;
   bmi = a/(b * b);
   cout << bmi << endl;
   cout << "BMI VALUES" << endl;
   cout << "Underweight:less than 18.5" <<endl;
   cout << "Normal:     between 18.5 and 24.9" << endl;
   cout << "Overweight: between 25 and 29.9" <<endl;
   cout << "Obese:      30 or greater" << endl;
   return 0;
}
