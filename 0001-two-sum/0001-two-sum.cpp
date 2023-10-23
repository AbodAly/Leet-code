class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::map<int, int> m ;
        std::vector<int> result ; 
        for(int element = 0 ; element < nums.size() ; element++ )
        {
            int complement = target -nums[element];
            if(m.find(complement) != m.end())
            {
                result.push_back(element);
                result.push_back(m[complement]);
                break;

            }
            m[nums[element]]= element;

        }
        return result; 
               
           
            
    
        
    }
};