#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <math.h>

using namespace std;
int f_ar_prog(int &f_a, int f_n, int f_d, int &f_k, int &f_sum)
{
 f_sum = f_a;
  while(f_k<(f_n-1))
  {
   f_a = f_a + f_d;
   f_sum = f_sum + f_a;
   cout<<f_k + 2<<" - "<<"Chlen progresii = "<<f_a<<" "<<f_sum<<endl;
   f_k++;
  }
  return f_a; f_sum;
}
int main()
{
 int a, n, d, k = 0, sum = 0;
 cout<<"Vvedit pershiy chlen arifmetichnoy progresii: ";
 cin>>a;
 cout<<"Vvedit riznist chlenov: ";
 cin>>d;
 cout<<"Vvedit nomer ostannogo chlena progresii: ";
 cin>>n;
 f_ar_prog(a, n, d, k, sum);
 cout<<"Ostanniy chlen progresii ="<<" "<<a<<endl;
 /*cout<<d;
 cout<<k;*/
 cout<<"Summa chleniv arifmetuchoy rogresii ="<<" "<<sum<<endl;
 return 0;
}