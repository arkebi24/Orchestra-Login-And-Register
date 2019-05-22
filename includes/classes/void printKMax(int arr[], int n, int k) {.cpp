void printKMax(int arr[], int n, int k) {
    //Write your code here.
    int sub_arr[(n - k) + 1];
    int arc [n];
    for(int l = 0; l < n; l++) {
        arc[l] = arr[l];
        cout<<arr[l]<<" \n";
    }
    for(int i = 0; i < n; i++) {
        for(int j = i; j < (k+i); j++) {
            if(arr[i] >= arr[j])
                sub_arr[i] = arc[j];
            //else
                //sub_arr[i] = arc[i];
        }
    }
    for(int z = 0; z < k; z++) {
        cout<<sub_arr[z]<<" ";
    }
    
}