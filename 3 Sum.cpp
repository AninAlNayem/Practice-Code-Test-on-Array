#include <bits/stdc++.h>
using namespace std;

int main() {

   int n;scanf("%d",&n);
   int arr[n];
   for(int i=0;i<n;i++){
       scanf("%d",&arr[i]);
   }
   sort(arr,arr+n);
   int cnt=0;

   for(int i=0;i<n-2;i++){
      int j=i+1,k=n-1;
      while(j<k){
        int sum=arr[i]+arr[j]+arr[k];
        if(sum==0){
            cnt++;
            j++,k--;
        }
        else if(sum<0){
            j++;
        }
        else{
            k--;
        }
      }
   }
   printf("%d\n",cnt);

return 0;
}
