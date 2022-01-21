#include <bits/stdc++.h>
#include <vector>
#include<iostream>
using namespace std;

//rotated array input = [4,5,6,7,0,1,2,3];

int rotatedArraySearch(vector<int> a,int key,int s,int e){
  if(s<=e){
    int mid=(s+e)/2;

    if(a[mid]==key){
      return mid;
    }
    //if mid is present at first part
    if(a[s]<=a[mid]){
      if(a[s]<=key and a[mid]>=key){
        return rotatedArraySearch(a,key,s,mid-1);
      }
      return rotatedArraySearch(a,key,mid+1,e);
    }

    else{
      if(a[mid]<=key and key<=a[e]){
        return rotatedArraySearch(a,key,mid+1,e);
      }
      return rotatedArraySearch(a,key,s,mid-1);
    }

  }
  return -1;
}


int main(){
  vector<int> v={5,6,7,8,9,10,1,2,3};
  cout<<rotatedArraySearch(v,10,0,8);
}
