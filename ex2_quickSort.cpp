#include<iostream>
#include<vector>
using namespace std;
///////////////////////Divide n conqure ---- QuickSort///////////////////////////////////
// choose a pivot element
//partition left elements less than pivot right greater than pivot
//sort both sites recursively

int partition(vector<int>& a,int s,int e){
  int i=s-1;
  int pivot = a[e];

  for(int j=s;j<e;j++){
    if(a[j]<pivot){
      i++;
      swap(a[i],a[j]);
    }
  }
  swap(a[i+1],a[e]);
  return i+1;
}

void quicksort(vector<int>& a,int s,int e){
  //base case
  if(s>=e){
    return;
  }
  //rec case
  int p= partition(a,s,e);
  quicksort(a,s,p-1);
  quicksort(a,p+1,e);

}

int main()
{
  vector<int> arr={9,5,8,4,7,2,3,1,10,6};
  int start=0;
  int end=arr.size()-1;
  quicksort(arr,start,end);

  for(int x : arr){
    cout<<x<<" ";
  }
  return 0;
}
