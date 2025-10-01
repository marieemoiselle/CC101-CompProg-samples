 for (int i = 1; i <= n; i++) {
        cout << term;
        if (i < n) {
            cout << ", ";
        }
        term += diff;
    }