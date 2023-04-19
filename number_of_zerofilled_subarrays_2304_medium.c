long long zeroFilledSubarray(int* nums, int numsSize){
    long long i,j=0,k=0;
    long long num_substring = 0;
    for(i=0;i<numsSize;i++)
    {
        if(nums[i] != 0)
            continue;
        j=0;
        while(i<numsSize && nums[i]==0)
        {
            j++;
            i++;
        }
        num_substring+=(j*(j+1)/2);
        

        
    }
    return num_substring;
}
