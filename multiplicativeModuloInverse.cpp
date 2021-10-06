#include<iostream>
using namespace std;

int mI(int a,int m){
    for(int x=1;x<m;++x){
        if(( (a%m) * (x%m) )%m == 1) return x;
    }
}

void solve(){
    int a,m;
    scanf("%d%d",&a,&m);
    cout<< mI(a,m);

}

int main(){
    solve();
    return 0;
}