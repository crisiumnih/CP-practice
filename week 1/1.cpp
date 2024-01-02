#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;



int maxSub(vector<int> &a){
  int maxsu = a[0];
  int curr = a[0];

  for(int i=1;i<a.size();i++){
    if((abs(a[i-1])%2==0 && abs(a[i])%2!=0) || (abs(a[i-1])%2!=0 && abs(a[i])%2==0)){
      curr+= a[i];
      
    }
    else {
      curr = a[i];

    }
    if(a[i]>curr) curr = a[i];
    maxsu = max(maxsu,curr);
    }

  return maxsu;
  
}
      

int main(){

  int t;
  cin>>t;
  while(t--){
    int n;
    cin>>n;
    vector<int> arr;
    for(int i=0;i<n;i++){
      int h;
      cin>>h;
      arr.push_back(h);
    }
    cout<<maxSub(arr)<<endl;
    
    
  }


  return 0;
}
