#include<bits/stdc++.h>
#include <chrono>
using namespace std::chrono;
using namespace std;

#define all(x) x.begin(), x.end()
#define mod 1000000007
#define ll long long

bool cmp(string &a,string &b){
    if(a.size()==b.size()) return a<b;
    else return a.size()<b.size();
}
void uttar_nikal(){
    vector<string>v;
    string x;
    unordered_set<string>s;
    while(cin>>x){
        v.push_back(x);
        s.insert(x);
        
    }
        string ans1,ans2;
        ans1=ans2="";
        
        sort(v.begin(),v.end(),cmp);
        int c=v.size()-1;
        vector<bool>dp(1001);
        while(c>=0){
          string &t=v[c--];
          int m=t.size();
          string temp;
        fill(dp.begin(),dp.end(),false);
          for(int i=0;i<m;i++){
            temp="";
            for(int j=0;j<=i;j++){
                if( s.count(t.substr(j,i-j+1))){
                    if(j==0 && i!=m-1 ){
                        dp[i]=true;
                        break;
                        
                    }
                    else if(j>0 && dp[j-1]){
                        dp[i]=true;
                        break;
                        
                    }
                                
                }
            }
            }
            
            if(dp[m-1]){
                if(ans1=="")ans1=t;
                else if(ans2=="")ans2=t;
                else break;
          }
        }
        cout<<"Longest compound word : "<<ans1<<"\n";
        cout<<"Second longest compound word : "<<ans2;



}
int main()
{   ios_base::sync_with_stdio(0); cin.tie(0);
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int t=1,i=1;
    auto start = high_resolution_clock::now();
   
    while(t--)
    { 
    i++;

        uttar_nikal();
        cout<<"\n";
    }
   auto stop = high_resolution_clock::now();
   auto duration = duration_cast<milliseconds>(stop - start);
   cout<<"Time taken to process input file : "<<duration.count()<< " milliseconds";
}