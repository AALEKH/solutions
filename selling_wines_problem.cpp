// Given N number of wines arranged from 1 to N position with varied prices, write a function to generate maximum profit from selling of the wine
// PS: You can sell just one wine per year, prie of wine increases per year by unit 1

int N; // Total number of wines

int P[N]; // Prices of each corresponding wine

int profit(int be, int en) {
  if(be>en) return 0;
  
  int year = N-(en-be+1) + 1;
  
  return max(profit(be+1, en)+year*P[be], profit(be, en-1)+year*P[en]);

}
