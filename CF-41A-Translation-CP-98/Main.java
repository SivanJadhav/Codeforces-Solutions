import java.io.*;
import java.util.*;

public class Main {
    // Switch between console and file IO
    static boolean useFileIO = false; // set true for USACO-style file IO
    static FastReader in;
    static PrintWriter out;

    public static void main(String[] args) throws IOException {
        if (useFileIO) {
            in = new FastReader(new File("input.txt"));
            out = new PrintWriter(new File("output.txt"));
        } else {
            in = new FastReader();
            out = new PrintWriter(System.out);
        }

        // ========== YOUR CODE STARTS HERE ==========
        String s = in.next();
        String t = in.next();
        
        if (s.length() != t.length()) { out.println("NO"); }
        else {
            int len = s.length();
            int r = len - 1;
            for (int l = 0; l < len && r >= 0; l++, r--) {
                if (s.charAt(l) != t.charAt(r)) {
                    out.println("NO");
                    out.flush();
                    System.exit(0);
                }
            }
            out.println("YES");
            out.flush();
        }
        // ========== YOUR CODE ENDS HERE ============

        out.close();
    }

    // FastReader for both console and file
    static class FastReader {
        BufferedReader br;
        StringTokenizer st;

        // Console
        public FastReader() {
            br = new BufferedReader(new InputStreamReader(System.in));
        }

        // File
        public FastReader(File f) throws IOException {
            br = new BufferedReader(new FileReader(f));
        }

        String next() throws IOException {
            while (st == null || !st.hasMoreTokens()) {
                String line = br.readLine();
                if (line == null) return null;
                st = new StringTokenizer(line);
            }
            return st.nextToken();
        }

        int nextInt() throws IOException {
            return Integer.parseInt(next());
        }

        long nextLong() throws IOException {
            return Long.parseLong(next());
        }

        double nextDouble() throws IOException {
            return Double.parseDouble(next());
        }

        String nextLine() throws IOException {
            st = null; // discard leftover tokens
            return br.readLine();
        }
    }
}
