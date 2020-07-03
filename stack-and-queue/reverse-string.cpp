// https://www.interviewbit.com/problems/reverse-string/
string Solution::reverseString(string A) {
    stack<char>s;
    for(int i = 0; i <A.size(); i++)
        s.push(A[i]);
        
    A = "";
    while(!s.empty())
    {
        A.push_back(s.top());
        s.pop();
    }
    return A; 
}
