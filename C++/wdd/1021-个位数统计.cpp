#include <iostream>
#include <map>
using namespace std;

int main21()
{
    string n;
    cin >> n;
    // ʹ�ü�ֵ�� ���洢 ֵ�Ͷ�Ӧ�Ĵ���
    map<int, int> counts;
    for (int i = 0; i < n.length(); i++) {
        counts[(n[i] - '0')]++;
    }
    for (map<int, int>::iterator it = counts.begin(); it != counts.end(); it++) {
        cout << it->first << ":" << it->second << endl;
    }
    return 0;
}