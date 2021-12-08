package PATYiJi;
import java.io.*;

public class pat1020 {

	public static void main(String[] args) throws IOException{
		// TODO Auto-generated method stub
		BufferedReader input = new BufferedReader(new InputStreamReader(System.in));
		String[] s = input.readLine().trim().split("\\s+");			//��ȡ����
		String[] s1 = input.readLine().trim().split("\\s+");
		String[] s2 = input.readLine().trim().split("\\s+");
		int kind = Integer.parseInt(s[0]);
		int need = Integer.parseInt(s[1]);
		double[] N1 = new double[kind];
		double[] N2 = new double[kind];
		int total = 0;
		double totalprice = 0;							//�ܹ����±�����
		for(int i=0;i<kind;i++) {
			N1[i] = Double.parseDouble(s1[i]);
			total += N1[i];
		}
		for(int i=0;i<kind;i++) {
			N2[i] = Double.parseDouble(s2[i])/N1[i];
			totalprice += N1[i] * N2[i];
		}
		//������Ҫ���±�		���ж��±��Ƿ񱥺�
		if(total<=need) System.out.printf("%.2f\n", totalprice);
		else {	//���͵Ļ�
			double price = 0;
			while(need>0) {
				int maxLoc = -1; 
				double max = 0;		//��λ��Ǯ��ߵ�
				for(int i=0;i<N1.length;i++) {
					if(N2[i]>max) {
						max=N2[i];	//�ҵ���Ǯ��ߵ�
						maxLoc = i;
					}
				}
				if(need>=N1[maxLoc]) {
					price += N1[maxLoc] * N2[maxLoc];
					N2[maxLoc] = -1;
					need -= N1[maxLoc];
				}else {
					price += need * N2[maxLoc];
					need = 0;
				}
			}
			System.out.printf("%.2f\n", price);
		}
	}

}
