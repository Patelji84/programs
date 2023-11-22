// #include<iostream>
// #include<climits>

// using namespace std;

// int main()
// {

// int n;
// cin>>n;

// int arr[n];

// for (int i = 0; i <n; i++)
// {
//    cin>>arr[i];
// }

// int maxNo= INT_MIN;
// int minNo = INT_MAX;

// for (int  i = 0; i<n; i++)
// {
//     maxNo=max(maxNo,arr[i]);
//     minNo = min(minNo,arr[i]);
// }

// cout<<maxNo<<" "<<minNo<<endl;


//     return 0;

// }




// #include<iostream>

// using namespace std;

// int main()
// {
//     int n;
//     cout<<"enter total elements\n";
//     cin>>n;

//     int arr[n];
//     for (int i = 0; i <n; i++)
//     {
       
//         cin>>arr[i];
//     }

//     int sum=0;

//     for (int i = 0; i <n; i++)
//     {
//        sum = sum+arr[i];
//     }
    
//     cout<<sum<<endl;


//     return 0;
    
// }




#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int arr[n];

    for (int i = 0; i <n; i++)
    {
      cin>>arr[i];
    }

      int maxNo = INT_MIN;

    for (int i = 0; i <n; i++)
    {
    maxNo=max(maxNo,arr[i]);
       
    }
    
    cout<<maxNo<<endl;



    return 0;

}