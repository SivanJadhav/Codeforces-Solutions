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

        HashSet<String> seen = new HashSet<>();
        ArrayList<Integer> p1 = new ArrayList<>();
        ArrayList<Integer> p2 = new ArrayList<>();

        int n = in.nextInt();
        int k1 = in.nextInt();

        for (int i = 0; i < k1; i++) {
            int card = in.nextInt();
            p1.add(card);
        }
        int k2 = in.nextInt();
        for (int i = 0; i < k2; i++) {
            int card = in.nextInt();
            p2.add(card);
        }

        String state = p1.toString() + "|" + p2.toString();
        seen.add(state);
        int rounds = 0;

        while (p1.size() > 0 && p2.size() > 0) {
            if (p1.get(0) > p2.get(0)) {
                p1.add(p2.get(0));
                p1.add(p1.get(0));
                p1.remove(0);
                p2.remove(0);
            } else {
                p2.add(p1.get(0));
                p2.add(p2.get(0));
                p1.remove(0);
                p2.remove(0);
            }
            state = p1.toString() + " | " + p2.toString();
            if (seen.contains(state) == true) {
                out.println("-1");
                out.flush();
                return;
            } else {
                seen.add(state);
                rounds++;
            }
        }

        out.print(rounds + " ");
        if (p1.size() == 0) {
            out.println(2);
        } else {
            out.println(1);
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
