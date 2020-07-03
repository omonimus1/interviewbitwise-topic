// https://www.interviewbit.com/problems/smaller-or-equal-elements/?ref=similar_problems
int Solution::solve(vector<int> &A, int B) {
    int len = A.size();
    if(A[len-1] == B)
        return len;
    if(A[0] > B)
        return 0;
        
    int counter = 0;
    for(int i =0; i < len; i++)
    {
        if(A[i] > B)
            return counter;
        counter++;
    }
    return counter; 
}