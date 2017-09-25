int reverse(int x) {
    long int rev=0;
    int i,j;
    if(x<0) j=1; else j=0;
    long int temp=abs(x);
        while(temp>0){
         i=temp%10;
        rev=rev*10 + i;
        temp/=10;
    }
    if(rev>2147483647)
        return 0;

    if(j)
        return -rev;
    else 
        return rev;
    
}