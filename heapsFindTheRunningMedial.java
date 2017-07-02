import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

public static double median(List<Integer> data) {
  if ((data.size() & 1) == 1) {
    return data.get(data.size()/2);
  } else {
    int midSize = data.size()/2;
    return (data.get(midSize-1) + data.get(midSize)) / 2.0;
  }
}

public static void main(String[] args) {
  Scanner in = new Scanner(System.in);
  int n = in.nextInt();
  List<Integer> data = new ArrayList<>();
  for (int i = 0; i < n; i++) {
    int a_i = in.nextInt();
    int pos = Collections.binarySearch(data, a_i);
    if (pos < 0) pos = Math.abs(pos)-1;
    data.add(pos, a_i);
    System.out.format("%1$.1f\n", median(data));
  }
}
}
