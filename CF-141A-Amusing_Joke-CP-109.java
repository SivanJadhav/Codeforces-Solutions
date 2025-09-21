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

        String guest = in.nextLine();
        String host = in.nextLine();
        String pile = in.nextLine();

        String names = host + guest;
        char[] namesArray = names.toCharArray();
        Arrays.sort(namesArray);
        String sortedNames = new String(namesArray);

        char[] pileArray = pile.toCharArray();
        Arrays.sort(pileArray);
        String sortedPile = new String(pileArray);

        if (sortedNames.equals(sortedPile)) {
            out.println("YES");
        } else {
            out.println("NO");
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
