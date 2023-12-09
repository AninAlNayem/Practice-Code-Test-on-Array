#include<bits/stdc++.h>
using namespace std;

struct Point{
   int x,y;
};

bool cmp(Point A,Point B){
    if(A.x!=B.x)return A.x<B.x;
    return A.y<B.y;
}

int main(){

    int n;scanf("%d",&n);
    Point arr[n];
    for(int i=0;i<n;i++){
        scanf("%d%d",&arr[i].x,&arr[i].y);
    }
    sort(arr,arr+n,cmp);
   
    int start=0,End=0;
    start=arr[0].x,End=arr[0].y;
    for(int i=0;i<n-1;i++){

        if(End>=arr[i+1].x){
           End=max(End,arr[i+1].y);
        }
        else{
            printf("%d %d\n",start,End);
            start=arr[i+1].x;
            End=arr[i+1].y;
        }
    }
    printf("%d %d\n",start,End);

return 0;

}
