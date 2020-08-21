import java.io.BufferedReader; 
import java.io.IOException; 
import java.io.InputStreamReader; 
import java.util.*;
import static java.lang.Math.sqrt;
class Main {

    public static void main(String args[] ) throws Exception {

       FastReader sc = new FastReader();
	   int n = sc.nextInt() ;
	   while((n)!= 0)
	   {
		   //System.out.println();
		   ArrayList<Integer> a = new ArrayList<>();
		   
		   for(int i = 1;i<= n;i++)
		   {
			   a.add(sc.nextInt());
		   }
		   double t = n*(n-1)/2;
		   ArrayList<Pair> pair = new ArrayList<>();
		   
		   for(int i = 0;i<n;i++)
		    for(int j= i+1;j<n;j++)
				pair.add(new Pair(a.get(i),a.get(j)));
			
			int counter = 0;
			for(Pair k : pair)
			{
				int g = gcd(k.a,k.b);
				if(g == 1)
					counter++;
				
			
			}
			double ans = 0;
			if(counter != 0)
				ans = Math.sqrt((t/counter)*6);
			if(ans !=0)
				System.out.println((new java.text.DecimalFormat("0.000000"))
						.format(ans));
			else
				System.out.println("No estimate for this data set.");
				
			n = sc.nextInt();
	   }
	   
}
static int gcd(int a,int b)
{
	if(b == 0)
		return a;
	return gcd(b,a%b);
}
static class Pair{
	int a;
	int b;
	public Pair(int a,int b)
	{
		this.a = a;
		this.b = b;
	}
}
static class FastReader 
    { 
        BufferedReader br; 
        StringTokenizer st; 
  
        public FastReader() 
        { 
            br = new BufferedReader(new
                     InputStreamReader(System.in)); 
        } 
  
        String next() 
        { 
            while (st == null || !st.hasMoreElements()) 
            { 
                try
                { 
                    st = new StringTokenizer(br.readLine()); 
                } 
                catch (IOException  e) 
                { 
                    e.printStackTrace(); 
                } 
            } 
            return st.nextToken(); 
        } 
  
        int nextInt() 
        { 
            return Integer.parseInt(next()); 
        } 
  
        long nextLong() 
        { 
            return Long.parseLong(next()); 
        } 
  
        double nextDouble() 
        { 
            return Double.parseDouble(next()); 
        } 
  
        String nextLine() 
        { 
            String str = ""; 
            try
            { 
                str = br.readLine(); 
            } 
            catch (IOException e) 
            { 
                e.printStackTrace(); 
            } 
            return str; 
        } 
    } 
}



 
