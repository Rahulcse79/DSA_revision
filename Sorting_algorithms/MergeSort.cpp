#include <iostream>
#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &vec, int start, int mid, int end)
{
    int size1 = mid - start + 1;
    int size2 = end - mid;
    
    vector<int> vec1(size1), vec2(size2);
    int idx = start;
    
    for(int i=0; i<size1; i++)
    {
        vec1[i] = vec[idx++];
    }
    
    idx = mid + 1;
    for(int i=0; i<size2; i++)
    {
        vec2[i] = vec[idx++];
    }
    
    int index1 = 0, index2 = 0;
    idx = start;
    
    while(index1 < size1 && index2 < size2)
    {
        if(vec1[index1] < vec2[index2])
        {
            vec[idx++] = vec1[index1++];
        }
        else
        {
            vec[idx++] = vec2[index2++];
        }
    }
    
    while(index1 < size1)
    {
        vec[idx++] = vec1[index1++];
    }
    
    while(index2 < size2)
    {
        vec[idx++] = vec2[index2++];
    }
}

void mergeSort(vector<int> &vec, int start, int end)
{
    if(start >= end) return;
    
    int mid = start + (end-start) / 2;
    
    mergeSort(vec, start, mid);
    mergeSort(vec, mid+1, end);
    merge(vec, start, mid, end);
}

int main()
{
    vector<int> vec = {38,27,43,10};
    int end = vec.size()-1, start = 0;
    
    cout<<"Vector before sort: "<<endl;
    for(auto it: vec)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    
    mergeSort(vec, start, end);
    
    cout<<"Vector after sort: "<<endl;
    for(auto it: vec)
    {
        cout<<it<<" ";
    }
    cout<<endl;
    
    return 0;
}