public class Main {

    public static void main(String[] args) {
	    System.out.println(kangaroo(45,7,56,2));
    }

    public static String kangaroo(int x1, int v1, int x2, int v2) {
        int vdiff = v1 - v2;
        if (vdiff <= 0) {
            return "NO";
        }
        int xdiff = x1 - x2;
        if(xdiff % vdiff == 0)
            return "YES";
        return "NO";
    }
}