/**
 * Note: The returned array must be malloced, assume caller calls free().
 */


int* returnVal(int min, int max, int* returnSize){
    int* returnValue;
    returnValue = (int* )malloc(2 * sizeof(int));
    returnValue[0] = min;
    returnValue[1] = max;
    *returnSize = 2 ;
    return returnValue;
}



int* recursive(int* nums, int start_index, int end_index, int target, int numsSize, int* returnSize){
    printf("s_idx:%d,end_idx:%d,tgt:%d,numsSize:%d\n",start_index,end_index,target,numsSize);
    if(numsSize == 0){
        return returnVal(-1,-1,returnSize);
    }
    if(numsSize == 1){
        if(nums[0] == target){
            return returnVal(start_index,start_index,returnSize);
        }else{
            return returnVal(-1,-1,returnSize);
        }
    }
    if(numsSize == 2){
        if(nums[0] == target  && nums[1] == target){
            return returnVal(start_index,start_index+1,returnSize);
        }else if(nums[0] == target && nums[1] != target){
            return returnVal(start_index,start_index,returnSize);
        }else if(nums[0] != target && nums[1] == target){
            return returnVal(start_index+1,start_index+1,returnSize);
        }else{
            return returnVal(-1,-1,returnSize);
        }
    }

    // int mid = (end_index - start_index +1) /2;
    int mid = numsSize/2;
    printf("%d - %d\n",mid,nums[mid]);
    if(nums[mid] == target){
    int min, max;
    min=mid;
    max=mid;
    for(int i=mid-1;i>=0 ;i--){
        if(nums[i] == target){
            min--;
        }else{
            break;
        }
    }
    for(int i=mid+1;i<numsSize;i++){
        if(nums[i]==target){
            max++;
        }else{
            break;
        }
    }
    return returnVal(min+start_index, max+ start_index, returnSize);

}else if(nums[mid-1] < target && nums[mid+1] > target){

    return returnVal(-1,-1,returnSize);
}
else if(nums[mid]>target){
    //printf("HEre");
    return recursive(nums,start_index, start_index+mid-1, target, mid,returnSize);
}else{

    if(numsSize%2 == 0)
        return recursive(&nums[mid+1],start_index+mid+1, end_index, target,mid-1, returnSize);
    else
        return recursive(&nums[mid+1],start_index+mid+1, end_index, target,mid, returnSize);

}

}

int* searchRange(int* nums, int numsSize, int target, int* returnSize){
   
   return recursive(nums,0,numsSize-1,target,numsSize, returnSize);

}
