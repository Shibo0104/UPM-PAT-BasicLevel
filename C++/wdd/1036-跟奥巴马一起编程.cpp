#include <iostream>
using namespace std;

int main36()
{
    int n;
    char symbol;
    cin >> n >> symbol;

    // Ŀ����Ϊ�� �������룬��������� 9��9/2 + 9%2 = 4+1= 5
    int rows = n / 2 + n % 2;

    // �������һ�к����һ�� ���� symbol��
    // ���˵�һ�к����һ�У��м��ж��� �ո����
    for (int i = 0; i < rows; i++) {
        cout << symbol;
        for (int j = 1; j < n - 1; j++) {
            if (i == 0 || i == rows - 1) {
                cout << symbol;
            } else {
                cout << ' ';
            }
        }
        cout << symbol << endl;
    }

    return 0;
}