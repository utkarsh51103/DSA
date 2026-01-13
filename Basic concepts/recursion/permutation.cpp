#include <iostream>
using namespace std;

void solve(vector<int> v, int index, vector<vector<int> > &ans)
{
    if (index >= v.size())
    {
        ans.push_back(v);
        return;
    }
    for (int i = index; i < v.size(); i++)
    {
        swap(v[i], v[index]);
        solve(v, index + 1, ans);
        swap(v[i], v[index]);
    }
}

vector<vector<int> > permutation(vector<int> v)
{
    vector<vector<int> > ans;
    int index = 0;
    solve(v, index, ans);
    return ans;
}

int main()
{
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);

    vector<vector<int> > ans = permutation(v);
    int r = ans.size();
    int c = ans[0].size();
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; i++)
        {
            cout << ans[i][j] << " ";
        }
    }
}