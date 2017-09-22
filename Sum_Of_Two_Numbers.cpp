class Solution {
public:
    int getSum(int a, int b) {
        int i;
        if(a<0 && b<0){
        for(i=0;i>b;i--)
            a--;
        }
        else if(a>0 && b<0){
            for(i=0;i>b;i--)
            a--;
        }
        else if(a<0 && b>0){
            for(i=1;i<=b;i++)
            a++;
        }
        else{
        for(i=1;i<=b;i++)
            a++;
        }
    
        return a;
    }
};