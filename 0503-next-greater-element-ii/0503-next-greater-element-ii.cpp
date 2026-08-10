class Solution {
public:
    vector<int> nextGreaterElements(vector<int>&arr) {
        int n=arr.size();
        vector<int>ans(n,-1);
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<i+n;j++){
                int curr=j%n;
            if(arr[curr]>arr[i]){
                ans[i]=arr[curr];
                break;
            }
            }
        }
        return ans;
    }
};