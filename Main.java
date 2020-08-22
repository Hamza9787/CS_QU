import java.io.BufferedReader; 
import java.io.IOException; 
import java.io.InputStreamReader; 
import java.util.*;

public class Main {

    public static void main(String args[] ) throws Exception {

       FastReader sc = new FastReader();
	   int n = sc.nextInt() ;
	   while((n)!= 0)
	   {
		    
		    int m = sc.nextInt();
		    double N = 1;
		    if((n-m) > m){
		    for(int i = n;i>(n-m);i--) N *= i;
			for(int i = 2;i<=m;i++)    N /= i;
			}else {
				for(int i = n;i>m;i--)  N *= i;
				for(int i = 2;i<=(n-m);i++)  N /= i;
			}
			System.out.printf("%d things taken %d at a time is %.0f exactly.\n",n,m,N);
			n = sc.nextInt();
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



 
