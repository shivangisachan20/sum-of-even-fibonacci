given Fibonacci Numbers
Given a number N find the sum of all the even valued terms in the fibonacci sequence less than or equal to N. Try generating only even fibonacci numbers instead of iterating over all Fibonacci numbers.
Input Format
Line 1 : An integer N
Output Format
Total Sum
Input Constraints
1 <= N <= 10^6
Sample Input 1:
8
Sample Output 1 :
10


int evenFibSum(int n){

	/*Write your code here.
	 *Don't write main().
	 *Don't take input, it is passed as function argument.
	 *Don't print output.
	 *Taking input and printing output is handled automatically.
	*/
if(n<2)
    return 0;
     long long int ef1 = 0, ef2 = 2;
    long long int sum = ef1 + ef2;
  while(ef2<=n){
      long long int ef3 = 4*ef2 + ef1;
          if(ef3>n)
              break;
      ef1 = ef2;
        ef2 = ef3;
        sum += ef2;
  }
    return sum;
}
