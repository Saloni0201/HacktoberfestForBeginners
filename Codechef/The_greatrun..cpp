#include <iostream>
using namespace std;

int main() { 
    int t;
	cin>>t;  
	while(t--){  
	    int n,k;
	    cin>>n>>k; 
	    int arr[n];
	  for(int i=0;i<n;i++){
	    cin>>arr[i];
	  }  
	  int max=0; 
	  int i=0;
	  int j=0;
	  while(i<n){
	           j=i; 
	           int sum=0;
	           int count=0;
	         while(j<n){
	         sum=sum+arr[j];  
	         j++; 
	         count++; 
	         if(count==(k)){
	             break;
	         }
	        }  
	        if(sum>max){
	          max=sum;  
	        }
	        
	       i++;
	  }
	  
	  cout<<max<<endl;
	
	}
	return 0;
}
