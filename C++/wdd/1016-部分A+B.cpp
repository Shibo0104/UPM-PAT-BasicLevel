#include <iostream>
#include <string>
using namespace std;

int main16()
{
    string a, b;
    int pa, pb, ra = 0, rb = 0;
    cin >> a >> pa >> b >> pb;

    // �ҳ���һ������ a �е� ָ������ pa
    // �� ra �������������һ�� ra = pa������ÿ�� * 10 + pa
    for (int i = 0, count = 0; i < a.size(); i++) {
        if (a[i] - '0' == pa) {
            if (count >= 1) {
                ra = ra * 10 + pa;
            } else {
                ra = pa;
            }
            count++;
        }
    }

    // �ҳ���һ������ b �е� ָ������ pb
    for (int i = 0, count = 0; i < b.size(); i++) {
        if (b[i] - '0' == pb) {
            if (count >= 1) {
                rb = rb * 10 + pb;
            } else {
                rb = pb;
            }
            count++;
        }
    }

    cout << ra + rb << endl;

    return 0;
}