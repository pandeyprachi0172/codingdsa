//program 1 

// #include<iostream>
// using namespace std;
// int main(){
//     int a=10;
//     // Print the address of a
//     cout<<&a<<endl;
//     int*ptr=&a;
//     cout<<ptr<<endl;
//     //to print the size of pointer
//     cout<<sizeof(ptr)<<endl;
//     float m=2.6;
//     float *ptr1=&m;
//     cout <<ptr1<<endl;
//     cout<< sizeof(ptr1)<<endl;

// }


//program 2

#include<iostream>
using namespace std;
int main (){
    // print the adddress of a
    int a=10;
    int *ptr=&a;
     cout <<ptr<<endl; //address of a
    cout<<*ptr<<endl; //value inside a

    // type 2 of initialization
    int b=20;
    ptr=&b; //ptr pointing b
    cout<<ptr<<endl;
    cout<<*ptr<<endl;
    b=30;
    cout<<*ptr<<endl; // as the value of ptr is updated as 30 
}

