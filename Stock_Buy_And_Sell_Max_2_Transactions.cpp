//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    public:
        //User function Template for C++
        
        int maxProfit(vector<int>&price){
            
            int n = price.size();
            
            vector<vector<int>>after(2, vector<int>(3,0));
            vector<vector<int>>cur(2, vector<int>(3,0));
            
            for(int ind = n-1; ind>=0; ind--){
                for(int buy = 0; buy<=1; buy++){
                    for(int cap = 1; cap<=2; cap++){
                        
                        if(buy == 1){
                            cur[buy][cap] = max(-price[ind] + after[0][cap],
                            0 + after[1][cap]);
                        }
                     
                        else
                            cur[buy][cap]= max(price[ind] + after[1][cap-1],
                            0 + after[0][cap]);
                    }
                }
                after = cur;
            }
            return after[1][2];
        }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        
        int n;
        cin>>n;
        vector<int> price(n);
        for(int i=0;i<n;i++) cin>>price[i];
        Solution obj;
        cout<<obj.maxProfit(price)<<endl;
    
cout << "~" << "\n";
}

}

// } Driver Code Ends