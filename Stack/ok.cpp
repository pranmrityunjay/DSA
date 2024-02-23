class Solution {
public:
vector<int> nextSmallerIndex(vector<int>&arr){
    vector<int>ans(arr.size());
    stack<int>st;
    st.push(-1);

    for(int i=arr.size()-1;i>=0;i--){
int curr=arr[i];
   
    while(st.top()!=-1 && arr[st.top()]>=curr){
        st.pop();
    }

    ans[i]=st.top();
    st.push(i);


    }
    return ans;

 }
vector<int> prevSmallerIndex(vector<int> &arr)
{

    vector<int> ans(arr.size());
    stack<int> st;
    st.push(-1);

    for (int i = 0; i < arr.size(); i++)
    {
        int curr = arr[i];

        while (st.top() != -1 && arr[st.top()] >= curr)
        {
            st.pop();
        }

        ans[i] = st.top();
        st.push(i);
    }

    return ans;
}

    int largestRectangleArea(vector<int>& heights) {
         
     vector<int>prev=prevSmallerIndex(heights);
     vector<int>next=nextSmallerIndex(heights);

     int areaMax=INT_MIN;
     for(int i=0;i<heights.size();i++){

         if(next[i]==-1){
             next[i]=heights.size();
         }

         int width=next[i]-prev[i]-1;
         int area=width*heights[i];

         areaMax=max(areaMax,area);
     }

     return areaMax;



    }
};