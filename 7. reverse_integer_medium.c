int reverse(int x){
  long long rev,t;
  int d;
  rev=0; 
  if(x== INT_MAX || x== INT_MIN){
    return 0;
  }
  else{
  t=abs(x);   
  while(t>0)
  {
    d=t%10;
    t/=10;
    rev=(rev*10)+d;
  }
  if(x<0)
    rev*=(-1);
   
  if(rev>INT_MIN && rev<INT_MAX)
    return rev;
  else
    return 0;  
  }

  
}
