#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define ln cout<<"\n"
using namespace std;
#define rep(i,s,n) for(ll i = (s);i<(n);++i)
#define pc(x) __builtin_popcount(x)
void DBG() {
	cerr << "]" << endl;
}
template<class H, class... T> void DBG(H h, T... t) {
    //cerr << '[' << endl;
	cerr << to_string(h);
	if(sizeof...(t))
		cerr << ", ";
	DBG(t...);
}
#ifdef _DEBUG
#define dbg(...) cerr << "LINE(" << _LINE_ << ") -> [" << #_VA_ARGS_ << "]: [", DBG(_VA_ARGS_)
#else
#define dbg(...) {}
#endif

#define pi pair<int,int>
#define pl pair<ll,ll> 
#define fr first
#define sc second
#define pb push_back
#define gcd(a,b) __gcd(a,b)
#define all(x) x.begin(),x.end()

void solve(){   
    vector<int> v1,v2;
    //pair<int,int>p;
    int n;

    cin>>n;int a[n],b[n],as=0,bs=0,diff=0,x;
    for(int i=0;i<n;i++){
        cin>>a[i];as+=a[i];
    }
    for(int i=0;i<n;i++){
        cin>>b[i];bs+=b[i];
        x=a[i]-b[i];
        diff+=abs(x);
        if(x>0){
            for(int j=0;j<x;j++){
            v1.push_back(a[i]);
            v2.push_back(b[i]);
            }
        }
        else if(x<0){
            for(int j=0;j<-x;j++){
            v2.push_back(a[i]);
            v1.push_back(b[i]);
            }
        }
    }
    if(as!=bs){
        cout<<"-1\n";
    }
    else{
        cout<<diff/2<<"\n";
        int i=0,j=0;
        for(int i=0;i<v1.size();i++){
            cout<<v1[i]<<" "<<v2[i]<<"\n";
        }
    }
    return;
}   


int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL); 
    int test;cin>>test;  
    while(test--)solve();
    return 0;
}