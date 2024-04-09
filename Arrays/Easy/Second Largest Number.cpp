vector<int> getSecondOrderElements(int n, vector<int> a) {
        int maxi = *max_element(a.begin(),a.end());
        int mini = *min_element(a.begin(),a.end());
        int smaxi;
        int smini;
        for(int as:a){
            if(as!=maxi){
                smaxi= max(smaxi,as);
            }
            if(as!=mini){
                smini= min(smini,as);
            }
        }
        return {smaxi, smini};
}
