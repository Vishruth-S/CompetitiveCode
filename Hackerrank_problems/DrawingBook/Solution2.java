package yes;


import java.io.IOException;
import java.util.*;

public class Solution2 {
    //If a student turns pages from start,to reach the specified page will         
	//always take p/2 moves as each page turn covers two pages.As each turn        
	//covers two pages,reaching p page will require p/2 moves.
    //from the end however,there are two cases,as if total number of pages         
	//are odd,all pages are in pair except first one,thus number of moves will     
	//(n-p)/2 whereas if number of pages are even then last page and first page      
	//are alone,therefore an extra turn is required and number of moves will       
	//be (n-p+1)/2.
    //to ensure that we turn pages minimum times we take the minimum no of moves from start and end.

    
    static int pageCount(int n, int p) {
        int no_of_moves_start=p/2;
        int no_of_moves_end;
        if(n%2==0)   
        {
        	//n is even
            no_of_moves_end=(n-p+1)/2;
        }
        else
        {
        	//n is odd
            no_of_moves_end=(n-p)/2;
        }
       return Math.min(no_of_moves_start,no_of_moves_end);
    }

    
    public static void main(String[] args) throws IOException {
        Scanner s=new Scanner(System.in);   //used to get user Input
        int totalpages=s.nextInt();   //nextInt() Reads a int value from the user
        int destinationpage=s.nextInt();
        int result=pageCount(totalpages,destinationpage);
        System.out.println(result);
    }
}
