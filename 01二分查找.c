#include<stdio.h>

int main0101()
{
    int n, m, key;
    scanf_s("%d %d", &n, &m);
    int a[1000];
    for (int i = 0; i < n; i++)
    {
        scanf_s("%d", &a[i]);
    }
    for (int i = 0; i < m; i++)
    {
        int flag = 0;
        scanf_s("%d", &key);
        int left = 0;
        int right = n - 1;
        while (left <= right)
        {
            int mid = (left + right) / 2;
            if (a[mid] > key)
            {
                right = mid - 1;
            }
            else if (a[mid] < key)
            {
                left = mid + 1;
            }
            else if (a[mid] == key)
            {
                if (mid > 0 && a[mid - 1] == key)
                {
                    int l = 0;
                    int r = mid;
                    while (l < r)
                    {
                        int middle = (l + r) / 2;
                        if (a[middle] == key) r = middle;
                        if (a[middle] < key) l = middle + 1;
                    }
                    printf("%d ", r + 1);
                }
                else printf("%d ", mid + 1);
                flag = 1;
                break;
            }
        }
        if (flag == 0) printf("-1 ");
    }

    return 0;
}