


// Working program with FastReader 
import java.io.BufferedReader; 
import java.io.IOException; 
import java.io.InputStreamReader; 
// import java.util.Scanner; 
import java.util.StringTokenizer; 
import java.lang.Math;

public class Solution
    //Chef has a lightsaber which has an initial attack power P as user input.
    //Darth's initial health H as user input. 
    //He keeps hitting Darth with the lightsaber. 
    //Every time he hits, Darth's health decreases by the current attack power of the 
    //lightsaber (by P points), and afterwards, P decreases to floo of P.
    //If the attack power becomes 0 before Darth's health becomes 0 or less, Chef losses.
    //Otherwise, Darth losses.
    //Chef has to attack the Darth until his power becomes 0 or the Darth's health
    //reduces to 0 or less than 0 and if Chef's power becomes 0  before
    //Darth's health becomes 0 or less than 0, then print 0. Otherwise print 1.
{ 
	static class FastReader 
	{ 
		BufferedReader br; 
		StringTokenizer st; 

		public FastReader() 
		{ 
			br = new BufferedReader(new
					InputStreamReader(System.in)); 
		} 

		String next() 
		{ 
			while (st == null || !st.hasMoreElements()) 
			{ 
				try
				{ 
					st = new StringTokenizer(br.readLine()); 
				} 
				catch (IOException e) 
				{ 
					e.printStackTrace(); 
				} 
			} 
			return st.nextToken(); 
		} 

		int nextInt() 
		{ 
			return Integer.parseInt(next()); 
		} 

		long nextLong() 
		{ 
			return Long.parseLong(next()); 
		} 

		double nextDouble() 
		{ 
			return Double.parseDouble(next()); 
		} 

		String nextLine() 
		{ 
			String str = ""; 
			try
			{ 
				str = br.readLine(); 
			} 
			catch (IOException e) 
			{ 
				e.printStackTrace(); 
			} 
			return str; 
		} 
	} 

	public static void main(String[] args) 
	{ 
		FastReader s=new FastReader(); 
		int t = s.nextInt(); 
		while(t>0){
            double h,p;
            h=s.nextDouble(); 
            p=s.nextDouble();
            while(p>0){
                h-=p;   // decrease health everytime by p
                if(h<=0)  // check if health is greater than 0
                    break;
                p=Math.floor(p/2);  // decrease power everytime by floor of p
            }
            if(h<=0)
                System.out.println("1");
            else
            System.out.println("0");
            t--;
        }
	
	} 
} 
