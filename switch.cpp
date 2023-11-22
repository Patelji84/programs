
#include <iostream>

using namespace std;

int main()
{
  int n1, n2;

  char op;

  cout << "Enter 2 numbers"<<endl;
  cin >> n1 >> n2;

  cout << "enter operand";
  cin >> op;

  switch (op)
  {
  case '+':
    cout << n1 + n2 << endl;
    break;

  case '-':
    cout << n1 - n2 << endl;
    break;

  case '*':
    cout << n1 * n2 << endl;
    break;

  case '/':
    cout << n1 / n2 << endl;
    break;

  case '%':
    cout << n1 % n2 << endl;
    break;

  default:

    cout << "Operator not found";
    break;
  }

  return 0;
}














// Write a variable find vowel and consonent

// #include<iostream>

// using namespace std;

// int main()

// {

// char c;

// cout<<"Enter a number:\n";

// cin>>c;

// switch (c)
// {
// case 'a':
//   cout<<"it is a vowel";
//     break;

// case 'e':
//   cout<<"it is a vowel";
//     break;

//     case 'i':
//   cout<<"it is a vowel";
//     break;

//     case 'o':
//   cout<<"it is a vowel";
//     break;

//     case 'u':
//   cout<<"it is a vowel";
//     break;
// default:

// cout<<"it is consonent";
//     break;
// }

//     return 0;
// }