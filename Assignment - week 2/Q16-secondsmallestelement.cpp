#include <bits/stdc++.h>
using namespace std;
class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2smallest(int arr[], int n) {
	    int i,j=-1;
	     int min=arr[0],max=arr[0];
         for(i=0;i<n;i++)
         {
             if(min>arr[i])
             {min=arr[i];}
             if(max<arr[i])
             {max=arr[i];}
         }
         
         for(i=0;i<n;i++){
             if(arr[i]>min && arr[i]<max){
                 max=arr[i];
             }
         }
        return max;
	    // code here
	}
};


int main() {
    
        int n;
        cin >> n;
        
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        Solution ob;
        auto ans = ob.print2smallest(arr, n);
        cout << ans << "\n";
    
    return 0;
}
