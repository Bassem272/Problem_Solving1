#include <iostream>
#include <vector>

using namespace std;

long long solve(int i, int j, vector<vector<int>> &A, int N, int M)
{
    // Base case: if out of bounds, return 0
    if (i >= N || j >= M)
    {
        return 0;
    }
    if(i == N - 1 && j == M - 1){
        return A[i][j];
    }
    if(i == N - 1){
        return A[i][j] + solve(i, j + 1, A, N, M);
    }
    if(j == M - 1){
        return A[i][j] + solve(i + 1, j, A, N, M);
    }
    if(i == 0 && j == 0){
        return A[i][j] + max(solve(i, j + 1, A, N, M), solve(i + 1, j, A, N, M));
    }
    if(i == 0 && j == M - 1){
        return A[i][j] + solve(i + 1, j, A, N, M);
    }
    if(i == N - 1 && j == 0){
        return A[i][j] +  solve(i - 1, j, A, N, M);
    }
    // Calculate the sum by moving right
    long long sum1 = A[i][j] + solve(i, j + 1, A, N, M);
    // Calculate the sum by moving down
    long long sum2 = A[i][j] + solve(i + 1, j, A, N, M);
    // Return the maximum sum
    return max(sum1, sum2);
}

int main()
{
    int N, M;
    cin >> N >> M;
    vector<vector<int>> A(N, vector<int>(M));
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> A[i][j];
        }
    }
    long long result = solve(0, 0, A, N, M);
    cout << result << endl;
    return 0;
}
