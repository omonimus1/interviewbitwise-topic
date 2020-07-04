// https://www.interviewbit.com/problems/palindrome-integer/
int Solution::isPalindrome(int A) {
    if(A<0)
        return 0;
    
    string s=to_string(A);
    string s1=s;
    reverse(s1.begin(),s1.end());
    
    if(s==s1)
        return 1;
    else
        return 0;
}