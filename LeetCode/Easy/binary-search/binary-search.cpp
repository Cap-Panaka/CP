    int search(vector<int>& a, int target) {
        int l=0;
        int r=a.size()-1;

        while(l<=r)
        {
            int mid = l+(r-l)/2;
            if(a[mid]== target)
            {
                return mid;
            }
            else if(a[mid]>target)
            {
                r=mid-1;
            }
            else
            {
                l=mid+1;
            }
        }
        return -1;
        
    }
};
