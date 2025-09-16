int removeDuplicates(vector<int> &arr, int n) {
	// Write your code here.
	int i = 0;
	for(int j = 1; j<n; j++) {
		if(arr[j] != arr[i]) {
			arr[i+1] = arr[j];
			i++;
		}
	}
	return (i+1);
}

int main(){
    vector<int> &arr;
    int n;

    cin >> n;

    for(int i = 0; i<n; i++) cin >> arr[i];

    removeDuplicates(arr, n);
}