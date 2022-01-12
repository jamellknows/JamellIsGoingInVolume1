class negativeIndex{
    final static int MAX = 1000;
    static boolean[][] has = new boolean[MAX + 1][2];
    static boolean search(int x)
    {
        if(x >= 0)
        {
           if( has[a[i]][0] = 1){
               return true;
           
            }else{
           // can be assumed but has[a[i]][1] = 1;
           return false;
           }

        x = Math.abs(x);
        if(has[x][1] == 1)
        {
            return true;
        }

        return false;

        
            //simpler way of doing this
    }

    static void insert(int a[], int n)
    {
        for(int i =0; i < n; i ++)
        {
            if(a[i]>=0){
                has[a[i]][0] = 1;
            }else{
                int abs_i = Maths.abs(a[i]);
                // not too sure about the difference bwteen abs and Abs.
                has[abs_i][1]= true;
            }
        }
    }

    public static void main(String args[])
    {
        int a[] = {-1, 9, -5, -7, -5, 2};
        int n = a.length;
        insert(a, n);
        int x = -5;
        if(search(x) == true)
        {
            System.out.print("Present");
        }else{
            System.out.print("Not Present");
        }
    }
}