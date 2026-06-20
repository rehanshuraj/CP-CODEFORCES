
#include <bits/stdc++.h>
using namespace std;

mt19937 rng(chrono::steady_clock::now().time_since_epoch().count());

const int mod = 200005;

struct Node {
    long long val;
    long long lazy;
    int prior;
    int l, r;
} noding[mod];

int root, Ncnt;

int new_node(long long v) {
    noding[++Ncnt] = {v, 0, (int)rng(), 0, 0};
    return Ncnt;
}


void split(int u, long long x, int &l, int &r) {
    if (!u) {
        l = r = 0;
        return;
    }
    if (u && noding[u].lazy) {
        noding[u].val += noding[u].lazy;
        if (noding[u].l) noding[noding[u].l].lazy += noding[u].lazy;
        if (noding[u].r) noding[noding[u].r].lazy += noding[u].lazy;
        noding[u].lazy = 0;
    }
    if (noding[u].val <= x) {
        l = u;
        split(noding[u].r, x, noding[u].r, r);
    } else {
        r = u;
        split(noding[u].l, x, l, noding[u].l);
    }
}

void merge(int &u, int l, int r) {
    if (!l || !r) {
        u = l ? l : r;
        return;
    }
    if (l && noding[l].lazy) {
        noding[l].val += noding[l].lazy;
        if (noding[l].l) noding[noding[l].l].lazy += noding[l].lazy;
        if (noding[l].r) noding[noding[l].r].lazy += noding[l].lazy;
        noding[l].lazy = 0;
    }
    if (r && noding[r].lazy) {
        noding[r].val += noding[r].lazy;
        if (noding[r].l) noding[noding[r].l].lazy += noding[r].lazy;
        if (noding[r].r) noding[noding[r].r].lazy += noding[r].lazy;
        noding[r].lazy = 0;
    }
    if (noding[l].prior > noding[r].prior) {
        u = l;
        merge(noding[u].r, noding[l].r, r);
    } else {
        u = r;
        merge(noding[u].l, l, noding[r].l);
    }
}

long long getMaxi(int u) {
    if (u && noding[u].lazy) {
        noding[u].val += noding[u].lazy;
        if (noding[u].l) noding[noding[u].l].lazy += noding[u].lazy;
        if (noding[u].r) noding[noding[u].r].lazy += noding[u].lazy;
        noding[u].lazy = 0;
    }
    if (noding[u].r) return getMaxi(noding[u].r);
    return noding[u].val;
}
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    if (cin >> t) {
        while (t--) {
            int n;
            cin >> n;
            root = 0;
            Ncnt = 0;
            for (int i = 0; i < n; ++i) {
                long long v;
                cin >> v;
                int l, r;
                split(root, v, l, r);
                if (r) noding[r].lazy += v;
                int mid = new_node(v);
                merge(root, l, mid);
                merge(root, root, r);
            }
            cout << getMaxi(root) << endl;
        }
    }
    return 0;
}
