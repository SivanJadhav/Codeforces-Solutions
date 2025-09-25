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
        HashMap<String, Integer> shapes_and_sides = new HashMap<>();
        shapes_and_sides.put("Tetrahedron", 4);
        shapes_and_sides.put("Cube", 6);
        shapes_and_sides.put("Octahedron", 8);
        shapes_and_sides.put("Dodecahedron", 12);
        shapes_and_sides.put("Icosahedron", 20);

        int n = in.nextInt();

        int faces = 0;

        for (int i = 0; i < n; i++) {
            String polyhedron = in.next();
            faces += shapes_and_sides.get(polyhedron);
        }

        out.println(faces);
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