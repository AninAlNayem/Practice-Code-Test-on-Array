#include <bits/stdc++.h>
using namespace std;
     
int main() {
     
     int n;scanf("%d",&n);
     int arr[n],tmp[n];
     for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        tmp[i]=arr[i];
     }
     sort(arr,arr+n);
     int start=n,end=0;
     for(int i=0;i<n;i++){
        if(arr[i]!=tmp[i]){
            start=i+1;
            break;
        }
     }

     for(int i=n-1;i>=0;i--){
        if(arr[i]!=tmp[i]){
            end=i+1;
            break;
        }
     }
     if(start==n && end==0){
        printf("-1\n");
     }
     else{
        printf("%d %d\n",start,end);
     }

    return 0;
}
