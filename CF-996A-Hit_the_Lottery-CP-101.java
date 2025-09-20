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
        int[] denoms = { 100, 20, 10, 5, 1 };
        int money = in.nextInt();

        int taken = 0;

        for (int i = 0; i < 5; i++) {
            if (money >= denoms[i]) {
                taken += money / denoms[i];
                money -= (money / denoms[i]) * denoms[i];
            }
        }

        out.println(taken);
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
