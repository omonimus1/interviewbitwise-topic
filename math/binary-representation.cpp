//  https://www.interviewbit.com/problems/binary-representation/
string Solution::findDigitsInBinary(int A) {
    
    if(A == 0)
        return to_string(0);
    string s ="";
    while (A >0)
    {
        s.append(to_string(A%2));
        A /= 2;
    }
    
    reverse(s.begin(), s.end());
    return s; 
}
