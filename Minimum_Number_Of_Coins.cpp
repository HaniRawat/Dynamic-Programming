//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<int> minPartition(int N)
    {
        vector<int>coins = {2000,500,200,100,50,20,10,5,2,1};
        int n = coins.size();
        
        vector<int>ans;
        
        for(int i=0; i<n; i++){
            while(coins[i] <= N){
                ans.push_back(coins[i]);
                N -= coins[i];
            }
            
            if(N == 0)
                break;
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        vector<int> numbers = ob.minPartition(N);
        for(auto u: numbers)
            cout<<u<<" ";
        cout<<"\n";
    
cout << "~" << "\n";
}
    return 0;
}
// } Driver Code Endssssssss