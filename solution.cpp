#include<iostream>
#include<algorithm>
using namespace std;
void solve(){
    int n,cnt=0;
    int temp=-1;
    int a[100000];
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    sort(a,a+n);

    for(int i=0;i<n;i++){
        if(a[i]!=temp&&a[i]!=0){
            cnt++;
            temp=a[i];
        }

    }

    cout<<cnt<<endl;
}


int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin>>t;
    while(t--){
        solve();
    }

}
