import java.io.BufferedReader; 
import java.io.IOException; 
import java.io.InputStreamReader; 
import java.util.Scanner; 
import java.util.StringTokenizer; 

public class Main {
    public static void main(String args[] ) throws Exception {

       //FastReader sc = new FastReader();
       Scanner sc = new Scanner(System.in);
       
      
       while(sc.hasNext()){
       int B = sc.nextInt();
       int P= sc.nextInt();
       int M = sc.nextInt();
       int ans =  pow(B,P,M);
       System.out.println(ans);
       }
}

static int pow(int B,int P, int M)
{
	if(P == 0)
		return 1;
	
	int sq = pow(B,P/2,M);
	sq = (sq%M)*(sq%M);
	if(P%2 !=0)
		sq = ((sq%M)*(B%M))%M;
	return sq%M;
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


