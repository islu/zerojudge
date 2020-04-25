#include <stdio.h>

int is_power_of_2(int);

int main() {
	printf("%d\n", is_power_of_2(32));
	printf("%d\n", is_power_of_2(64));
	printf("%d\n", is_power_of_2(100));
	return 0;
}

int is_power_of_2(int num) {
	if ((num&(num-1)) == 0) return 1;
	else return 0;
}


/*
package main

import "fmt"

	如何判断一个数是否为2的整数次幂
	思路1. 暴力破解：从1开始乘以2，循环并和目标值比较，当大约目标值则终止，显然此方法效率非常低下
	思路2. 把乘以2改为移位运算，提高一点效率，还是没有解决算法的根本问题
	思路3. 通过转换成二进制观察，为2的整数次幂的数字转换成2进制都是首位为1其他位都为0的数字，比如10，100,1000,10000.
			并且如果该值减1都会对应的变成1,11,111,1111.
			这对应的两组值对应求与(10 & 1), (100 & 11), (1000 & 111), (10000 & 1111),发现结果都为0


func isPowerOf2(num int) bool {
	return num&(num-1) == 0
}

func main() {
	fmt.Println(isPowerOf2(32))  // true
	fmt.Println(isPowerOf2(64))  // true
	fmt.Println(isPowerOf2(100)) // false
}
*/