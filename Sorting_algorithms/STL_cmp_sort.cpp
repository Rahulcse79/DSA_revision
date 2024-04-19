#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool cmp()
{

}

int main()
{
    vector<int> vec = {20,40,60,80,10,30,50,1,2};
    int size = vec.size();

    sort(vec.begin(), vec.end()); // Basic STL sort.

    for(auto it: vec)
    {
        cout<<it<<" ";
    }

    sort(vec.begin(), vec.end(), cmp); // STL cmp sort.

     for(auto it: vec)
    {
        cout<<it<<" ";
    }
}