int Solution::isPrime(int A) {
    if(A <= 1)
        return 0; 
    else
    {
        for(int i=2; i< A;i++)
        { 
            if(A % i == 0)
                return 0;
        }
        return 1; 
    }  
}
