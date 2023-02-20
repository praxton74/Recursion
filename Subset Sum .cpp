    void f(int i,long sum,vector<int>arr,int N,vector<int>&ds)
    {
        if(i==N)
        {
            ds.push_back(sum);
            return ;
        }
        f(i+1,sum+arr[i],arr,N,ds);
        f(i+1,sum,arr,N,ds);
    }

    
    vector<int> subsetSums(vector<int> arr, int N)
    {
        // Write Your Code here
        vector<int>ds;
        f(0,0,arr,N,ds);
        return ds;
    }
