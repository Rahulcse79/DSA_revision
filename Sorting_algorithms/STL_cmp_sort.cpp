#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool cmp(int &a, int &b)
{
    return a>b;
}

bool cmp2(vector<int> &a, vector<int> &b)
{
    return a<b;
}

int main()
{
    vector<int> vec = {20,40,60,80,10,30,50,1,2};
    int size = vec.size();
    
    
    cout<<"Vector before sort: "<<endl;
    for(auto it: vec)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    cout<<endl;
    
    sort(vec.begin(), vec.end());
    sort(vec.begin(), vec.end(), cmp);  // Comparesion sort
    
    cout<<"Vector after sort: "<<endl;
    for(auto it: vec)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    cout<<endl;
    
    vector<vector<int>> vec2 = {{20,40,60,80,10,30},{112,34,5,12,46,7}, {88,11,22,76,12,4}};
  
    cout<<"Vector before sort: "<<endl;
    for(auto it: vec2)
    {
        for(auto itt: it)
        {
            cout<<itt<<" ";
        }
        cout<<endl;
        cout<<endl;
    }
    
    for( auto &it: vec2)
    {
        sort(it.begin(),it.end());
    }
    
    sort(vec2.begin(), vec2.end(), cmp2);
    
    cout<<"Vector after sort: "<<endl;
    for(auto it: vec2)
    {
        for(auto itt: it)
        {
            cout<<itt<<" ";
        }
        cout<<endl;
        cout<<endl;
    }
    
    return 0;
}