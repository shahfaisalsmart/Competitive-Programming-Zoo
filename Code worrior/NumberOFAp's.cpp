#include <iostream>
#include <stdio.h>
#include<bits/stdc++.h>
// #include "solution.h"
using namespace std;
int numofAP(int *arr, int N){
    int minElem = INT_MAX, maxElem = INT_MIN;
    for (int i = 0; i < N; i++){
        minElem = min(minElem, arr[i]);
        maxElem = max(maxElem, arr[i]);
    }
    int *dp = new int[N+1];
    int totalAPs = N + 1;
    for (int d = (minElem-maxElem); d <= (maxElem-minElem); d++){
    int sum[1001] = {0};
    for (int i = 0; i < N; i++){
        dp[i] = 1;
        if (arr[i] - d >= 1 && arr[i] - d <= 1000)
            dp[i] += sum[arr[i] - d];
        totalAPs += (dp[i] - 1) % 100001;
        sum[arr[i]] += dp[i];
        }
    }
    delete []dp;
return totalAPs % 100001;
}
int main(){

    int N;
    cin >> N;

    int *arr = new int[N+1];
    for(int i = 0; i < N; i++){
        cin >> arr[i];
    }
    cout << numofAP(arr, N) << endl;

    return 0;
}
