#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main19()
{
    string a, temp;
    cin >> a;
    // ��ֹ��������� ������ 4λ��
    a.insert(0, 4 - a.length(), '0');

    // �� do while �ȼ���һ�飬��ֹ����6174����0000��û�н��
    do {
        // �������ٽ���
        sort(a.begin(), a.end(), greater<int>());
        temp = a;
        sort(a.begin(), a.end());
        // stoi ���԰� string ת�� int
        int r = stoi(temp) - stoi(a);
        cout << temp << " - " << a << " = ";
        a = to_string(r);
        // ������������� 4 λ����ǰ�油0
        a.insert(0, 4 - a.length(), '0');
        cout << a << endl;
    } while (a != "6174" && a != "0000"); 

    return 0;
}