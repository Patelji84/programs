#include<iostream>
using namespace std;

int main()
{

         int num;
         cout<<"Enter the decimal Nmber ";
         cin>>num;
         int ans = 0, rem , mul =1;

         while(num >0)
         {
                  rem = num % 2;
                  num = num/2;
                  ans = rem*mul+ans;
                  mul = mul *10;
         }

         cout<<ans<<endl;
}