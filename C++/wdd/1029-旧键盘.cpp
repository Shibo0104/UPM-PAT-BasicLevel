#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main29()
{
    string a, b;
    cin >> a >> b;

    // �Ȱ�����string ��ת���� ��д��Ȼ��Ƚ�
    transform(a.begin(), a.end(), a.begin(), ::toupper);
    transform(b.begin(), b.end(), b.begin(), ::toupper);

    string brokens;
    for (int i = 0; i < a.length(); i++) {
        // ���ж��Ƿ��� string b�У����жϴ����Ƿ��Ѿ�����
        if (b.find(a[i]) == -1) {
            if (brokens.find(a[i]) == -1) {
                brokens.push_back(a[i]);
            }
        }
    }

    for (int i = 0; i < brokens.length(); i++) {
        cout << brokens[i];
    }
    cout << endl;

    return 0;
}