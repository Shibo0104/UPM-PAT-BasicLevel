#include <iostream>
using namespace std;

int main27()
{
    int n;
    char symble;
    cin >> n >> symble;

    // ��� ��Ҫ��ӡ���Ǻ����� �� ����
    // ѭ����� 1-n ֮��� ��������ÿ�� �ж� (�����ܺ�) * 2 - 1 �Ƿ� С�ڵ��� n��
    // ����ǣ��͸��� �Ǻŵ����� ����������ͽ�����n-all_symbols ���� û�г�����ɳ©���
    int temp = 0, all_symbols = 0, rows = 0;
    for (int i = 1; i <= n; i += 2) {
        temp += i;
        if (temp * 2 - 1 <= n) {
            all_symbols = temp * 2 - 1;
            rows = i;
        } else {
            break;
        }
    }
    /* 19
    *�ո� �Ǻ� �к�     �ո����
        0 5   0       5 - 5 /2
        1 3   1       5 - 3 /2
        2 1   2       5 - 1 /2
        ---------------------
        1 3   3       5 - 3 /2
        0 5   4       5 - 5 /2
    */
    int row_symbles = rows; // ÿ�е��Ǻ�������ʼ�� = ����
    int output_symbles = 0; // �ܹ�������Ǻ���
    for (int i = 0; i < rows; i++) {
        output_symbles += row_symbles;

        for (int j = 0; j < (rows - row_symbles) / 2; j++) {
            cout << ' ';
        }

        for (int j = 1; j <= row_symbles; j++) {
            cout << symble;
        }

        if (output_symbles <= all_symbols / 2) {
            row_symbles -= 2;
        } else {
            row_symbles += 2;
        }

        cout << endl;
    }

    // Ҫ������� ��ȥ �Ѵ�ӡ���Ǻ���
    cout << n - output_symbles << endl;

    return 0;
}