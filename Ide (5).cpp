#include<bits/stdc++.h>
using namespace std;
 int main()
 {
     int n;
     cin>>n;
     int a[n];
     for(int i=0;i<n;i++) cin>>a[i];
     sort(a,a+n);
     vector<int> vec;
     int count=1;
     for(int i=0;i<n;i++)
     {
        int j=i+1; 
        if(a[i]==a[j])
        {
            count++;
        }
        else
        {
            vec.push_back(count);
            count=1;
        }
     }
     sort(vec.begin(),vec.end());
     int size=vec.size();
     size=vec[size-1];
     if(size>n/2)
     cout<<"YES";
     else
     cout<<"NO";
     return 0;
 }