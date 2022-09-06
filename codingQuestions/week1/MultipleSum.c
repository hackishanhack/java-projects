Approach 1
C lang  
#include <stdio.h>

long multipleSum(int x)
{
    long sum3 = 0, sum5 = 0, sum15 = 0;
    
    for(int i=3; i<=x; i+=3)
        sum3 += i;
    for(int i=5; i<=x; i+=5)
        sum5 += i;
    for(int i=15; i<=x; i+=15)
        sum15 += i;
    
    return sum3 + sum5 - sum15;
}

int main() {
    int x = 15;
    printf("%ld", multipleSum(x));
    return 0;
}

Approach 2
C lang
#include <stdio.h>

long multipleSum(int x)
{
    long n;
    n = x / 3;
    long sum3 = (n * (2*3 + (n-1)*3)) / 2;
    n = x / 5;
    long sum5 = (n * (2*5 + (n-1)*5)) / 2;
    n = x / 15;
    long sum15 = (n * (2*15 + (n-1)*15)) / 2;
    
    return sum3 + sum5 - sum15;
}

int main() {
    int x = 15;
    printf("%ld", multipleSum(x));
    return 0;
}

Python
def multipleSum(x):
  n = x // 3
  sum3 = (n * (2*3 + (n-1)*3)) // 2
  n = x // 5
  sum5 = (n * (2*5 + (n-1)*5)) // 2
  n = x // 15
  sum15 = (n * (2*15 + (n-1)*15)) // 2
  return sum3 + sum5 - sum15;

if __name__ == '__main__':
  x = 15
  print(multipleSum(x))
    
Java
import java.util.Scanner;

public class Main {
    static long multipleSum(int x)
    {
        long n;
        n = x / 3;
        long sum3 = (n * (2*3 + (n-1)*3)) / 2;
        n = x / 5;
        long sum5 = (n * (2*5 + (n-1)*5)) / 2;
        n = x / 15;
        long sum15 = (n * (2*15 + (n-1)*15)) / 2;
        
        return sum3 + sum5 - sum15;
    }
    public static void main(String args[]) {
        int x = 15;
        System.out.println(multipleSum(x));
    }
}

