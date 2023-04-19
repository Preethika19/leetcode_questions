bool isPalindrome(int x){
    int d,temp;
    long rev=0;
    temp = x;
    while(temp>0){
        d = temp%10;
        rev = (rev*10)+d;
        temp/=10;
    }
    if(rev==x)
    return true;
    else
    return false;
}
