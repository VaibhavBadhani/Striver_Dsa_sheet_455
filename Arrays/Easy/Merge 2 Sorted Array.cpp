vector < int > sortedArray(vector < int > a, vector < int > b) {
    int i=0,j=0,n=a.size(),m=b.size();
    vector<int>output;
    while(i<n && j<m){
        if(i>0 && a[i]==a[i-1]){ //To skip the duplicate part
            i++;
            continue;
        }
        if(j>0 && b[j]==b[j-1]){
            j++;
            continue;
        }
        if(a[i]<b[j]){
            output.push_back(a[i]);
            i++;
        }
        else if(b[j]<a[i]){
            output.push_back(b[j]);
            j++;
        }
        else{
            output.push_back(a[i]);
            i++;j++;
        }
    }
    while(i<n){
        if (i > 0 && a[i] == a[i - 1]) {
            i++;
            continue;
        }
        output.push_back(a[i]);
        i++;
    }
     while(j<m){
          if(j>0 && b[j]==b[j-1]){
            j++;
            continue;
        }
        output.push_back(b[j]);
        j++;
    }
    return output;
}