class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n=nums.size();

        int count1=0;
        int count2=0;

        int majEle1;
        int majEle2;

        for(int i=0;i<n;i++){
            if(nums[i]==majEle1){
                count1++;
            }else if(nums[i]==majEle2){
                count2++;
            }else if(count1==0){
                majEle1=nums[i];
                count1=1;
            }else if(count2==0){
                majEle2=nums[i];
                count2=1;
            }else{
                count1--;
                count2--;
            }
        }
        vector<int> res;
        int freq1=0;
        int freq2=0;
        for(int i=0;i<n;i++){
            if(nums[i]==majEle1){
                freq1++;
            }else if(nums[i]==majEle2){
                freq2++;
            }
        }
        if(freq1 > floor(n/3)){
            res.push_back(majEle1);
        }

        if(freq2>floor(n/3)){
            res.push_back(majEle2);
        }
        return res;
    }
};