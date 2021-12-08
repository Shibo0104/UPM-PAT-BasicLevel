#include <algorithm>
#include <iostream>
#include <string>
using namespace std;

int main42()
{
    string a;
    getline(cin, a);

    // �Ȱ�string ת���� Сд
    transform(a.begin(), a.end(), a.begin(), ::tolower);

    char counts[27] = { 0 }; // һ��26����ĸ��0-26��27���±�Ϊ26
    for (int i = 0; i < a.length(); i++) {
        // �������ĸ����ͳ��
        if (a[i] >= 'a' && a[i] <= 'z') {
            // ת���� 0-26��������
            counts[a[i] - 'a']++;
        }
    }

    // �ҳ����������±꣬���� 'a'
    char max = 'a';
    int max_count = 0;
    for (int i = 0; i < 27; i++) {
        if (counts[i] > max_count) {
            max = i;
            max_count = counts[i];
        }
    }

    printf("%c %d\n", max + 'a', max_count);

    return 0;
}