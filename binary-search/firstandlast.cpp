int flsearch(int a[],int n,int x)
{
    int l,r,mid;
    int res=-1;
    l=0;r=n-1;
    while(l<=r)
    {
        mid=l+((r-l)/2);
        if(a[mid]==x)
        {
            res=mid;
            r=mid-1; // l=mid+1;
            // if last to be found replace above by l=mid+1;
            
            
        }
        // if order is decending replace > by <  // 
        else if(a[mid]>x) 
        {
            r=mid-1;
        
        }
        else
        {
            l=mid+1;
         
        }
        
    }

    return res;
}