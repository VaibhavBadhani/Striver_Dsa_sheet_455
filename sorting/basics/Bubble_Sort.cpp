void bubbleSort(vector<int>& arr, int n) 
{
    
    for(int i =0;i<n;i++){
        for(int j =0;j<n-1;j++){
            if(arr[j+1]<arr[j])
            {
                swap(arr[j+1],arr[j]);
            }
        }
    }
}