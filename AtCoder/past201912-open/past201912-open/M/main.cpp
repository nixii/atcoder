#include <bits/stdc++.h>
using namespace std;


void solve(long long N, long long M, std::vector<long long> A, std::vector<long long> B, std::vector<long long> C, std::vector<long long> D){

}

// Generated by 1.1.6 https://github.com/kyuridenamida/atcoder-tools  (tips: You use the default template now. You can remove this line by using your custom template)
int main(){
    long long N;
    scanf("%lld",&N);
    long long M;
    scanf("%lld",&M);
    std::vector<long long> A(N);
    std::vector<long long> B(N);
    for(int i = 0 ; i < N ; i++){
        scanf("%lld",&A[i]);
        scanf("%lld",&B[i]);
    }
    std::vector<long long> C(M);
    std::vector<long long> D(M);
    for(int i = 0 ; i < M ; i++){
        scanf("%lld",&C[i]);
        scanf("%lld",&D[i]);
    }
    solve(N, M, std::move(A), std::move(B), std::move(C), std::move(D));
    return 0;
}
