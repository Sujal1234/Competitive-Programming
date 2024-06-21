void mergesort(int a[], int n){
    //Arguments - static array, size of array
    if(n ==1) return;
    int p = n/2 ; //1-indexing
    
    int L[p];
    int R[n - p];
    for(int i = 0; i < p; i++){
        L[i] = a[i];
    }
    for(int i = p; i < n; i++){
        R[i - p] = a[i];
    }
    mergesort(L, p);
    mergesort(R, n - p);

    int i = p-1, j = n-p-1, c = n-1;
    while(c >= 0){
        if(i >= 0 && L[i] > R[j]){
            a[c] = L[i--];
        }else{
            a[c] = R[j--];
        }
        c--;
    }
}
