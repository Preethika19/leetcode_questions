double power(double x,int n){
    if(n==0)
        return 1;
    if(n==1)
        return x;   
    if(n==2){
        return x*x;
       
    }
    if(n%2==0){
        n=n/2;
        return power(x,n)*power(x,n);
    }
    else {
        n=n/2;
        return x*power(x,n)*power(x,n);
    }

}


double myPow(double x, int n){
    
    double t;

    if( n == INT_MIN ){
        if(x<=1){
        t = x * power(x, INT_MAX);
        n = INT_MAX;}
        else{
            t=0;
            n=INT_MAX;
        }

    }
    
    
    else{
        t=power(x,abs(n));
    }
    if(n<0){
        t=1/t;
    }
    
    return t;
}
