#include<iostream>
using namespace std;
#define N 4
int result[N];
int l_idx(int a[N]){
    int i=0;
    int c=0;
    for(i=0;i<3;i++){
        if(a[i]<a[i+1]){
            c=i;
        }
    }
    return c;
}
void swap(int x[N],int ind){
    int i,c,temp,smallest,a[N];
    for(i=0;i<N;i++){
        a[i]=0;
    }
    for(i=ind+1;i<N;i++){
        a[i]=x[i];
        }
    for(i=0;i<N;i++){
        if(x[ind]<a[i]){
            smallest=a[i];
            
        }
    }
    for(i=0;i<N;i++){
        if(x[i]==smallest){
            c=i;
        }
    }
    temp=x[ind];
    x[ind]=smallest;
    x[c]=temp;
    }
void ascending_order(int x[N],int ind){
    int i,j,temp;;    
    for(i=ind+1;i<N;i++){
        for(j=i+1;j<N;j++){
            if(x[i]>x[j]){
                temp=x[i];
                x[i]=x[j];
                x[j]=temp;
            }
        }
    }
}
int main(){
    int i,n,c;
    int decoy[N];
    cin>>n;
    for(i=0;i<n;i++){
        cin>>result[i];
    }
    for(i=0;i<24;i++){
    cout<<result[0]<<result[1]<<result[2]<<result[3]<<endl;
    c=l_idx(result);
    swap(result,c);
    ascending_order(result,c);
    }
}