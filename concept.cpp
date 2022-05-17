
/// Itterative methode to find element using binary search in sorted array 

#include<bits/stdc++.h>
using namespace std;

int bs(vector<int>v,int n, int element)
{
   int left =0 ; // v[0]
   int right = n;   //v[n] size of array
    while(left<=right)
    {
        int mid= left+(right-1)/2; // taking floor value 

        if(element==v[mid]){ return mid;}
        else if(element<v[mid]){ right=mid-1;} // repeet untill desire element get 
        else { left=mid+1;}  // repeat untill desire element get 
    }
    return -1;
}
int main(){
    int n; // size of array
    cin>>n;

    vector<int>v(n);
   for (int i=0;i<n;i++){
        cin>>v[i];}
    int element,result;
    cin>>element;
    result =  bs(v,n,element);
cout <<"Value at index "<< result  << ' ';
    
}