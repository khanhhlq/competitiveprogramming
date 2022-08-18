

// // C++ program to check if a number is power
// // of 3 or not.
// #include <iostream>
// using namespace std;
 
// // Returns true if n is power of 3, else false
// bool check(int n)
// {
//     if (n <= 0)
//         return false;
   
//     /* The maximum power of 3 value that
//        integer can hold is 1162261467 ( 3^19 ) .*/
//     return 1162261467 % n == 0;
// }
 
// // Driver code
// int main()
// {
//     int n; cin >>n;
//     if (check(n))
//         cout <<"Yes";
//     else
//         cout <<"No";
 
//     return 0;
// }

// #include <iostream>
// using namespace std;
// #include<math.h> 
// int main()
// {
 
//     int b; cin >> b;
//     int a = 3;
//     // computing power
//     double p = log10(b) / log10(a);
//     // checking to see if power is an integer or not
//     if (p - (int)p == 0) {
//         cout << p;
//     }
//     else{
//         cout<<"NO";
//     }
//     return 0;
// }
 

// #include <bits/stdc++.h>
// using namespace std;
// int main()
// {
//     double n, POF3;
//     cin >> n;
//     if(n > 0){
//         POF3=log(n)/log(3);
//         if(n=pow(3,POF3)){
//             cout << POF3;
//         } else{
//             cout << "NO";
//         }
//     } else if(n <0){
//         POF3=log(n)/log(3);
//         if(n=pow(3,POF3)){
//             cout << POF3;
//         } else{
//             cout << "NO";
//         }
//     }

//     // if(n > 0){
//     //     POF3 = log(n)/log(3);
//     //     if(n == pow(3, POF3)){
//     //         cout << POF3;
//     //     } else{
//     //         cout << "NO";
//     //     }
//     // }else if(n < 0){
//     //     POF3 = 1/(pow(3, n));
//     //     if(pow(3,n) == )
//     // }
//     // if (POF3==1)
//     //     cout << 0;
//     // else if(n == pow(3, POF3)){
//     //     cout << POF3;
//     // }else
//     //     cout << "NO";
    
// }