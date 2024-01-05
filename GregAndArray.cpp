#include<stdio.h>
#include<string.h>
long long int A[100001];
long long int B[100001]; // record how much value to fix
long long int C[100001]; // record how many operations
long long int M[100001][3];
int main(){
	int n, m, k;
	while (scanf("%d%d%d", &n, &m, &k) == 3){
		memset(A, 0, sizeof(A));
		memset(B, 0, sizeof(B));
		memset(C, 0, sizeof(C));
		memset(M, 0, sizeof(M));
		for (int i = 0; i < n; i++)
			scanf("%lld", &A[i]);
		for (int i = 0; i < m; i++){
			for (int j = 0; j < 3; j++)
				scanf("%lld", &M[i][j]);
			M[i][0]--, M[i][1]--;
		}
		for (int i = 0; i < k; i++){
			int a, b;
			scanf("%d%d", &a, &b);
			a--, b--;
			C[a]++, C[b + 1]--;
		}
		long long int tmp = 0;
		for (int i = 0; i < m; i++){
			tmp += C[i];
			B[M[i][0]] += tmp*M[i][2];
			B[M[i][1] + 1] -= tmp*M[i][2];
		}
		tmp = 0;
		for (int i = 0; i < n; i++){
			tmp += B[i];
			if (i == 0)
				printf("%lld", tmp + A[i]);
			else
				printf(" %lld", tmp + A[i]);
		}
		putchar('\n');
	}
	return 0;
}