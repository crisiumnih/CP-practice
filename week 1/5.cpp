//https://codeforces.com/problemset/problem/572/A
#include<iostream>
    #include<vector>
    #include<algorithm>
    using namespace std;
     
    int main(){
     
      int n,m;
      cin>>n>>m;
      vector<int> arr1,arr2;
      int a,b;
      cin>>a>>b;
      for(int i=0;i<n;i++){
        int h;
        cin>>h;
        arr1.push_back(h);
      }
      for(int i=0;i<m;i++){
        int h;
        cin>>h;
        arr2.push_back(h);
      }
      bool comp;
      if(arr1[a-1]<arr2[m-b]) comp = true;
      else comp = false;
      if(comp==true) cout<<"YES"<<endl;
      else cout<<"NO"<<endl;
      return 0;
     
    }
