class Solution {
public:
    int mySqrt(int x) {
        
        if(x<2)
        return x;//division ke time 0&1 ayega toh error in 0&1 input as mid of 0 and 1 is 0 and divison of mid/0 is undefined 
        int start=0, end=x, mid, ans;

        while(start<=end)
    {
        mid=start+(end-start)/2;
        if(mid==x/mid)//mid*mid==x this will give overflow as int cant store big value
        {
            return mid; 
        }
        else if(mid<x/mid)//mid*mid<x
        {
            ans=mid;
            start=mid+1;
        }
        else
        {
            end=mid-1;
        }
        
    }
    return ans;
    }

};