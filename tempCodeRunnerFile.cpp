for (auto it : mp) {
        sort(it.second.begin(), it.second.end());
    }

    for (auto it : mp) {
        cout << it.first << " : ";
        for (int i = 0; i < it.second.size(); i++) {
            cout << it.second[i];
            if (i != it.second.size() - 1) {
                cout << ", ";
            }
        }
        cout << endl;
    }

    return 0;