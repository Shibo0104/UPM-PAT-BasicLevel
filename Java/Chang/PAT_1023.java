import java.util.Scanner;

public class PAT_1023 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner input = new Scanner(System.in);
		int [] num = new int[10];
				
		
		for(int i=0;i<10;i++)  
			num[i] = input.nextInt();//��������
			
		boolean b = true;
		for(int m=1;m<10;m++) {
			if(num[m]>0 && b==true) {
				System.out.print(m);//�����һ�����ִ���0
				b=false;
				if(num[0]>0) {
					for(int j=0;j<num[0];j++) {
						System.out.print("0");//�����0���0
				}
			}
			for(int k=1;k<num[m];k++) {
				System.out.print(m);//���������С��û�����������
			}
			}else if(num[m]>0) {
				for(int l=0;l<num[m];l++)
					System.out.print(m);
			}
		}		
	}
}
