// #include<iostream>

// using namespace std;

// int main()
// {
//     // Program to check if a number is even or odd.

//     int n;

//     cout<<"Please enter digit here";

//     cin>>n;

//     if (n%2==0)
//     {
//         cout<<"Even"<<endl;


//     }else
//     {
//        cout<<"odd"<<endl;
//     }
    
//     return 0;
    
// }




// Program to find Max. Min. among two number


// #include<iostream>

// using namespace std;

// int main(){

// int n1,n2;

// cout<<"enter number here";

// cin>>n1>>n2;

// int max,min;

// if(n1>n2)
// {
//     max=n1;
//     min=n2;
// }
// else
// {
//     max=n2;
//     min=n1;
// }

// cout<<"Max :"<<max<<endl;
// cout<<"Min ="<<min<<endl;


//  return 0;
// }


// find max. among three numbers;

// #include<iostream>

// using namespace std;

// int main(){

// int a,b,c;

// cin>>a>>b>>c;

// if(a>b)
// {
//     if(a>c)
//     {
//         cout<<a<<endl;
//     }
//     else
//     {
//         cout<<c<<endl;
//     }

// }
// else
// {
//     if (b>c)
//     {
//     cout<<b<<endl;
//     }

//     else
//     {
//         cout<<c<<endl;
//     }
    
    
// }

    



//     return 0;
// }






// Tringle is scolene,isosceles or equilateral



// #include<iostream>

// using namespace std;

// int main(){

// int sidea,sideb,sidec;

// cout<<"Input three sides of triangle :\n";

// cin>>sidea>>sideb>>sidec;

// if (sidea==sideb && sideb==sidec)
 

// {
//     cout<<"This is an equilateral tringle .\n";
// }

// else if (sidea==sideb || sideb==sidec || sideb==sidec)
// {
//    cout<<"This is an issoceles tringle.\n";
// }
// else
// {
//     cout<<"This is a scalene tringle.\n";

// }





//     return 0;
// }



//Alphabet is a Vowel or a Consonant


#include<iostream>

using namespace std;

int main(){

char c;

int isLowercaseVowel,isUppercaseVowel;

cout<<"Enter an alphabet";

cin>>c;

isLowercaseVowel = (c=='a' || c=='e' || c=='i' || c=='o' || c=='u'   );

isUppercaseVowel =(c=='A' || c=='B' || c=='I' || c=='O' || c=='U'   );

if (isLowercaseVowel || isUppercaseVowel )
{
    cout<<c<<"is a vowel ";
}
else
{
    cout<<c<<"is consonant";
}




    return 0;
}