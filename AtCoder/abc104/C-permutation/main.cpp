#include <bits/stdc++.h>
#define all(v) (v).begin(),(v).end()
using namespace std;


void solve(long long D, long long G, std::vector<long long> p, std::vector<long long> c){
    vector<int> v(D);
    iota(all(v), 0);

    int ans = 1e9;
    while (true) {
        int solve = 0, score = 0;
        for (auto i: v) {
            int plus_score = 100*(i+1)*p[i] + c[i]; 
            if (score + plus_score <= G) {
                solve += p[i];
                score += plus_score;
            } else {
                int less = G - score;
                long long part_score = 100 * (i + 1);
                if (less > 0) solve += min(p[i], (less+(part_score-1))/part_score);
                break;
            }
        }
        ans = min(ans, solve);
        if (!next_permutation(all(v))) break;
    }
    cout << ans << endl;
}

// Generated by 1.1.6 https://github.com/kyuridenamida/atcoder-tools  (tips: You use the default template now. You can remove this line by using your custom template)
int main(){
    long long D;
    scanf("%lld",&D);
    long long G;
    scanf("%lld",&G);
    std::vector<long long> p(D);
    std::vector<long long> c(D);
    for(int i = 0 ; i < D ; i++){
        scanf("%lld",&p[i]);
        scanf("%lld",&c[i]);
    }
    solve(D, G, std::move(p), std::move(c));
    return 0;
}
