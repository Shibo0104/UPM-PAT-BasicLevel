import java.math.BigInteger;
import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
public class PAT1017 {

	public static void main(String[] args) throws IOException {
		// TODO Auto-generated method stub
		BufferedReader br = new BufferedReader( new InputStreamReader(System.in) );
		String[] s= br.readLine().split(" ");
		BigInteger A = new BigInteger(s[0]);
		BigInteger B = new BigInteger(s[1]);
		BigInteger Q = null;
		BigInteger R = null;
		
		Q = A.divide(B);
		R = A.remainder(B);
		System.out.print(Q+ " "+ R);
	}

}




//A �ǲ����� 1000 λ����������B �� 1 λ������������Ҫ������� Q ������ R��ʹ�� A=B��Q+R ����