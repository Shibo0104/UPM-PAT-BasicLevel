package a;
import java.util.Scanner;
public class Q1016 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner in= new Scanner(System.in);
		String a = in.next();
		int x = in.nextInt();
		String b= in.next();
		int y = in.nextInt();
		int countA=0;
		int countB=0;
		int sumA=0;
		int sumB=0;
		for (int i=0; i<a.length(); i++) {
			if(a.charAt(i)==x+'0') {
				countA++;
				sumA+=(int)Math.pow(10, countA-1)*x;
			}
		}
	    for(int i=0; i<b.length();i++) {
		    if(b.charAt(i)==y+'0') {
		    	countB++;
		    	sumB+=(int)Math.pow(10, countB-1)*y;			
		    }
    	}
        System.out.println(sumA+sumB);
	}

}
