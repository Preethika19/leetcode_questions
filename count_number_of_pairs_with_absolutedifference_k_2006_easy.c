int countKDifference(int* nums, int numsSize, int k){
    int i,j,count=0;
    for(i=0;i<numsSize-1;i++){
        for(j=i+1;j<numsSize;j++){
            if(abs(nums[j]-nums[i])==k)
                count+=1;
        }
        
    }
    return count;
}
