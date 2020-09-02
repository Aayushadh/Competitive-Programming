int rotationsearch(int a[],int n)
{
    int l=0;
    int r=n-1;
    while(l<=r)
    {
        if(a[l]<a[r])
        {
            return l;
        }
        
        int mid=(l+((r-l)/2));
        int next=(mid+1)%n;
        int prev=(mid-1+n)%n;

        if((a[prev]>=a[mid]) && a[next]>=a[mid])
        {
            return mid;
        }

        if(a[l]<=a[mid])
        {
            l=mid+1;

        }
        else if(a[r]>=a[mid])
        {
            r=mid-1;
        }


    }

    return -1;

}