
import java.io.*;
class TestClass {
    public static void main(String args[] ) throws Exception {
        BufferedReader b=new BufferedReader(new InputStreamReader(System.in));
        String s= b.readLine( );// to input string
        int l=s.length( );// to store the length of a string
        if(l>=1 && l<=200)
        {
            int r=0;// to store the row movement
            int c=0;// to store the column movement
            for(int i=0;i<l;i++)
            {
                char ch=s.charAt(i);
                if(ch=='L')
                c-=1;//when instruction is L, it will move in the negative side in column
                                if(ch=='R')
                                c+=1;//when instruction is R, it will move in the positive side in column
                if(ch=='U')
                r+=1;//when instruction is U, it will move in the positive side in row
                if(ch=='D')
                r-=1;//when instruction is D, it will move in the negative side in row
            }
            System.out.println(c+" "+r);
        }
    }
}
