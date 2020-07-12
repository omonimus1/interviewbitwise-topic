// https://www.interviewbit.com/problems/length-of-last-word/
int Solution::lengthOfLastWord(const string A) {
    int counter = 0;
    bool found_already_a_space = false;
    bool found_already_a_char = false;
    int number_spaces = 0;
    for(int i= A.size()-1; i >=0; i--)
    {
        if(A[i]!= ' ')
        {
            counter++;
            found_already_a_char = true; 
        }
        
        else if(A[i] == ' ')
        {
            number_spaces++;
            if(found_already_a_space == false)
            {
                found_already_a_space = true; 
            }
            if(found_already_a_space && found_already_a_char)
                return counter; 
        
            
            continue;
        }
    }
    return A.size()-number_spaces; 
}
