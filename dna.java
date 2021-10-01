import java.io.*;
import java.util.*;

public class HuxleyCode {
	public static void main(String[] args) throws NumberFormatException,
            IOException {
        BufferedReader buf = new BufferedReader(
                new InputStreamReader(System.in));
        int t = Integer.parseInt(buf.readLine());
 
        while (t-- > 0) {
            buf.readLine();
            String[] line = buf.readLine().split(" ");
            int m = Integer.parseInt(line[1]);
            obj[] array = new obj[m];
            for (int i = 0; i < m; i++) {
                array[i] = new obj(buf.readLine(),i);
            }
            Arrays.sort(array);
            for (int i = 0; i < m; i++)
                System.out.println(array[i].s);
            if (t != 0)
                System.out.println();
 
        }
    }
 
    static class obj implements Comparable<obj> {
 
        char[] c;
        String s;
        int invertions;
        int index;
 
        public obj(String s, int ind) {
            index = ind;
            this.s = s;
            c = s.toCharArray();
            invertions = 0;
            for (int i = 0; i < c.length; i++)
                for (int j = i + 1; j < c.length; j++)
                    if (c[j] < c[i])
                        invertions++;
        }
 
        @Override
        public int compareTo(obj arg0) {
            if (invertions != arg0.invertions)
 
                return invertions - arg0.invertions;
            else
                return index - arg0.index;
        }
 
    }
 
}
