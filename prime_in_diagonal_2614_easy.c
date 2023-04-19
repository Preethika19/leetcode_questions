bool isprime(int n){
    int i,k;
    if(n==1)
        return false;
    if(n==2)
        return true;
    if(n==3)
        return true;
    if(n%2==0)
        return false;
    for(i=3;i<=sqrt(n);i+=2){
        if(n%i==0)
          return false;
    }
    return true;
}
int diagonalPrime(int** nums, int numsSize, int* numsColSize){
    int i,s=0;
    
    for(i=0;i<numsSize;i++){
        if(isprime(nums[i][i])){
           if(nums[i][i]>s){
               s=nums[i][i];
               // printf("%d\n",s);
           } 
        }
        if(isprime(nums[i][*numsColSize-1-i])){
            if(nums[i][*numsColSize-1-i]>s){
                s=nums[i][*numsColSize-1-i];
                // printf("%d\n",s);
            }
        }
    }
    // printf("%d\n",s);
    return s;
}
