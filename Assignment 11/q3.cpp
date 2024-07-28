#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int m;
    cin >> m;
    vector<pair<int, int>> arr(m);
    for (int i = 0; i < m; i++)
    {
        cin >> arr[i].first >> arr[i].second;
    }
    int count = 0;
    int j, k;
    for (int i = 0; i < m - 1; i++)
    {
        j = i + 1, k = i;
        while (j < m && (arr[k].second > arr[j].first))
        {
            count++;
            j++;
            i = j;
        }
    }

    cout << count;

    return 0;
}