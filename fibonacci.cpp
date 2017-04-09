//Program to demonstrate fibonacci

// Using Recursion

int fibo(int s) {
  if(s < 2){
    return 1;
  }
  return fibo(s-1) + fibo(s-2);
}

// Using DP approach and memoization:

int[] fibo(int s) {
  int fibo[s];
  fibo[0] = 1;
  fibo[1] = 1;
  for(int i = 2; i < s; i++) {
    fibo[i] = fibo[i-1] + fibo[i-2];
  }
  return fibo;
}
