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
		ArrayList<Integer> evens = new ArrayList<>();
		ArrayList<Integer> odds = new ArrayList<>();
		int fEven = 0;
		int fOdd = 0;

		for (int i = 0; i < n; i++) {
			int num = in.nextInt();

			if (num % 2 == 0) {
				if (evens.size() == 0) {
					fEven = i;
				}
				evens.add(num);
			} else {
				if (odds.size() == 0) {
					fOdd = i;
				}
				odds.add(num);
			}

			if (evens.size() >= 2 && odds.size() > 0) {
				out.println(fOdd + 1);
				out.flush();
				return;
			} else if (odds.size() >= 2 && evens.size() > 0) {
				out.println(fEven + 1);
				out.flush();
				return;
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
