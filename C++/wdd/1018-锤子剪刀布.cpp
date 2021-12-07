#include <iostream>
#include <map>
using namespace std;

int main18()
{
    int n;
    cin >> n;

    char gesture_A, gesture_B;
    int win_A = 0, tie_A = 0, lose_A = 0;

    // C �������ӡ���
    // J ������������
    // B ���� ��������
    // ʹ�ü�ֵ�Ե� map ���洢 ����ʯͷ�� �� ��Ӧ��ʤ������
    map<char, int> win_gesture_A;
    map<char, int> win_gesture_B;
    for (int i = 0; i < n; i++) {
        cin >> gesture_A >> gesture_B;
        // ֻ��Ҫ�ж� ƽ�� �� ĳһ������Ӯ�������������˫���� ��ƽӮ����
        if (gesture_A == gesture_B) {
            tie_A++;
        } else if ((gesture_A == 'C' && gesture_B == 'J') || (gesture_A == 'J' && gesture_B == 'B')
            || (gesture_A == 'B' && gesture_B == 'C')) {
            win_A++;
            win_gesture_A[gesture_A]++;
        } else {
            lose_A++;
            win_gesture_B[gesture_B]++;
        }
    }
    // ʤ��ƽ����
    cout << win_A << " " << tie_A << " " << lose_A << endl;
    cout << lose_A << " " << tie_A << " " << win_A << endl;

    // �� map A�����ҳ����ʤ�������� ʯͷ�����������ʤ�ʴ���һ������ô������ĸ����
    // �������ƽ�֣���ô˫����ʤ������Ĭ���� B-��
    int top_count_A = 0;
    char top_gesture_A = 'B';
    for (map<char, int>::iterator it = win_gesture_A.begin(); it != win_gesture_A.end(); it++) {
        if (it->second > top_count_A) {
            top_count_A = it->second;
            top_gesture_A = it->first;
        }
    }
    cout << top_gesture_A << " ";

    int top_count_B = 0;
    char top_gesture_B = 'B';
    for (map<char, int>::iterator it = win_gesture_B.begin(); it != win_gesture_B.end(); it++) {
        if (it->second > top_count_B) {
            top_count_B = it->second;
            top_gesture_B = it->first;
        }
    }
    cout << top_gesture_B;
    cout << endl;
    return 0;
}