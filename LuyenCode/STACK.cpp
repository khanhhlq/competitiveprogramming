#include <bits/stdc++.h>
using namespace std;
stack<int> T;
int t, x, y;
int main(){
    cin>>t;
    cin.ignore();
    for(int i=0; i<t; i++){
        cin>>x;
        switch(x){
            case 1:
                cin>>y;
                T.push(y);
                break;
            case 2:
                if(!T.empty()) T.pop();
                else break;
                break;
            case 3:
                if(!T.empty()) cout<<T.top()<<"\n";
                else cout<<"Empty!"<<"\n";
                break;
        }
    }
}
// #include <bits/stdc++.h>
// using namespace std;
// int t, x, y, top=0, sta[100005];
// int main(){
//     cin>>t;
//     for(int i=0; i<t; i++){
//         cin>>x;
//         switch(x){
//             case 1:
//                 cin>>y;
//                 top++;
//                 sta[top]=y;
//                 break;
//             case 2:
//                 if(top>0) top--;
//                 break;
//             case 3:
//                 if(top>0) cout<<sta[top]<<"\n";
//                 else cout<<"Empty!"<<"\n";
//                 break;
//         }
//     }
// }