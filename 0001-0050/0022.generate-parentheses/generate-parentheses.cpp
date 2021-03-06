class Solution {
public:
vector<string> generateParentheses(int n) {
    vector<string> res;
    int lc = 0; int rc = 0;

    dfs(res, "", n, lc, rc);
    return res;
}

void dfs(vector<string>& res, string path, int n, int lc, int rc) {
    if (rc > lc || lc > n) return;
    if (lc == rc && lc == n) {
        res.push_back(path);
        return;
    }
    dfs(res, path + '(', n, lc + 1, rc);
    dfs(res, path + ')', n, lc, rc + 1);
}
};
