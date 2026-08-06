#include<iostream>
using namespace std;
// int main(){
//     for(int i=0; i<=9; i++)
//     {
//         cout<<"hello"<<endl;
//     }

// }

     // print n natural number?//

// int main(){
//     int n;
//     cin>>n;
//     for (int i=1; i<=n;i++)
//     {
//         cout<<i<<endl;  
//     }
// }
      // print squares of n numbers//

// int main(){
//     int n;
//     cin>>n;
//     for(int i=1;i<=n;i++)
//     { 
//         cout<<i*i<<endl;
//     }
// }

//print all even numbers up to 20//

//  int main(){
//     int n;
//     cin>>n;
//     for( int i=2; i<=20;i=i+2)
//     {
//         cout<<i<<endl;
//     }
//  }
                //OR//
    // int main(){
    //     int num;
    //     cout<<"Enter the number: ";
    //     cin>>num;
    //     for(int i=1 ; i<=num;i=i+1)
    //     {
    //         if(i%2==0)
    //         {
    //             cout<<i<<" ";
    //         }   
    //     }
    // }

//print odd numbers upto n//
// int main(){
//     int n;
//     cin>>n;
//     for(int i =1; i<=n ;i=i+2)
//     {
//         cout<<i<<" ";
//     }
// }
 //print numbers upto 200//
//  int main(){
//     for (int i=1; i<=200;i=i+1)
//     cout<<i<<"   ";

//  }

//print A to Z //
// int main (){
//     char name;
//     cin>>name;
//     for(name='a'; name<='z';name=name+1)
//     {
//         cout<<name<<" ";
//     }
// }
 
   //print no. in reverse upto 10//
// int main(){
//     for(int i=10; i>=1; i=i-1)
//    {
//      cout<<i<<"  ";
//     }
// }
//print numbers from 1 to 100 but difference is 3//
// int main(){
//     int i;
//     for (int i=1; i<=100; i=i+3)
//     {
//         cout<<i<<" ";
//     }
// }

 //print table of 6//
// int main(){
//     int i;
//     for(int i=6 ;i<=60; i=i+6)
//     {
//         cout<<i<<endl;
//     }
// }

//print table of n//
// int main(){
//     int n,i;
//     cout<<"enter the table: ";
//     cin>>n;
//     for(i=1; i<=10;i=i+1)
//     {
//         cout<<n*i<<endl;
//     }

// }
   //calculate power of a number//
//    int main(){
//     int n,pow,i,num;
//     cout<<"enter the  number: "; 
//     cin>>n;
//     cout<<"enter the power: ";
//     cin>>pow;
//     num=n;
//     for( i=1; i<=pow;i=i+1)
//     {
//         num=num*n;
//     }
//     {cout<<num;
//    }
//    }

   //print sum of n natural number//

//    int main(){
//     int n,i,sum=0;
//     cout<<"enter the number:  ";
//     cin>>n;

//     for(int i=1 ;i<=n;i=i+1)
//     {sum=sum+i;}
//     cout<<sum;

//    }

//print factorial of a number//
// int main(){
//    int n,fact=1,i;
//    cout<<"enter the number: ";
//    cin >>n;
//    for( int i=1;i<=n;i=i+1 )
//    {
//       fact=fact*i;
//    }
//    cout<<fact;
// }
//print prime number upto n//
// int main(){
//    int n,i;
//    cout<<"enter the number: ";
//    cin>>n;
//    if(n<2)
//    {cout<<"not a prime number";
//    return 0;
//    }
//    else{
//       for(i=2;i<n;i=i+1)
//       {
//          if(n%i==0)
//          {
//             cout<<"not a prime number";
//             return 0;
//          }
         
//       }
//       cout<<"prime number";
//       return 0;
//    }
   
// }
 //print the Fibonacci series//

int main() {
    int n, a = 0, b = 1, next;

    cout << "Enter number of terms: ";
    cin >> n;

    cout << "Fibonacci Series: ";

    for (int i = 1; i <= n; i++) {
        cout << a << endl;
        next = a + b;
        a = b;
        b = next;
    }

    return 0;
}