class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int count=0 , majorityelement=0;
        for(int i= 0; i<nums.size();i++){
            if(count==0)
                majorityelement=nums[i];
            
            if(majorityelement == nums[i] )
                count++;
            else 
                count -= 1;
        }
        return majorityelement;
    }
};
