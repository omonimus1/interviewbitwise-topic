// https://www.interviewbit.com/problems/find-duplicate-in-array/
int Solution::repeatedNumber(const vector<int> &A) {
    map<int, int>mp;
    for(int i=0; i < A.size(); i++)
    {
        mp[A[i]]++;
        if(mp[A[i]] > 1)
            return A[i];
    }
    return -1;
}
