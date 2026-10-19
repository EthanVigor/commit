#include <stdio.h>

// 自定义幂函数，计算3的n次方
long long power(int n) {
    long long result = 1;
    for (int i = 0; i < n; i++) {
        result = result * 3;
    }
    return result;
}

int main() {
    int n;
    // 1. 读取输入
    scanf("%d", &n);
    
    // 2. 循环调用函数并打印
    for (int i = 0; i <= n; i++) {
        printf("pow(3,%d) = %lld\n", i, power(i));
    }
    
    return 0;
}
