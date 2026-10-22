class Solution {
public:
    int mySqrt(int x) {
        //one sulution //Tc = o(sqrt(n))
        // long long n = x;
        // for(long long i=0;i<=x;i++){
        //     if(i*i ==x) return i;
        //     if(i*i >x) return i-1;
        // }
        // return 31315;
        //another solution...
    //    
    //Third solution...
    int lo=1,hi=x;
    while(lo<=hi){
        int mid = lo+(hi-lo)/2;
        if(mid>x/mid) hi = mid-1;
        else if(mid<x/mid) lo=mid+1;
        else return mid;
    }
    return hi;
    }

};