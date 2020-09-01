int binarysearch(int a[],int n,int x)
{
    int l,r,mid;
    l=0;r=n-1;
    while(l<=r)
    {
        mid=l+((r-l)/2);
        if(a[mid]==x)
        {
            return mid;
            
        }
        else if(a[mid]>x)
        {
            r=mid-1;
         // if order is descending
          //l=mid+1;
        }
        else
        {
            l=mid+1;
           // r=mid-1;
        }
        
    }

    return -1;
}