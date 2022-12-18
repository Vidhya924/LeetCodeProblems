class Solution {
    public int findDuplicate(int[] nums) {
        Set<Integer> set1=new HashSet<Integer>();
        int sol=0;
        for(int i=0;i<nums.length;i++){
            if(!(set1.add(nums[i]))){
              sol=nums[i];
            }
        }
        return sol;
    }
}