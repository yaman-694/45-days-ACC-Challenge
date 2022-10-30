// Trapping water 

class Solution {
public:
    int maxArea(vector<int>& height) {
        int max_ = INT_MIN;
        int  l = 0;
        int h = height.size()-1;
        int curr=0;
        
        while(l<h)
        {
            int a = min(height[l],height[h]);
            curr = a*(h-l);
            
            max_=max(curr,max_);
            
            if(height[l]<height[h])
                l++;
            else
                h--;
        }
        return max_;
    }
};