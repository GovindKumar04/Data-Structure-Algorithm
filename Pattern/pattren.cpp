#include <iostream>
using namespace std;

// void print1(int n){
//     for(int i=0; i<n; i++){
//         int j;
//         for(j=0; j<n; j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }
// void print(int n){
//     for(int i=0; i<n; i++){
//         int j;
//         for(j=0; j<=i; j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }
// void print(int n){
//     for(int i=1; i<=n; i++){
//         int j;
//         for(j=1; j<=i; j++){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
// }
// void print(int n){
//     for(int i=0; i<n; i++){
//         int j;
//         for(j=0; j<=i; j++){
//             cout<<i+1;
//         }
//         cout<<endl;
//     }
// }
// void print(int n){
//     for(int i=n; i>0; i--){
//         int j;
//         for(j=i; j>0; j--){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
// }
// void print(int n){
//     for(int i=n; i>0; i--){
//         int j;
//         for(j=1; j<=i; j++){
//             cout<<j<<" ";
//         }
//         cout<<endl;
//     }
// }
// void print(int n){
//     for(int i=0; i<n; i++){
//         for(int j=0; j<n-1-i; j++){
//             cout<<" ";
//         }
//         for(int j=0; j<(i*2)+1; j++){
//             cout<<"*";
//         }
//         for(int j=0; j<n-1-i; j++){
//             cout<<" ";
//         }
//         cout<<endl;
//     }
// }
// void print(int n){
//     for(int i=n; i>0; i--){
//         for(int j=i; j<n; j++){
//             cout<<" ";
//         }
//         for(int j=0; j<(i*2)-1; j++){
//             cout<<"*";
//         }
//         for(int j=i; j<n; j++){
//             cout<<" ";
//         }
//         cout<<endl;
//     }
// }
// void print(int n){
//     for(int i=0; i<n; i++){
//         for(int j=0; j<n-1-i; j++){
//             cout<<" ";
//         }
//         for(int j=0; j<(i*2)+1; j++){
//             cout<<"*";
//         }
//         for(int j=0; j<n-1-i; j++){
//             cout<<" ";
//         }
//         cout<<endl;
        
//     }
//     for(int i=n-1; i>0; i--){
//         for(int j=i; j<n; j++){
//             cout<<" ";
//         }
//         for(int j=0; j<(i*2)-1; j++){
//             cout<<"*";
//         }
//         for(int j=i; j<n; j++){
//             cout<<" ";
//         }
//         cout<<endl;
//     }
// }
// void print(int n){
//     for(int i=0; i<=2*n-1; i++){
//         if(i<5){
//             for(int j=0; j<=i; j++){
//                 cout<<"*";
//             }
//             cout<<endl;
//         }
//         else if(i>=5){
//           for(int j=0; j<2*n-i; j++){
//                 cout<<"*";
//             }
//             cout<<endl;
//             }
//         }
//     }    
// void print(int n){
//     for(int i=0; i<=n; i++){
//         if(i%2==0){
//             for(int j=0; j<i; j++){
//                 if(j%2==0){
//                     cout<<0;
//                 }else{
//                     cout<<1;
//                 }
//             }
//             cout<<endl;
//         }
//         else{
//             for(int j=0; j<i;j++){
//                 if(j%2==0){
//                     cout<<1;
//                 }else{
//                     cout<<0;
//                 }
//             }
//              cout<<endl;
//         }
//     }
// }
// void print(int n){
//     int space=2*n-2;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<=i; j++){
//             cout<<j+1;
//         }
//         for(int j=0; j<space; j++){
//             cout<<" ";
//         }
//         for(int j=i+1; j>0; j--){
//             cout<<j;
//         }
//         space-=2;
//         cout<<endl;
//     }
// }
// void print(int n){
//     int count=0;
//     for(int i=0; i<n; i++){
//         for(int j=0; j<=i; j++){
//             count++;
//             cout<<count<<" ";
//     }
//     cout<<endl;
//    }
// }
// void print(int n){
//     for(int i=0; i<n; i++){
//         for(char ch='A'; ch<= 'A'+i; ch++){
//             cout<<ch;
//         }
//         cout<<endl;
//     }
// }
// void print(int n){
//     for(int i=n; i>=0; i--){
//         for(char ch='A'; ch<= 'A'+i; ch++){
//             cout<<ch;
//         }
//         cout<<endl;
//     }
// }
// void print(int n){
     
//     for(int i=0; i<n; i++){
//        char ch= 'A';
//        ch+=i;
//         for(int j=0; j<=i; j++){
//             cout<<ch;
//         }
//         cout<<endl;
//     }
// }
//  void print(int n){
//     for(int i=0; i<=n; i++){
//         // cout<<"I is"<<i;
//         for(int j=i; j<n; j++){
//             cout<<" ";
//         }
//         for(int j=0; j<i; j++){
//             cout<<j+1;
//         }
//         for(int j=i; j>0; j--){
//             if(j!=1){
//                 cout<<j-1;
//             } 
//         }
//         // for(int j=i; j<n; j++){
//         //     cout<<" ";
//         // }
        
//         cout<<endl;
//     }
// }
int main(){
    int n;
    cout<<"Enter the number of column"<<endl;
    cin>>n;
    print(n);
    return 0;
}