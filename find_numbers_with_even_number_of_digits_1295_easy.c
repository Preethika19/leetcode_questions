int findNumbers(int* nums, int numsSize){
int count=0,i;
for(i=0;i<numsSize;i++){
    int d=0;
    while(nums[i]>0){
        d++;
        nums[i]/=10;
    }
    if(d%2 == 0)
    count+=1;
}
return count;
}
