/*************************************************************************
	> File Name: ResortedList.java
	> Author:qusijun 
	> Mail:wl_lian@yahoo.com
	> Created Time: 三  3/ 9 12:14:05 2016
 ************************************************************************/


class Node
{
    int val;
    Node next;
    public Node(int val)
    {
        this.val = val;
        this.next = null;
    }
    public Node()
    {
        this.next = null;    
    }
}
public class ResortedList
{
    public Node init()
    {
        Node head = new Node();
        Node a = new Node(1);
        Node b = new Node(2);
        Node c = new Node(3);
        Node d = new Node(4);
        head.next = a;
        a.next = b;
        b.next = c;
        c.next = d;
        return head;

    }

    public Node getMid(Node head)
    {
        Node fast,slow;
        fast = slow = head;
        while (fast != null && fast.next !=null && fast.next.next != null)
        {
            slow = slow.next;
            fast = fast.next.next;
        }
        Node result = slow.next;
        slow.next = null;
        return result;
    }
    public Node reverse(Node head)
    {
        Node pre,pos,next;
        pre = null;
        pos = head;
        next = head.next;
        while (pos != null)
        {
            System.out.println(pos.val);
            pos.next = pre;
            pre = pos;
            pos = next;
            if(next != null)
                next = next.next;
        }
        return pre;

    }
    public static void main(String[] args)
    {
        ResortedList rl = new ResortedList();
        Node head = rl.init();
        Node n = head;
        Node mid = rl.getMid(head);
        Node end = rl.reverse(mid);
        head = head.next;
        while (head != null && end != null)
        {
            Node temp = head.next;
            Node temp2 = end.next;
            head.next = end;
            end.next = temp;
            head = temp;
            end = temp2;
            
            
        }
        n = n.next;
        while(n!=null)
        {
            System.out.print(n.val + "->");
            n = n.next;
        }

    }
}
