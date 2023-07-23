int n = A.size();
    if (n == 0) {
        return 0; // Handle empty array if necessary
    }

    int current_sum = A[0];
    int max_sum = A[0];

    for (int i = 1; i < n; i++) {
        current_sum = max(A[i], current_sum + A[i]);
        max_sum = max(max_sum, current_sum);
    }

    return max_sum;
}
