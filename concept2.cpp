// recursive method to search element in sorted array

#include<bits/stdc++.h>
using namespace std;

int binarysearch(vector<int>v,int left,int right, int element){


    if(left>right){ return -1;}   // base condition 
     
    int mid = (left+right)/2;
    
    if(element==v.at(mid)){return mid;}

    if(element<v.at(mid)){ return (binarysearch(v,mid-1,left,element));}

     return (binarysearch(v,mid+1,right,element)); 
}

int main(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    int element;
    cin>>element;

   // int result = binarysearch(v,0,n,element);
  //  cout<<result<<' ';
  cout<<binarysearch(v,0,n,element)<<' ';

}