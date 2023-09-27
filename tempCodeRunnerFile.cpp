void Try(int i, int left, int right, int sum){
	for(int j = left; j <= right; j++){
		X[i] = a[j];
		sum += a[j];
		if(sum == s){
			vector<int> tmp(X + 1, X + i + 1); // 1 => i : X
			res.push_back(tmp);
		}
		else if(sum < s) 
			Try(i + 1, j, n - 1, sum);
		sum -= a[j];
	}
}