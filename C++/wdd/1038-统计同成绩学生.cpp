#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
using namespace std;

// ʹ�� map��vector �����鶼��ʱ
// ����취��ʹ�� scanf ����ȡ�û����룬������ #include <stdio.h>
int main38()
{
    int n, score;
    scanf("%d", &n);

    // ����һ�� ����Ϊ101�����飬��Ϊ�������1-100����101���±�Ϊ100
    int score_counts[101] = {0};
    for (int i = 0; i < n; i++) {
        scanf("%d", &score);
        score_counts[score]++;
    }

    int search_n, search_score;
    scanf("%d", &search_n);
    for (int i = 0; i < search_n; i++) {
        scanf("%d", &search_score);
        printf("%d", score_counts[search_score]);
        if (i < search_n - 1) {
            printf(" ");
        }
    }
    printf("\n");

    return 0;
}