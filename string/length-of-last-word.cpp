// https://www.interviewbit.com/problems/length-of-last-word/
int Solution::lengthOfLastWord(const string A) {
    int counter = 0;
    bool found_already_a_char = false;
    for(int i= A.size()-1; i >=0; i--)
    {
        if(A[i] == ' ' && found_already_a_char)
            return counter; 
        if(isalpha(A[i]))
        {
            found_already_a_char = true;
            counter++;
        }
    }
    if(found_already_a_char)
        return counter; 
    return 0; 
}