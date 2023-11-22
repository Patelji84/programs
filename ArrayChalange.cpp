// Given an arr a[] of size n. For every i from 0 to n-1 output ma(a[0],a[1......a[n]])



// #include<iostream>

// using namespace std;

// int main()
// {
//     int n;
//     cin>>n;

//     int array[n];

//     for (int i = 0; i < n; i++)
//     {
//         cin>>array[i];

// }


//         int mx=-19999;

//         for (int i = 0; i <n; i++)
//         {
//            mx = max(mx,array[i]);

//            cout<<mx<<endl;
//         }
        
    




//     return 0;
// }




//     iterate over all subarrays and output the sum after each iteration


#include<iostream>

using namespace std;

int main()
{
    int n;
    cin>>n;

    int array[n];

    for (int i = 0; i < n; i++)
    {
        cin>>array[i];
    }
    
    int curr=0;

    for (int i = 0; i < n; i++)
    {
       curr=0;

       for (int j = i; j < n; j++)
       {
           curr += array[j];

           cout<<curr<<endl;
       }
       
    }
    



    return 0;
}