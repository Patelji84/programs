// #include<iostream>

// using namespace std;

// int main()
// {
//     int a = 5;

//     a=1,2,3;

//     printf("%d",a);
//     return 0;

// //output Ans 1 -> Prority for the values  assigned to any variable is given from left to right

// }


// #include<iostream>

// using namespace std;

// int main()
// {
//     int a;

//     a=(1,2,3);

//     printf("%d",a);
//     return 0;

//      //output Ans 3 -> Prority for the values inside brackets()  assigned to any variable is given from right to left
// }



// #include<iostream>

// using namespace std;

// int main()
// {
//     int x =2;

//    (x & 1) ? printf("true") : printf("false");

    
//     return 0;
// }


 
//  #include<iostream>

//  int main()
//  {
//      printf("%d", 3 * 2--);

//      return 0;
//  }



// #include<iostream>

// using namespace std;

// int main()
// {
//     int i= 10;

//     i++;
//     i*i;

//     printf("%d\n",i);

//     return 0;

// output 11;
 
// }



#include<iostream>

using namespace std;

int main()
{
  int a=1,b=3,c;

  c= b<<a;

  b = c*(b*(++a)--);
a=a>>b;
printf("%d",b);

    return 0;
}