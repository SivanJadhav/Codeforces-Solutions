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

        HashSet<Character> letters = new HashSet<>();

        int n = in.nextInt();

        if (n < 26) {
            out.println("NO");
        } else {
            String word = in.next();
            word = word.toLowerCase();
            for (int i = 0, len = word.length(); i < len; i++) {
                letters.add(word.charAt(i));
            }

            if (letters.size() == 26) {
                out.println("YES");
            } else {
                out.println("NO");
            }
        }

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
