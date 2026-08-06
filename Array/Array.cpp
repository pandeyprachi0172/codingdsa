// __ARRAY_OPERATORS

// 1.it store same type of data type.
// (means if integer store then only integer is store ,if chat if thrn bool )
// 2.it stores at contigous location.
//      ex:  int a[1000];
//        where,
//        int is data type 
//        a is a name of arrray
//        [1000] is the size of array

// ## How to insert value in array?

// ~ 1. int a[5]={6,8,5,1,9}
//     *saare variables ko sath rakhne ke liye array is used.*
//          0      1       2        3       4 ~~~~~INDEX
//      a    6      8       5        1       9
//          a[0]   a[1]   a[2]    a[3]    a[4]

// ~2. int name []={3,8,2,9}

// ~3. int arr[10];
// for (int  i = 0; i < 10; i++)
// cinn>>arr[i];

// 4. int a[5]={8,4}

#include <iostream>
#include <climits>   // Required for INT_MAX
using namespace std;

int main() {
    int arr[5] = {2, 3, 1, 7, 8};
    int ans = INT_MAX;
    // iski jagah we can assume the first element to be smallest
    // int ans=arr[0];

    for (int i = 0; i < 5; i++) {
        if (arr[i] < ans)
            ans = arr[i];
    }

    cout << ans<<endl;
    //max value
    ans= INT_MIN;
    for(int i=0;i<5;i++)
    {
        if (arr[i]>ans)
        ans= arr[i];

    }
    cout<<ans<<endl;
    return 0;
}




