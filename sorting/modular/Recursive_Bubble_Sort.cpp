void bubbleSort(vector<int>& arr, int n) 
{
    if(n==1) return;
    for(int j =0;j<n-1;j++){
        if(arr[j]>arr[j+1]){
            swap(arr[j],arr[j+1]);
        }
    }
    bubbleSort(arr,  n-1);
}