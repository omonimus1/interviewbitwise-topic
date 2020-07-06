// https://www.interviewbit.com/problems/palindrome-string/
int Solution::isPalindrome(string A) {
    if(A.size() <=1)
        return 1; 
        
    string s = "";
    for(int i =0; i < A.size(); i++)
    {
        if(A[i] >= 'A' && A[i] <= 'Z' || A[i] >= 'a' && A[i] <= 'z')
        {
            s.push_back(tolower(A[i]));
        }  
        else if(isdigit(A[i]))
            s.push_back(A[i]);
    }
    //cout << s;
    int len = s.size();
    int end = len-1;
    for(int i =0; i < len/2; i++)
    {
        if(s[i] != s[end])
            return 0; 
        end--;
        
    }
    return 1; 
}