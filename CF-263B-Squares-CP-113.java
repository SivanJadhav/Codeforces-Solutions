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

		int n = in.nextInt();
		int k = in.nextInt();

		ArrayList<Integer> as = new ArrayList<>();

		if (k > n) {
			out.println("-1");
			out.flush();
			return;
		}

		for (int i = 0; i < n; i++) {
			int num = in.nextInt();
			as.add(num);
		}

		Collections.sort(as, Collections.reverseOrder());

		int coord = as.get(k - 1);

		out.println(coord + " " + coord);

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
				if (line == null)
					return null;
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
