package main

import (
	"bufio"
	"os"
	"strconv"
)

func solve(N int64, L int64, x []int64, T []int64) {

}

func main() {
	scanner := bufio.NewScanner(os.Stdin)
	const initialBufSize = 4096
	const maxBufSize = 1000000
	scanner.Buffer(make([]byte, initialBufSize), maxBufSize)
	scanner.Split(bufio.ScanWords)
	var N int64
    scanner.Scan()
    N, _ = strconv.ParseInt(scanner.Text(), 10, 64)
    var L int64
    scanner.Scan()
    L, _ = strconv.ParseInt(scanner.Text(), 10, 64)
    x := make([]int64, N)
    for i := int64(0); i < N; i++ {
        scanner.Scan()
        x[i], _ = strconv.ParseInt(scanner.Text(), 10, 64)
    }
    T := make([]int64, 3)
    for i := int64(0); i < 3; i++ {
        scanner.Scan()
        T[i], _ = strconv.ParseInt(scanner.Text(), 10, 64)
    }
	solve(N, L, x, T)
}
