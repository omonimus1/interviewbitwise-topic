// https://www.interviewbit.com/problems/number-of-1-bits/
int Solution::numSetBits(unsigned int A) {
    int count =0;
    while(A >0)
    {
        if(A%2 == 1)
            count +=1;
        A /=2;
    }
    return count; 
}