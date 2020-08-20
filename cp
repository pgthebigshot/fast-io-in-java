import java.io.*;
import java.util.*;

class helpmarta {
    static class FastReader {
        BufferedReader br;
        StringTokenizer st;

        public FastReader() {
            br = new BufferedReader(new
                    InputStreamReader(System.in));
        }

        String next() {
            while (st == null || !st.hasMoreElements()) {
                try {
                    st = new StringTokenizer(br.readLine());
                } catch (IOException e) {
                    e.printStackTrace();
                }
            }
            return st.nextToken();
        }

        int nextInt() {
            return Integer.parseInt(next());
        }

        long nextLong() {
            return Long.parseLong(next());
        }

        double nextDouble() {
            return Double.parseDouble(next());
        }

        String nextLine() {
            String str = "";
            try {
                str = br.readLine();
            } catch (IOException e) {
                e.printStackTrace();
            }
            return str;
        }
    }

    static FastReader s = new FastReader();
    static PrintWriter out = new PrintWriter(System.out);

    private static int[] rai(int n) {
        int[] arr = new int[n];
        for (int i = 0; i < n; i++) {
            arr[i] = s.nextInt();
        }
        return arr;
    }

    private static int[][] rai(int n, int m) {
        int[][] arr = new int[n][m];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                arr[i][j] = s.nextInt();
            }
        }
        return arr;
    }

    private static long[] ral(int n) {
        long[] arr = new long[n];
        for (int i = 0; i < n; i++) {
            arr[i] = s.nextLong();
        }
        return arr;
    }

    private static long[][] ral(int n, int m) {
        long[][] arr = new long[n][m];
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                arr[i][j] = s.nextLong();
            }
        }
        return arr;
    }

    private static int ri() {
        return s.nextInt();
    }

    private static long rl() {
        return s.nextLong();
    }

    private static String rs() {
        return s.next();
    }

    public static void main(String[] args) {
        StringBuilder ans = new StringBuilder();
        int t,i,j,n,x1,y1,q,x2,y2,fg1=0,fg2=0,cr=0,cl=0,cu=0,cd=0,sum=0;
        t=s.nextInt();
        while(t!=0)
        {
            String str;
            str=s.next();
            //System.out.println("str "+str);
            for(j=0;j<str.length();j++)
            {
                 if(str.charAt(j)=='R')
                     cr++;
                 else if(str.charAt(j)=='L')
                     cl++;
                 else if(str.charAt(j)=='U')
                     cu++;
                 else if(str.charAt(j)=='D')
                     cd++;
            }
            x1=s.nextInt();
            y1=s.nextInt();
            q=s.nextInt();
            
            for(i=0;i<q;i++)
             {
                 x2=s.nextInt();
                 y2=s.nextInt();
                 x2=x2-x1;
                 y2=y2-y1;
                 if(x2>0)
                 {
                         if(cr>=x2)
                          {
                              fg1=1;
                              sum=sum+x2;
                          }
                 }
                 else if(x2<=0)
                 {
                     if(x2==0)
                         fg1=1;
                     else
                     {
                         if(cl>=(int)Math.abs(x2))
                          {
                              fg1=1;
                              sum=sum+(int)Math.abs(x2);
                          }
                     }
                 }
                 if(y2>0)
                 {
                         if(cu>=y2)
                         {
                              fg2=1;
                              sum=sum+y2;
                          }
                 }
                 else if(y2<=0)
                 {
                     if(y2==0)
                         fg2=1;
                     else
                     {
                         if(cd>=(int)Math.abs(y2))
                         {
                              fg2=1;
                              sum=sum+(int)Math.abs(y2);
                          }
                     }
                 }
                 //System.out.println(fg1+"	"+fg2+"		"+x2+"	"+y2);
                 if(fg1==1&&fg2==1)
                 ans.append("YES"+" "+sum);
                 else
                 ans.append("NO");
                 ans.append("\n");
                 fg1=0;fg2=0;sum=0;
             }
             //System.out.println(ans.toString());
             fg1=0;fg2=0;cr=0;cl=0;cu=0;cd=0;
            t--;
        }
        out.print(ans.toString());
        out.flush();

    }

}
