#include <iostream>
#include <string>
#include <cstring>
#include <cmath>
#include <iomanip>
#include <vector>
using namespace std;
//drk

int main()
{
    int NC, k, i = 1, p;
    vector<int> n, resp;
    cin >> NC;
    for (int q = 0; q < NC; q++)
    {
        cin >> p >> k;
        int paux = p;
        n.clear();
        for (int j = 1; p > 0; p--, j++)
        {
            n.push_back(j);
        }
        p = 0;
        for (int j = k - 1; p < paux - 1; p++)
        {
            if (j + 1 > n.size())
            {
                do
                {
                    j -= n.size();
                } while (j >= n.size());
            }
            n.erase(n.begin() + j);
            j += k - 1;
        }
        resp.push_back(n[0]);
    }
    while (i <= NC)
    {
        cout << "Case " << i << ": " << resp[i - 1] << endl;
        i++;
    }
    return 0;
}
