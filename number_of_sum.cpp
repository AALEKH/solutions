// Program to demonstrate total number of ways to sum 1, 3, 5 to retrieve  a given Number "S"

// This problem is to be solved using concepts of Dynamic Programming

int countCombindations(int s) {
  int DS[s];
  DS[0] = DS[1] = DS[2] = 1;
  DS[3] = 2;
  DS[5] = 5;
  for(int i = 5; i<=s; i++) {
    DS[i] = DS[i-1] + DS[i-3] + DS[i-5];
  }
  return DS[s];
}
