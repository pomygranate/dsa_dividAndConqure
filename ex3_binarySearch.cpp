#include <bits/stdc++.h>
#include <vector>
#include<iostream>
using namespace std;

int binary(vector<int> arr,int s,int e,int key){
  if(s<=e){
    int mid= (s+e)/2;
    if(arr[mid]==key){
      return mid;
    }

    if(arr[mid]>key){
      return binary(arr,s,mid-1,key);
    }

    return binary(arr,mid+1,e,key);
  }
  return -1;
}



int binarySearch(vector<int> v, int key)
{
  int n=v.size();
  int result=binary(v,0,n,key);
  return result;
}

int main(){
  vector<int> v={0,1,2,3,4,5,6,7,8,9};
  cout<<binarySearch(v,1);
}
