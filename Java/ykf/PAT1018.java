import java.util.Arrays;
import java.util.Scanner;
public class PAT1018 {

	public static void main(String[] args) {
		// TODO Auto-generated method stub
		Scanner sc = new Scanner(System.in);
		int total = sc.nextInt();
		int ac = 0;
		int aj = 0;
		int ab = 0;
		int bc = 0;
		int bj = 0;
		int bb = 0;
		int draw = 0;
		for(int i=0; i<total;i++) {
			char A = sc.next().charAt(0);
			char B = sc.next().charAt(0);
			sc.nextLine();
			if(A=='C'&& B=='J') {
				ac++;
				
			}
			
			else if(A=='C'&& B=='B') {
				bb++;
				
			}
			
			else if(A=='C'&&B=='C') {
				draw++;
			}
			
			else if(A=='J'&&B=='C') {
				bc++;
			}
			
			else if(A=='J'&&B=='J') {
				draw++;
			}
			else if(A=='J'&&B=='B') {
				aj++;
			}
			else if(A=='B'&&B=='C') {
				ab++;
			}
			else if(A=='B'&&B=='J') {
				bj++;
			}
			else if(A=='B'&&B=='B') {
				draw++;
			}
		}
		int Alose = total-ac-aj-ab-draw;
		int Blose = total-bc-bj-bb-draw;
		int Awin = total-draw-Alose;
		int Bwin = total-draw-Blose;
		System.out.println(Awin+" "+ draw+" "+ Alose);
		System.out.println(Bwin+" "+ draw+" "+ Blose);
		System.out.println(getMaxA(ac,aj,ab,draw,total)+" "+getMaxA(bc,bj,bb,draw,total));
	}
	public static String getMaxA(int c, int j, int b,int draw,int total) {
		int []list = {b,c,j};
		String use = "";
		if(list[0]>=list[1]&& list[0]>=list[2]){
			use = "B";
		}else if(list[1]>=list[2]){
			use = "C";
		}else{
			use = "J";
		}
		return use;
	}
	
}







//����� 1 �и��������� N����10^5������˫������Ĵ�������� N �У�ÿ�и���һ�ν������Ϣ��
//���ס���˫��ͬʱ�����ĵ����ơ�C �������ӡ���J ������������B ������������ 1 ����ĸ����
//�׷����� 2 �������ҷ����м��� 1 ���ո�