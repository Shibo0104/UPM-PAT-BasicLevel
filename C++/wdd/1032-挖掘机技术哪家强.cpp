#include <iostream>
#include <map>
using namespace std;

int main32()
{
    int n;
    cin >> n;

    int no, score;
    // ʹ�ü�ֵ�� ���洢 ֵ�Ͷ�Ӧ�Ĵ���
    map<int, int> counts;
    for (int i = 0; i < n; i++) {
        cin >> no >> score;
        counts[no] += score;
    }

    int top_no = 0;
    int top_score = 0;
    for (map<int, int>::iterator it = counts.begin(); it != counts.end(); it++) {
        // ע�⣺������Ҫ ���ڵ��ڣ���ֹ�������� 0
        if (it->second >= top_score) {
            top_no = it->first;
            top_score = it->second;
        }
    }
    cout << top_no << " " << top_score << endl;

    return 0;
}