// here we are merging k sorted lists
class Solution {
    public ListNode mergeKLists(ListNode[] lists) {
        PriorityQueue<Integer> minHeap = new PriorityQueue<>();
        //we are using min heap 
        //we will fill heap with k sorted list 
        //what min heap will do (it will arrange number form low to high automatically)
        for(ListNode head:lists){
            while(head!=null){
                minHeap.add(head.val);
                head=head.next;
            }
        }
        //we make one single list form heap
        ListNode dummy = new ListNode(-1);
        ListNode head= dummy;
        while(!minHeap.isEmpty()){
            head.next = new ListNode(minHeap.remove());
            head=head.next;
        }
        
        return dummy.next;
    }
}