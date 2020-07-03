// https://www.interviewbit.com/problems/count-element-occurence/
int Solution::findCount(const vector<int> &A, int B) {
    int counter = 0;
    for(int i =0; i < A.size(); i++)
    {
        if(A[i] > B)
            return counter;
        else if(A[i] == B)
            counter++;
    }
    return counter; 
}