#include <iostream>
#include <algorithm>
#include <iostream>
#include <vector>
 using namespace std;
// //[Naive Approach] By Using three nested loops 
// //Time Complexity: O(n3)
// //Auxiliary Space: O(1)
// int maxProduct(vector<int> arr){
//     int n=arr.size();
//     int maxProduct =-1e9;
//     for(int i=0;i<n-2;i++){
//         for(int j=i+1;j<n-1;j++){
//             for(int k=j+1;k<n;k++){
//                 maxProduct=max(maxProduct,arr[i]*arr[j]*arr[k]);
//         }
//     }
//     }
//     return maxProduct;
// }
// int main(){
//     vector<int> arr={10,3,5,6,20};
//     cout<<maxProduct(arr)<<endl;
// }
// //[Better Approach] By Using sorting - Time O(n*log(n)) and Space O(1)
int maxProduct(vector<int> arr){
    int n=arr.size();
    sort(arr.begin(),arr.end());
    return max(arr[0]*arr[1]*arr[n-1],
    arr[n-1]*arr[n-2]*arr[n-3]);
}
int main(){
vector <int> arr={-10,-3,5,6,-20};
int max=maxProduct(arr);
cout<<max<<endl;
return 0;
}
