{
  for (int c1 = -1; c1 < (T >= 1 ? T : 0); c1 += 1)
    for (int c2 = 0; c2 < N; c2 += 1)
      if (c2 == 0 && T >= c1 + 1 && c1 >= 0) {
        s0(1, c1, 0, 0, 0);
      } else if (c2 + 1 == N && T >= c1 + 1 && c1 >= 0) {
        s0(1, c1, N - 1, 0, 0);
      } else if (c1 + 1 == 0 && c2 >= 0 && N >= c2 + 1)
        s0(1, -1, c2, 0, 0);
  for (int c1 = 0; c1 <= floord(T - 1, 500); c1 += 1) {
    for (int c3 = -((c1 + 9) / 8) + 2; c3 <= floord(N - 500 * c1 - 3, 4000) + 1; c3 += 1)
      for (int c4 = max(1000 * c1 + 4000 * c3 - 3999, 500 * c1 + 1); c4 <= min(min(2 * N - 4000 * c3 + 3995, N + T - 3), 1000 * c1 + 4000 * c3 - 3000); c4 += 1)
        for (int c5 = max(0, -N - 500 * c1 + c4 + 2); c5 <= min(min(-500 * c1 + c4 - 1, -500 * c1 - 2000 * c3 + (c4 + 1) / 2 + 1999), T - 500 * c1 - 1); c5 += 1)
          s1(2, 500 * c1 + c5, 1, -500 * c1 + c4 - c5, 1);
    for (int c3 = max(-((T + 4000) / 4000) + 2, -((c1 + 9) / 8) + 2); c3 <= floord(N - 500 * c1 - 3, 4000) + 1; c3 += 1)
      for (int c4 = max(1000 * c1 + 4000 * c3 - 3999, -4000 * c3 + 4000); c4 <= min(min(2 * N - 4000 * c3 + 3995, 2 * T + 4000 * c3 - 4000), 1000 * c1 + 4000 * c3 - 3000); c4 += 1)
        s2(2, -2000 * c3 + (c4 + 1) / 2 + 1999, 1, 2000 * c3 + c4 - (c4 + 1) / 2 - 1999, 1);
    for (int c3 = -((c1 + 7) / 8) + 1; c3 <= min(floord(N + T - 1000 * c1 - 1004, 4000) + 1, floord(N - 500 * c1 - 504, 4000) + 1); c3 += 1)
      for (int c4 = max(1000 * c1 + 4000 * c3 - 2999, 500 * c1 + 1); c4 <= min(min(N + T - 3, N + 500 * c1 + 497), 1000 * c1 + 4000 * c3); c4 += 1)
        for (int c5 = max(0, -N - 500 * c1 + c4 + 2); c5 <= min(min(-500 * c1 + c4 - 1, 499), T - 500 * c1 - 1); c5 += 1)
          s3(2, 500 * c1 + c5, 1, -500 * c1 + c4 - c5, 1);
    for (int c3 = max(-((T + 4000) / 4000) + 1, -((c1 + 9) / 8) + 1); c3 <= floord(N - 500 * c1 - 3, 4000); c3 += 1)
      for (int c4 = max(1000 * c1 + 4000 * c3 + 1, -4000 * c3); c4 <= min(min(2 * N - 4000 * c3 - 5, 2 * T + 4000 * c3), 1000 * c1 + 4000 * c3 + 1000); c4 += 1)
        s4(2, -2000 * c3 + (c4 + 1) / 2 - 1, 1, 2000 * c3 + c4 - (c4 + 1) / 2 + 1, 1);
    for (int c3 = -((c1 + 8) / 8) + 1; c3 <= min(floord(N + T - 1000 * c1 - 4, 4000), floord(N - 500 * c1 + 496, 4000)); c3 += 1)
      for (int c4 = max(-4000 * c3 + 2, 1000 * c1 + 4000 * c3 + 1); c4 <= min(min(min(N + T - 3, N + 500 * c1 + 497), 2 * T + 4000 * c3 - 2), 1000 * c1 + 4000 * c3 + 998); c4 += 1)
        for (int c5 = max(-500 * c1 - 2000 * c3 + (c4 + 1) / 2, -N - 500 * c1 + c4 + 2); c5 <= min(min(499, -500 * c1 + c4 - 1), T - 500 * c1 - 1); c5 += 1)
          s5(2, 500 * c1 + c5, 1, -500 * c1 + c4 - c5, 1);
  }
  if (T >= 1)
    for (int c3 = -((T + 3998) / 4000) + 1; c3 <= floord(N - T - 2, 4000) + 1; c3 += 1)
      for (int c4 = max(T, 2 * T + 4000 * c3 - 4001); c4 < min(N + T - 2, 2 * T + 4000 * c3 - 1); c4 += 1)
        s6(2, T - 1, 1, -T + c4 + 1, 1);
}
