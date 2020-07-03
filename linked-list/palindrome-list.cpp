//https://www.interviewbit.com/problems/palindrome-list/

int Solution::lPalin(ListNode* A) {
    if(A == NULL)
        return 0;
    if(A->next == NULL)
        return 1;
 
    vector<int>s;
    while(A!= NULL)
    {
        s.push_back(A->val);
        A = A->next;
    }
    
    int end = s.size()-1;
    for(int i =0; i < s.size()/2; i++)
    {
        if(s[i] != s[end])
            return 0;
        end--;
    }
    return 1; 
}
