// https://www.interviewbit.com/problems/count-total-set-bits/
// Note: This soluton got just 82/200 -> Please suggest how can I improve
// my solution from a time complexity point of view.
int get_number_of_bit_set(int n)
{
    int count = 0;
    while(n >0)
    {
        if(n%2 == 1)
            count+=1;
        n /= 2;
    }
    return count;
}

int Solution::solve(int A) {
    // 10^9 + 7
    int count = 0;
    for(int i =1; i <= A; i++)
        count += get_number_of_bit_set(i);
    return count%1000000007;
}

