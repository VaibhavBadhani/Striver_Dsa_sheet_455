void selectionSort(vector<int>&a) {
    // Write your code here.
    int n = a.size();
    for(int i =0;i<n;i++){
        int mini = i;
        for(int j =i+1;j<n;j++){
            if(a[j]<a[mini]){
                mini = j;
            }
        }
        if(mini!=i){
            swap(a[i],a[mini]);
        }
    }
}