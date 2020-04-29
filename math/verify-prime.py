class Solution:
    # @param A : integer
    # @return an integer
    def isPrime(self, A):
        if A <= 1:
            return 0; 
        else:
            for i in range(2,A):
                if(A % i == 0):
                    return 0;
            return 1;