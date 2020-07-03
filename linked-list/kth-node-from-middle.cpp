// https://www.interviewbit.com/problems/kth-node-from-middle/?ref=similar_problems
/*
    Knowing that the middle element of a Linked list is (N/2)+1, where 
    N is the total number of nodes in the Linked list, return the value
    positionated at B positions before the middle element.
    If it does not exists, return -1; 
*/
 int count_number_of_nodes(ListNode* head)
 {
     int counter = 0;
     while(head != NULL)
     {
         counter++;
         head = head->next;
     }
     return counter; 
 }

int Solution::solve(ListNode* A, int B) {
    if(A == NULL || A->next == NULL)
        return -1;
    //Position of middle node is: (N/2)+1, where N is the total number of nodes in the list.
    ListNode *current = A;
    int number_of_nodes = count_number_of_nodes(current);
    int middle = (number_of_nodes/2)+1;
    
    if(middle-B <= 0)
        return -1;
    current = A;
    int position = middle-B;
    
    while(position >1)
    {
        position--;
        current = current->next;
    }
    return current->val; 
    
}