#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
vector <int> max_of_subarrays(int *arr, int n, int k){
    // your code here
    
    vector<int> ans;
    deque<int> q;
    
    
    for(int i=0;i<k-1;i++)
    {
        while(q.size() > 0 && q.back()<arr[i])
        {
            q.pop_back();
        }
        
        q.push_back(arr[i]);
        
        
    }
    
    
    for(int i=0;i<n-k+1;i++)
    {
        while(q.size() > 0 && q.back()<arr[i+k-1])
        {
            q.pop_back();
        }
        
        q.push_back(arr[i+k-1]);
        
        ans.push_back(q.front());
        if(arr[i]==q.front())
        {
            q.pop_front();
        }
        
        
    }
    
    
    return ans;
    
}


// { Driver Code Starts.

int main() {
	
	int t;
	cin >> t;
	
	while(t--){
	    
	    int n, k;
	    cin >> n >> k;
	    
	    int arr[n];
	    for(int i = 0;i<n;i++) 
	        cin >> arr[i];
	    
	    vector <int> res = max_of_subarrays(arr, n, k);
	    for (int i = 0; i < res.size (); i++) 
	        cout << res[i] << " ";
	    cout << endl;
	    
	}
	
	return 0;
}  // } Driver Code Ends