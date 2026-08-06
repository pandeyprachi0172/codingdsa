// #include<iostream>
// using namespace std;
// int sum (int m, int n)  //function declare
// {
//     int ans=m+n;        //function define
//     return ans;
// }
// int mul(int m,int n)
// {
//     int ans=m*n;
//     return ans;
// }
// void fun()
// {
//     cout<<"hello prachi"<<endl;
// }

// int main(){
//     int a,b;
//     cout<<"enter two  number";
//     cin>>a>>b;
//     //function call
//     cout<<sum(a,b);
//     cout<<endl;
//     cout<<mul(a,b);
//     cout<<endl;
//     fun();
// }


//prime number using function//
// #include<iostream>
// using namespace std;

// bool Prime (int n)
// {
//   if (n<2)
//   return 0;
//   for( int i=2 ; i<n; i++)
//   {
//     if(n%i==0)
//     return 0;
//   }
//   return 1;

// }
// int fact (int n=3) //default parameter
// {
//     int ans =1;
//     for (int i=1; i<=n;i++)
//     ans=ans*i;

//     return ans;
// }

// int main()
// {
//     int a,b;
//     cout<<"enter the number:  ";
//     cin>>a>>b;

//     cout<<fact();
//     cout<<endl;

//     //A is prime or not 
//     cout<<Prime(a)<<endl;
//     //A ka factorial
//     cout<<fact(a)<<endl;
//     //B is prime or not
//     cout<<Prime(b)<<endl;
//     //B ka factorial
//     cout<<fact(b)<<endl;
//     //B-A is prime or not
//     cout<<Prime(b-a)<<endl;
//     //B-a ka factorial
//     cout<<fact(b-a)<<endl;
// }

//swapping of two numbers//
#include<iostream>
using namespace std;
   
void swap (int &a, int &b)  //pass by refrence//
{
    int c;
    c=a;
    a=b;
    b=c;
}

int main(){
    int a,b;
    cin>>a>>b;
    swap(a,b);
    cout<<a<<" "<<b<<" ";
}