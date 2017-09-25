bool isPalindrome(int x) {
    if(x<0) return false;

    else{
    int i;
    long int temp=x,rev=0;
        while(temp>0){
         i=temp%10;
        rev=rev*10 + i;
        temp/=10;
      } 
    
    if(rev>2147483647)
        return false;
        
    if(x==rev)
        return true;
        else 
            return false;

    }
}
